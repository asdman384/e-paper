// https://github.com/Xinyuan-LilyGO/LilyGo-T5-Epaper-Series
#include <time.h>
#include <Arduino.h>
#include <GxEPD.h>
#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>
#include <GxGDEM0213B74/GxGDEM0213B74.h> // 2.13" b/w 128(122)x250, SSD1680, TTGO T5 V2.4.1, V2.3.1
#include <WiFi.h>
#include <HTTPClient.h>

#define ARDUINOJSON_ENABLE_ARDUINO_STREAM 1
#include <ArduinoJSON.h> // https://arduinojson.org/v7/how-to/use-arduinojson-with-httpclient/

// Font for the display
#include <ib8x16u.h> // https://github.com/farsil/ibmfonts/tree/master
#include <images.h>
#include <config.h>

// Define the e-paper display
// Define the SPI pins
GxIO_Class io(SPI, /*CS=5*/ SS, /*DC=*/17, /*RST=*/16); // arbitrary selection of 17, 16
GxEPD_Class display(io, /*RST=*/16, /*BUSY=*/4);        // arbitrary selection of (16), 4

RTC_DATA_ATTR int bootCount = 0;

struct BatteryStatus
{
  float voltage;
  int percentage;
  bool isLow;
};

float get_batter_voltage()
{
  uint32_t sum = 0;
  // Take multiple readings and average them
  for (int i = 0; i < BATTERY_READS; i++)
  {
    sum += analogRead(BATTERY_PIN);
    delay(10);
  }
  float average = sum / BATTERY_READS;

  // Convert ADC reading to voltage
  // ESP32 ADC reference voltage is 3.3V and resolution is 12-bit (4096)
  float voltage = (average * 3.3 / 4096.0) * VOLTAGE_DIVIDER_RATIO;

  return voltage;
}

BatteryStatus get_battery_status()
{
  float voltage = get_batter_voltage();

  // Calculate percentage (adjust these values based on your battery)
  const float MAX_VOLTAGE = 4.2;
  const float MIN_VOLTAGE = 3.3;
  int percentage = ((voltage - MIN_VOLTAGE) / (MAX_VOLTAGE - MIN_VOLTAGE)) * 100;
  percentage = constrain(percentage, 0, 100);

  return {
      .voltage = voltage,
      .percentage = percentage,
      .isLow = voltage < 3.4 // Adjust this threshold as needed
  };
}

class ErrorHandler
{
public:
  static void handleHttpError(JsonDocument &doc, int responseCode, const char *service)
  {
    doc["error"] = String(service) + " HTTP Error code: " + String(responseCode);
  }

  static void handleJsonError(JsonDocument &doc, DeserializationError error, const char *service)
  {
    doc["error"] = String("Deserialize ") + service + " failed: " + error.f_str();
  }
};

void printText(const char *text, bool update = true)
{
  display.fillScreen(GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);

  // // Draw a border around the display
  // for (int x = 0; x < GxEPD_HEIGHT; x++)
  // {
  //   display.drawPixel(x, 6, GxEPD_BLACK);
  //   display.drawPixel(x, 127, GxEPD_BLACK);
  // }
  // for (int y = 6; y < 127; y++)
  // {
  //   display.drawPixel(0, y, GxEPD_BLACK);
  //   display.drawPixel(249, y, GxEPD_BLACK);
  // }

  display.setFont(&ib8x16u);
  display.setCursor(0, 14);
  display.println(text);
  if (update)
  {
    display.update();
  }
}

// Print the wakeup reason for ESP32
void print_wakeup_reason()
{
  esp_sleep_wakeup_cause_t wakeup_reason = esp_sleep_get_wakeup_cause();

  switch (wakeup_reason)
  {
  case ESP_SLEEP_WAKEUP_EXT0:
    Serial.println("Wakeup caused by external signal using RTC_IO");
    break;
  case ESP_SLEEP_WAKEUP_EXT1:
    Serial.println("Wakeup caused by external signal using RTC_CNTL");
    break;
  case ESP_SLEEP_WAKEUP_TIMER:
    Serial.println("Wakeup caused by timer");
    break;
  case ESP_SLEEP_WAKEUP_TOUCHPAD:
    Serial.println("Wakeup caused by touchpad");
    break;
  case ESP_SLEEP_WAKEUP_ULP:
    Serial.println("Wakeup caused by ULP program");
    break;
  default:
    Serial.printf("Wakeup was not caused by deep sleep: %d\n", wakeup_reason);
    break;
  }
}

