#pragma once
#include <pgmspace.h>

// WiFi credentials
const char PROGMEM *WIFI_SSID_1 = "your_ssid_1";
const char PROGMEM *WIFI_PASSWORD_1 = "your_password_1";
const char PROGMEM *WIFI_SSID_2 = "your_ssid_2";
const char PROGMEM *WIFI_PASSWORD_2 = "your_password_2";

// API endpoints and keys
const char PROGMEM AQI_REQUEST[] = "{\"location\": {\"latitude\": XX.XXXXXX,\"longitude\": XX.XXXXXX},\"extraComputations\": [\"POLLUTANT_CONCENTRATION\"]}";
const char PROGMEM AQI_URL[] = "https://airquality.googleapis.com/v1/currentConditions:lookup?key=YOUR_API_KEY";
const char PROGMEM WEATHER_URL[] = "https://weather.googleapis.com/v1/currentConditions:lookup?location.latitude=XX.XXXXXX&location.longitude=XX.XXXXXX&key=YOUR_API_KEY";

// Hardware configuration
#define BATTERY_PIN 35
#define BATTERY_READS 20
#define VOLTAGE_DIVIDER_RATIO 2.21

// Sleep configuration
#define uS_TO_S_FACTOR 1000000ULL
#define TIME_TO_SLEEP 300