// Helper function to parse ISO datetime string
tm *parse_iso_datetime(const char *iso_string)
{
  struct tm tm = {0};
  char *ret;

  // Parse ISO format: "2024-04-11T15:30:00Z"
  ret = strptime(iso_string, "%Y-%m-%dT%H:%M:%S", &tm);

  if (ret == NULL)
  {
    Serial.println("Failed to parse datetime");
    return NULL;
  }

  // Convert to time_t (UTC) and adjust for local timezone (UTC+2)
  time_t time = mktime(&tm) + (2 * 3600);
  return localtime(&time);
}

bool try_connect_wifi(const char *ssid, const char *password, int maxAttempts = 5)
{
  WiFi.begin(ssid, password);
  int attempts = 0;

  while (WiFi.status() != WL_CONNECTED && attempts < maxAttempts)
  {
    delay(1000);
    Serial.print(".");
    if (WiFi.status() == WL_NO_SSID_AVAIL || WiFi.status() == WL_CONNECT_FAILED)
    {
      attempts++;
      Serial.printf("Connection failed. Attempt: %d/%d\n", attempts, maxAttempts);
      WiFi.disconnect();
      delay(3000);
      WiFi.begin(ssid, password);
    }
  }

  return WiFi.status() == WL_CONNECTED;
}

void connect_WiFi()
{
  if (!try_connect_wifi(WIFI_SSID_1, WIFI_PASSWORD_1, 2))
  {
    if (!try_connect_wifi(WIFI_SSID_2, WIFI_PASSWORD_2, 5))
    {
      Serial.println("Failed to connect to any WiFi network");
      printText("Failed to connect\nafter all attempts", false);
      display.drawBitmap(offline, 0, 80, 122, 122, GxEPD_BLACK, GxEPD::bm_invert);
      display.update();
      esp_deep_sleep_start();
    }
  }
  Serial.printf("Connected to WiFi with IP: %s\n", WiFi.localIP().toString().c_str());
}

void disconnect_WiFi()
{
  Serial.println("Disconnecting from WiFi...");
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
  Serial.println("Disconnected from WiFi.");
}

bool fetch_data(JsonDocument &doc, const char *url, const char *payload = nullptr, int maxRetries = 3)
{
  HTTPClient http;
  http.useHTTP10(true);
  http.begin(url);

  for (int i = 0; i < maxRetries; i++)
  {
    int responseCode = payload ? http.POST(payload) : http.GET();
    if (responseCode == 200)
    {
      DeserializationError error = deserializeJson(doc, http.getStream());
      if (!error)
      {
        http.end();
        return true;
      }
      ErrorHandler::handleJsonError(doc, error, payload ? "AQI" : "Weather");
    }
    else
    {
      ErrorHandler::handleHttpError(doc, responseCode, payload ? "AQI" : "Weather");
    }
    delay(1000);
  }

  http.end();
  return false;
}

void render(JsonDocument &aqi_doc, JsonDocument &weather_doc, BatteryStatus &battery_status)
{
  char time[20]; // Format: "YYYY-MM-DD    HH:MM" (19 chars + null terminator)
  struct tm *local_time = parse_iso_datetime(weather_doc["currentTime"].as<String>().c_str());

  // TODO: Check if local_time is NULL before using it
  // TODO: Set wakeup timer in setup method
  if (local_time->tm_hour >= 0 && local_time->tm_hour < 8)
  {
    esp_sleep_enable_timer_wakeup(28800 * uS_TO_S_FACTOR); // Sleep for 8 hours
  }

  strftime(time, sizeof(time), "%Y-%m-%d    %H:%M", local_time);

  String render = String(time) + "\n\n";

  render += aqi_doc["indexes"][0]["displayName"].as<String>() + ":  ";
  render += aqi_doc["indexes"][0]["aqiDisplay"].as<String>() + "\n";

  render += aqi_doc["indexes"][0]["category"].as<String>().substring(0, aqi_doc["indexes"][0]["category"].as<String>().indexOf(" air quality")) + "\n";

  render += aqi_doc["pollutants"][3]["displayName"].as<String>() + ":  ";
  render += String(aqi_doc["pollutants"][3]["concentration"]["value"].as<int>()) + " ug/m3\n";

  render += aqi_doc["pollutants"][4]["displayName"].as<String>() + ":  ";
  render += String(aqi_doc["pollutants"][4]["concentration"]["value"].as<int>()) + " ug/m3";

  render += "\n\n";

  render += "It's  " + String(weather_doc["temperature"]["degrees"].as<float>(), 1) + "C\n";
  render += "Feels like  " + String(weather_doc["feelsLikeTemperature"]["degrees"].as<float>(), 1) + "C\n";
  render += "Humidity  " + String(weather_doc["relativeHumidity"].as<int>()) + "%\n";
  render += "Wind  " + String(weather_doc["wind"]["speed"]["value"].as<int>()) + " km/h  ";
  render += String(weather_doc["windChill"]["degrees"].as<float>(), 1) + "C\n";
  render += "Cloud cover  " + String(weather_doc["cloudCover"].as<int>()) + "%\n\n";
  render += "Batt. " + String(battery_status.voltage, 2) + "V    ";
  render += "B:" + String(bootCount);

  printText(render.c_str());
}

void setup()
{
  // Configure ADC for battery monitoring
  analogSetAttenuation(ADC_11db); // Set ADC attenuation for 3.3V full-scale range
  analogReadResolution(12);       // Set ADC resolution to 12-bits

  // Initialize serial communication
  Serial.begin(9600);
  delay(100); // Take some time to open up the Serial Monitor

  // Increment boot number and print it every reboot
  Serial.println("Boot number: " + String(++bootCount));
  print_wakeup_reason();

  // https://github.com/espressif/arduino-esp32/blob/master/libraries/ESP32/examples/DeepSleep/TimerWakeUp/TimerWakeUp.ino
  esp_sleep_enable_timer_wakeup(TIME_TO_SLEEP * uS_TO_S_FACTOR);
  Serial.println("Setup ESP32 to sleep for every " + String(TIME_TO_SLEEP) + " Seconds");

  display.init(); // enable diagnostic output on Serial
  // display.setRotation(1); // rotate to landscape mode
  Serial.println("Display initializing done");

  connect_WiFi();

  JsonDocument aqi_doc;     // https://developers.google.com/maps/documentation/air-quality/current-conditions
  JsonDocument weather_doc; // https://developers.google.com/maps/documentation/weather/current-conditions
  if (!(fetch_data(aqi_doc, AQI_URL, AQI_REQUEST) && fetch_data(weather_doc, WEATHER_URL)))
  {
    Serial.println(aqi_doc["error"].as<String>() + "\n" + weather_doc["error"].as<String>());
    printText((aqi_doc["error"].as<String>() + "\n" + weather_doc["error"].as<String>()).c_str());
  }
  else
  {
    BatteryStatus battery_status = get_battery_status();
    Serial.printf("Battery Voltage: %.2fV\n", battery_status.voltage);
    render(aqi_doc, weather_doc, battery_status);
  }

  aqi_doc.clear();
  weather_doc.clear();
  disconnect_WiFi();
  display.powerDown();

  // https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/system/sleep_modes.html
  esp_sleep_pd_config(ESP_PD_DOMAIN_RTC_PERIPH, ESP_PD_OPTION_OFF);
  Serial.println("Configured all RTC Peripherals to be powered down in sleep");
  Serial.println("Going to sleep now");
  Serial.flush();
  esp_deep_sleep_start();
}

void loop()
{
}
