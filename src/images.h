#include <pgmspace.h>

const unsigned char cat[240000] PROGMEM = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0xc0,
    0xaa, 0xb6, 0xff, 0xff, 0xff, 0xf7, 0x6d, 0x6b, 0x6d, 0xb7, 0x7b, 0xdd, 0xda, 0xaa, 0xbb, 0x40,
    0xff, 0xff, 0xdb, 0xff, 0xfb, 0x7f, 0xff, 0xff, 0xff, 0xfd, 0xef, 0x7f, 0x7f, 0xff, 0x6d, 0xc0,
    0xb6, 0xd6, 0xff, 0x6d, 0xdf, 0xed, 0xb6, 0xad, 0xad, 0xb7, 0xff, 0xf7, 0xed, 0xaa, 0xd6, 0x80,
    0xef, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0x7b, 0xbd, 0xff, 0x7f, 0xbb, 0xc0,
    0xbb, 0xed, 0xb7, 0xff, 0xfb, 0x76, 0xed, 0xb5, 0xf6, 0xdb, 0xee, 0xff, 0x6b, 0xd5, 0x6d, 0x40,
    0xfd, 0x7f, 0xfe, 0xef, 0x7f, 0xdf, 0xff, 0xff, 0xbf, 0xff, 0x7f, 0xed, 0xfe, 0xff, 0xdf, 0x40,
    0xaf, 0xd6, 0xdf, 0xff, 0xef, 0xff, 0x55, 0x56, 0xed, 0x6d, 0xf7, 0xbf, 0xb7, 0x55, 0x75, 0x80,
    0xf5, 0xbf, 0xfb, 0xfd, 0xfd, 0xf5, 0xff, 0xff, 0xff, 0xff, 0xbd, 0xf6, 0xfd, 0xff, 0xaa, 0xc0,
    0xbf, 0x76, 0xdf, 0xb7, 0xff, 0xbf, 0xfd, 0xb6, 0xb6, 0xd6, 0xff, 0xbf, 0xdf, 0x6a, 0xff, 0x40,
    0xed, 0xdf, 0xff, 0xff, 0xef, 0xff, 0x6f, 0xff, 0xff, 0xff, 0xd6, 0xfb, 0xf5, 0xdf, 0x55, 0x80,
    0xbb, 0xfb, 0x7b, 0x7f, 0xbe, 0xed, 0xfb, 0x6b, 0x6b, 0x6d, 0xff, 0xee, 0xdf, 0x75, 0xb6, 0xc0,
    0xee, 0xbf, 0xdf, 0xfe, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0x7b, 0xbf, 0xfb, 0xde, 0xdb, 0x40,
    0xfb, 0xed, 0xff, 0xef, 0xfb, 0xbb, 0xfb, 0x5a, 0xb6, 0xb7, 0xdf, 0xfb, 0x6e, 0xf7, 0x6d, 0x80,
    0xae, 0xbf, 0x76, 0xff, 0xff, 0xff, 0x6f, 0xff, 0xff, 0xfd, 0xfd, 0xbf, 0xff, 0xba, 0xda, 0xc0,
    0xfb, 0xed, 0xff, 0xfd, 0xfe, 0xef, 0xfd, 0xb7, 0xb5, 0xaf, 0x6f, 0xed, 0xb5, 0xd7, 0x6f, 0x40,
    0xae, 0xff, 0xbf, 0xb7, 0xdb, 0xfd, 0xb7, 0xfd, 0xff, 0xfb, 0xfb, 0x7f, 0xff, 0x7d, 0xb5, 0x80,
    0xfb, 0xad, 0xed, 0xff, 0xff, 0xf7, 0xfe, 0xd7, 0x56, 0xfe, 0xbf, 0xed, 0xad, 0xd6, 0xfa, 0xc0,
    0xb7, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x6f, 0xff, 0xff, 0xaf, 0xed, 0xbf, 0xff, 0x7b, 0xaf, 0x40,
    0xed, 0xed, 0xff, 0xbe, 0xef, 0xed, 0xfb, 0x6d, 0xbb, 0xfb, 0xbf, 0xf6, 0xdb, 0xdd, 0x75, 0x80,
    0xbf, 0x7f, 0xdb, 0xfb, 0xfd, 0xff, 0xdf, 0xff, 0xee, 0xde, 0xf6, 0xdf, 0xfd, 0x6f, 0xad, 0x40,
    0xeb, 0xd6, 0xfe, 0xff, 0xff, 0xbf, 0x7b, 0x56, 0xbf, 0xfb, 0xff, 0xfb, 0x6f, 0xf5, 0x77, 0xc0,
    0xbe, 0xff, 0xf7, 0xef, 0xef, 0xf7, 0xff, 0xff, 0xf6, 0xbf, 0x6d, 0x6f, 0xf5, 0x5f, 0xad, 0x40,
    0xf7, 0xb6, 0xdf, 0xff, 0xbe, 0xfd, 0xad, 0xb5, 0xbf, 0xed, 0xff, 0xfd, 0xbf, 0xf5, 0x76, 0x80,
    0xbd, 0xdf, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xea, 0xff, 0xb6, 0xdf, 0xed, 0xbb, 0xbb, 0xc0,
    0xee, 0xf5, 0xbf, 0x7b, 0xfb, 0xdb, 0xf6, 0xb6, 0xbf, 0xb6, 0xff, 0xf6, 0xbf, 0x6d, 0xd5, 0x40,
    0xbb, 0xbf, 0xf7, 0xef, 0xff, 0xff, 0x5f, 0xff, 0xfb, 0xff, 0xdb, 0x7f, 0xf5, 0xf6, 0xbe, 0x80,
    0xee, 0xed, 0xdf, 0xff, 0xff, 0x77, 0xfb, 0x6b, 0x6e, 0xdb, 0x7f, 0xd5, 0xbf, 0x5d, 0xd5, 0xc0,
    0xbb, 0xbf, 0x7e, 0xff, 0xdd, 0xfd, 0xef, 0xfe, 0xff, 0xff, 0xed, 0xff, 0xed, 0xf7, 0x6e, 0x80,
    0xfe, 0xeb, 0xff, 0xff, 0x7f, 0xdf, 0xbd, 0xab, 0xb5, 0x55, 0xbf, 0x6d, 0xbf, 0x5a, 0xdb, 0x40,
    0xab, 0x7f, 0xb7, 0xb7, 0xff, 0xfe, 0xff, 0xff, 0xef, 0xff, 0xf7, 0xff, 0xeb, 0xff, 0x6d, 0x80,
    0xff, 0x16, 0xff, 0xff, 0xfb, 0xef, 0xed, 0x6d, 0x7e, 0xee, 0xdd, 0x6d, 0x7e, 0xd5, 0xb6, 0xc0,
    0xb5, 0x8b, 0xfd, 0xff, 0xff, 0x7d, 0xbf, 0xff, 0xdb, 0xbb, 0xff, 0xff, 0xdb, 0xbe, 0xdb, 0x40,
    0xef, 0xc3, 0xb7, 0xfd, 0xdf, 0xff, 0xf6, 0xb5, 0xbe, 0xff, 0x6d, 0xb5, 0xfe, 0xeb, 0x6d, 0x80,
    0xba, 0xe0, 0xff, 0xbf, 0xfd, 0xed, 0xdf, 0xff, 0xeb, 0xd7, 0xdf, 0xff, 0x57, 0xbd, 0xb6, 0xc0,
    0xef, 0xf0, 0xbf, 0xff, 0xff, 0xff, 0xfb, 0xaa, 0xbf, 0x7d, 0x7a, 0xd7, 0xfd, 0xd6, 0xdb, 0x40,
    0xbb, 0x78, 0x2e, 0xf7, 0x7f, 0x76, 0xee, 0xff, 0xfb, 0xef, 0xef, 0xfd, 0x6e, 0xfb, 0x6d, 0x40,
    0xee, 0xfc, 0x97, 0xff, 0xf7, 0xff, 0xbf, 0xed, 0xae, 0xdd, 0xbe, 0xdf, 0xfb, 0x56, 0xd6, 0x80,
    0xbb, 0xfe, 0x0b, 0xff, 0xff, 0xdf, 0xfb, 0x7f, 0xff, 0xf7, 0xf7, 0xf5, 0xaf, 0xed, 0xbb, 0xc0,
    0xef, 0xff, 0x22, 0xef, 0xff, 0x7b, 0x6f, 0xd6, 0xb5, 0x5e, 0xde, 0xbf, 0xfa, 0xb7, 0x6d, 0x40,
    0xba, 0xff, 0x09, 0x7f, 0xfd, 0xff, 0xfd, 0xfd, 0xef, 0xfb, 0xfb, 0xed, 0x6f, 0xdd, 0xb5, 0x40,
    0xef, 0xff, 0x95, 0x2f, 0xb7, 0xfd, 0xdf, 0x6f, 0xbd, 0xbf, 0x6f, 0xbf, 0xda, 0xeb, 0x5b, 0x80,
    0xba, 0xff, 0xc2, 0xad, 0xff, 0xef, 0xf7, 0xfb, 0x77, 0xeb, 0xbd, 0xf6, 0xff, 0x5d, 0xed, 0x40,
    0xef, 0xff, 0xe4, 0x56, 0xbf, 0xff, 0x7d, 0x5f, 0xde, 0xbe, 0xf7, 0x7d, 0xab, 0xee, 0xb6, 0xc0,
    0xba, 0xff, 0xe2, 0xa9, 0x5f, 0xbb, 0xef, 0xf5, 0x7b, 0xef, 0xdf, 0xd7, 0xfd, 0x75, 0xdb, 0x40,
    0xef, 0xff, 0xf1, 0x15, 0x47, 0xef, 0xbf, 0xbf, 0xef, 0x7a, 0xfb, 0x7e, 0xb7, 0xaf, 0x6a, 0x80,
    0xb5, 0x7f, 0xf8, 0x52, 0xa8, 0xaf, 0xfa, 0xfb, 0xbd, 0xdf, 0xaf, 0xed, 0xfd, 0xf5, 0xb6, 0xc0,
    0xdf, 0xbf, 0xfc, 0x94, 0xa5, 0x12, 0xef, 0xde, 0xf7, 0x76, 0xfd, 0x7f, 0xae, 0xae, 0xdb, 0x40,
    0xea, 0xff, 0xfe, 0x22, 0x10, 0xaa, 0xbf, 0xf7, 0xbf, 0xdd, 0xdf, 0xd5, 0xf7, 0xf5, 0x6d, 0x40,
    0xbf, 0x7f, 0xfe, 0x09, 0x4a, 0x24, 0x95, 0x5e, 0xea, 0xf7, 0xb5, 0xff, 0x5d, 0x5f, 0xb5, 0x80,
    0xd5, 0xff, 0xff, 0x14, 0x92, 0x68, 0x44, 0x9b, 0xff, 0xbd, 0xff, 0x5b, 0xf7, 0xea, 0xd6, 0xc0,
    0xbf, 0x7f, 0xff, 0x80, 0x41, 0x25, 0x10, 0x45, 0x5b, 0xef, 0x5b, 0xfe, 0xdd, 0x5b, 0x6b, 0x40,
    0xeb, 0xff, 0xff, 0xc2, 0x11, 0x12, 0xc2, 0x00, 0x36, 0xbb, 0xfe, 0xd7, 0x77, 0xed, 0xb5, 0x40,
    0xbd, 0x7f, 0xff, 0xe1, 0x44, 0xa8, 0x10, 0x10, 0x0b, 0xee, 0xdb, 0xfd, 0xfe, 0xb6, 0xdd, 0x80,
    0xef, 0xbf, 0xff, 0xe4, 0x00, 0x11, 0x45, 0x00, 0x02, 0x3b, 0xef, 0x6f, 0xab, 0xdb, 0x56, 0xc0,
    0xb5, 0xdf, 0xff, 0xf0, 0x22, 0xac, 0x20, 0x51, 0x00, 0x0a, 0xbf, 0xba, 0xfd, 0x6d, 0xb5, 0x40,
    0xde, 0xff, 0xff, 0xf8, 0x84, 0x57, 0x49, 0x02, 0x00, 0x40, 0xda, 0xef, 0xaf, 0xb6, 0xda, 0x80,
    0xf7, 0x5f, 0xff, 0xfc, 0x02, 0xa5, 0x20, 0x10, 0x00, 0x12, 0x04, 0xa1, 0xfa, 0xdb, 0x6a, 0x80,
    0xad, 0xf7, 0xff, 0xfe, 0x01, 0x0d, 0x2b, 0x14, 0x00, 0x40, 0x42, 0x54, 0xb7, 0x6d, 0x97, 0xc0,
    0xfb, 0x5f, 0xff, 0xfe, 0x08, 0xa5, 0x34, 0x20, 0x80, 0x01, 0x15, 0x4a, 0xbb, 0xb6, 0x7f, 0xc0,
    0xad, 0xff, 0xff, 0xf7, 0x42, 0x14, 0x94, 0xd0, 0x01, 0x14, 0x00, 0xa0, 0x08, 0xa9, 0xfe, 0x80,
    0xf7, 0x5f, 0xff, 0xdd, 0x90, 0x8a, 0x5d, 0x41, 0x04, 0x00, 0x85, 0x2a, 0xa5, 0x57, 0xfb, 0xc0,
    0xad, 0xff, 0xff, 0xfb, 0xc4, 0x55, 0xed, 0x2a, 0x00, 0x92, 0x50, 0x20, 0x12, 0x2f, 0xed, 0x40,
    0xfe, 0xbf, 0xff, 0xfd, 0x52, 0x95, 0x6c, 0x90, 0x02, 0x42, 0xc8, 0xa9, 0x48, 0xff, 0xbd, 0x40,
    0xab, 0xdf, 0xff, 0xd6, 0xfa, 0x55, 0xb2, 0x54, 0x89, 0x5b, 0x6a, 0x80, 0x03, 0xfe, 0xf7, 0x00,
    0xf6, 0xbf, 0xff, 0xfa, 0x2a, 0xae, 0xaa, 0xa8, 0x01, 0x4a, 0xb0, 0x20, 0x4f, 0xf5, 0xad, 0x80,
    0xaf, 0xdf, 0xff, 0xb5, 0x04, 0xb5, 0x54, 0x50, 0x04, 0xa5, 0x4a, 0x09, 0x3e, 0xdf, 0xf5, 0x40,
    0xfa, 0xaf, 0xff, 0xed, 0x12, 0xaa, 0xd9, 0x45, 0x16, 0xb5, 0x20, 0x00, 0xf7, 0x7d, 0xde, 0x80,
    0xae, 0xaf, 0xfd, 0xb5, 0x40, 0xa9, 0x4a, 0x10, 0x42, 0xb6, 0xa4, 0x03, 0xdd, 0xf7, 0x7a, 0x40,
    0xf5, 0xbf, 0xfe, 0xfa, 0xaa, 0xaa, 0xb5, 0x40, 0x0d, 0x5a, 0x48, 0x0b, 0x6b, 0xdf, 0xee, 0x80,
    0xaf, 0x4d, 0xff, 0xef, 0x56, 0x55, 0x50, 0x19, 0x42, 0xad, 0x20, 0x96, 0xbf, 0xfd, 0xfa, 0xc0,
    0xf5, 0xb6, 0xaf, 0xbd, 0xe9, 0x19, 0x4a, 0xa0, 0x52, 0xaa, 0x88, 0x1a, 0xd7, 0xee, 0xad, 0x40,
    0xaf, 0xd2, 0xbf, 0xf7, 0x2a, 0xa6, 0xb5, 0x28, 0x81, 0x2d, 0x50, 0x2a, 0xde, 0xfb, 0xf6, 0xc0,
    0xf5, 0x7a, 0x7f, 0xfa, 0xd1, 0x35, 0x59, 0x54, 0xb4, 0x95, 0x4a, 0x6a, 0x75, 0xff, 0x6a, 0xc0,
    0xaa, 0xd7, 0xfb, 0x5d, 0x5a, 0xa7, 0x25, 0x49, 0x00, 0x55, 0x24, 0x81, 0xbf, 0xad, 0xbb, 0x80,
    0xb5, 0x6d, 0x77, 0x56, 0xee, 0xb4, 0xd7, 0x50, 0xaa, 0x2b, 0x42, 0x15, 0x52, 0xf6, 0xd5, 0x80,
    0xd5, 0x5f, 0xbf, 0x7b, 0x6b, 0xf6, 0xa5, 0x44, 0x44, 0x94, 0x94, 0x00, 0xed, 0x5d, 0xef, 0x40,
    0x6a, 0xf5, 0x4b, 0x97, 0xf7, 0xda, 0x9f, 0xa8, 0x85, 0x42, 0x11, 0x42, 0x5f, 0x7b, 0x55, 0x00,
    0xab, 0x56, 0xf5, 0xdd, 0x7e, 0xfb, 0x49, 0x68, 0x4a, 0x50, 0x48, 0x95, 0x75, 0xad, 0x56, 0x80,
    0xae, 0xd9, 0x5b, 0x4b, 0xaa, 0xb5, 0xad, 0xb4, 0x29, 0xad, 0x22, 0x04, 0xbd, 0xdb, 0xac, 0x80,
    0xbb, 0x5d, 0xbc, 0xff, 0x6e, 0xbb, 0x76, 0xa1, 0x4a, 0xaa, 0x8a, 0x4a, 0xae, 0x65, 0x7a, 0x40,
    0xaf, 0xef, 0x7e, 0x6d, 0xd5, 0xab, 0x5b, 0xd8, 0x2b, 0x46, 0x54, 0xaa, 0x2f, 0xb6, 0xa5, 0x00,
    0x7a, 0xbf, 0xf7, 0x37, 0xfe, 0xf9, 0x6a, 0xe2, 0x95, 0x52, 0xd4, 0x94, 0x97, 0x9b, 0xd1, 0x40,
    0x9d, 0xde, 0xf7, 0xdc, 0xb7, 0x7d, 0x3b, 0xb8, 0x53, 0x4a, 0x50, 0x6a, 0x55, 0xea, 0x8a, 0x00,
    0x6f, 0x7f, 0x9a, 0xff, 0xfb, 0xad, 0x6d, 0x69, 0x5a, 0x55, 0xaa, 0x95, 0xab, 0x67, 0x65, 0x40,
    0xba, 0xeb, 0xeb, 0xd6, 0xbd, 0xd6, 0xbd, 0xa8, 0xab, 0x52, 0x95, 0x57, 0xd9, 0xb9, 0x91, 0x00,
    0xed, 0xbe, 0xbb, 0xff, 0x77, 0x7d, 0xb6, 0xd2, 0xaa, 0xad, 0x6a, 0x8a, 0xae, 0xaa, 0xd4, 0x80,
    0xb7, 0x6f, 0xdf, 0xff, 0xff, 0xd6, 0x7f, 0x68, 0x55, 0x75, 0xaa, 0xa5, 0x5a, 0x8d, 0xa2, 0x40,
    0xd6, 0xfa, 0xed, 0xfd, 0xee, 0xdd, 0x7d, 0xa1, 0xaa, 0xa8, 0xb6, 0x94, 0xb5, 0x27, 0x49, 0x00,
    0xdd, 0xdf, 0x77, 0xef, 0x5b, 0xea, 0x7e, 0xd2, 0x56, 0xea, 0xa5, 0x6a, 0xca, 0x15, 0x8a, 0x80,
    0xf7, 0xf5, 0xdf, 0xff, 0xff, 0xdd, 0x7e, 0xc9, 0x55, 0xa9, 0x55, 0xb2, 0x20, 0xab, 0x00, 0x40,
    0xee, 0xbf, 0x7f, 0x7f, 0xeb, 0xf4, 0xfe, 0xa9, 0x67, 0xd2, 0xda, 0xe9, 0xaa, 0x14, 0x2a, 0x80,
    0xff, 0xd5, 0xab, 0xff, 0xfe, 0xfd, 0x7e, 0xd1, 0x37, 0x66, 0x55, 0x2c, 0x89, 0x49, 0x04, 0x40,
    0xf5, 0x7f, 0xed, 0xff, 0xff, 0xea, 0xfd, 0x65, 0x6b, 0xe5, 0xab, 0x95, 0x35, 0x55, 0x02, 0x80,
    0xff, 0xed, 0xf6, 0xbf, 0xff, 0xf9, 0xff, 0xb2, 0xb7, 0xb5, 0x5d, 0x6a, 0x65, 0x24, 0xa8, 0x00,
    0xff, 0xfb, 0xde, 0xca, 0xff, 0xfc, 0xfd, 0x51, 0x5f, 0x63, 0x6b, 0xa9, 0x5d, 0xaa, 0x02, 0x80,
    0xff, 0xef, 0xff, 0xf1, 0x5f, 0xfa, 0xfe, 0xe5, 0x6f, 0xd5, 0xba, 0xa9, 0xb5, 0x50, 0x81, 0x00,
    0xff, 0xff, 0xff, 0xf8, 0x03, 0xfd, 0xfd, 0x55, 0xab, 0x66, 0xdf, 0xb6, 0xd9, 0x6d, 0x28, 0x40,
    0xff, 0xfb, 0xfb, 0xf2, 0x00, 0xff, 0xfe, 0xa2, 0x5f, 0xd3, 0x7d, 0x6b, 0x6a, 0xf2, 0x42, 0x00,
    0xff, 0xfe, 0xef, 0xf8, 0x00, 0x3f, 0xfd, 0xbb, 0xaf, 0x4a, 0xf6, 0xad, 0x6b, 0x55, 0x00, 0x80,
    0xff, 0xff, 0xff, 0xf0, 0x2a, 0x1f, 0xfd, 0x65, 0xbf, 0xeb, 0xdd, 0xaa, 0xb5, 0xd8, 0xa8, 0x00,
    0xff, 0xff, 0xff, 0xf8, 0x08, 0x1f, 0xfb, 0xde, 0xdd, 0xaf, 0xf7, 0x6d, 0xfa, 0xb4, 0xa2, 0x40,
    0xff, 0xff, 0xff, 0xf8, 0x20, 0x1f, 0xfd, 0x47, 0x77, 0xc7, 0xbf, 0xf6, 0x2b, 0x6a, 0x28, 0x00,
    0xff, 0xff, 0xff, 0xf8, 0x00, 0x27, 0xf7, 0xf7, 0xdf, 0xbf, 0xff, 0xad, 0xd5, 0xa9, 0x40, 0x00,
    0xff, 0xff, 0xb7, 0xfc, 0x00, 0x3b, 0xfe, 0x9b, 0x7f, 0xdf, 0xff, 0xff, 0xbb, 0x55, 0x54, 0x00,
    0xff, 0xff, 0xff, 0xfe, 0x00, 0x63, 0xfb, 0xed, 0xed, 0x7f, 0xbd, 0xff, 0xd6, 0xaa, 0x28, 0x00,
    0xff, 0xff, 0xfd, 0xff, 0x00, 0xd3, 0xff, 0x6f, 0xbf, 0xf8, 0x03, 0xed, 0x6a, 0xad, 0x44, 0x00,
    0xff, 0xff, 0xff, 0x7f, 0x03, 0x63, 0xfb, 0xbb, 0x57, 0xf0, 0x00, 0x7b, 0xb5, 0x52, 0x50, 0x00,
    0xff, 0xff, 0xff, 0xd7, 0xc2, 0x83, 0xff, 0xef, 0xff, 0xc0, 0x01, 0x1d, 0x56, 0xd9, 0x0a, 0x00,
    0xff, 0xff, 0xff, 0x7f, 0xf0, 0x03, 0xff, 0x7a, 0xbf, 0x00, 0x00, 0x6a, 0xdb, 0x55, 0x50, 0x00,
    0xff, 0xff, 0xff, 0xed, 0xfe, 0xb3, 0xff, 0xef, 0xfc, 0x13, 0x81, 0x3a, 0xb5, 0x55, 0x2a, 0x00,
    0xff, 0xff, 0xff, 0xff, 0x7f, 0xe1, 0xff, 0xbf, 0xbe, 0x88, 0x00, 0x7f, 0xde, 0xaa, 0x90, 0x00,
    0xff, 0xff, 0xff, 0xfd, 0xdf, 0xe3, 0xfe, 0xf6, 0xfc, 0xa0, 0x00, 0xfd, 0xf5, 0x74, 0x54, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xb7, 0xed, 0xff, 0xfb, 0xf8, 0x40, 0x01, 0xff, 0x56, 0xd5, 0x4a, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xf5, 0xaf, 0xf8, 0x80, 0x03, 0xff, 0xfb, 0x55, 0x24, 0x00,
    0xff, 0xff, 0xff, 0xff, 0x6b, 0xfb, 0xf7, 0xdd, 0xf0, 0x50, 0x0f, 0xff, 0xdd, 0xaa, 0xaa, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5e, 0xeb, 0x78, 0x20, 0x3f, 0xf5, 0x76, 0xba, 0xa0, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x4b, 0x9d, 0x61, 0x09, 0xff, 0xff, 0xdb, 0x4d, 0x54, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xed, 0x54, 0xd2, 0xe9, 0xff, 0xff, 0xaa, 0xed, 0xf5, 0xaa, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xbc, 0xae, 0xaa, 0xab, 0xff, 0xf6, 0xff, 0xf6, 0x96, 0xd4, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x92, 0xa8, 0x55, 0xd5, 0x5b, 0x57, 0x5d, 0xeb, 0x54, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xec, 0xaa, 0x54, 0xaf, 0xee, 0xed, 0xff, 0xb6, 0xbd, 0x58, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x4b, 0x40, 0x5f, 0xdd, 0xb7, 0x6a, 0xdb, 0xd6, 0xea, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x15, 0x55, 0x37, 0xff, 0xff, 0xff, 0xed, 0x7b, 0x54, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x4a, 0xa0, 0x6f, 0xff, 0xff, 0xbb, 0x7f, 0xdd, 0xf0, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x07, 0xd0, 0xbf, 0xff, 0xfe, 0xfe, 0xd5, 0x76, 0xa8, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x15, 0x42, 0x5f, 0xff, 0xff, 0xf7, 0xbf, 0xbb, 0xd0, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0b, 0x88, 0xff, 0xff, 0xff, 0xff, 0xf6, 0xed, 0x60, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x4e, 0x81, 0x6f, 0xff, 0xff, 0xf6, 0xff, 0xf7, 0xd0, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x42, 0x83, 0xff, 0xff, 0xff, 0xff, 0xdd, 0xae, 0xa0, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xaa, 0xa3, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xbd, 0x80, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x45, 0xff, 0xff, 0xff, 0xf7, 0x6e, 0xf7, 0x40, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xca, 0xaf, 0xff, 0xff, 0xff, 0xfd, 0xff, 0x7d, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xd5, 0xfd, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x7f, 0xff, 0xbf, 0xff, 0xef, 0x7f, 0xe8, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe5, 0xff, 0xff, 0x7f, 0xff, 0xfd, 0xef, 0xf4, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0xff, 0xfd, 0xcf, 0xff, 0xdf, 0xff, 0xa8, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xeb, 0xff, 0xff, 0xfe, 0xc0, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xfd, 0xfd, 0xff, 0xff, 0x40, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xaf, 0xff, 0xff, 0x88, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x20, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x77, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x80, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x54, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdd, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x05, 0xa0, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xd2, 0xe0, 0x14, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0x4b, 0xfd, 0x3e, 0x82, 0xa0, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xed, 0x08, 0x81, 0x78, 0x08, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb4, 0xba, 0xa2, 0x00, 0x05, 0x95, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf8, 0xda, 0xdf, 0x00, 0xa1, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0xad, 0x6a, 0xd0, 0x10, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xaa, 0xff, 0x91, 0x68, 0x04, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xdd, 0x55, 0x28, 0x0a, 0x00, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xad, 0x57, 0xb5, 0x42, 0xa1, 0x41, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x6b, 0xea, 0xa9, 0x08, 0x00, 0x28, 0x08, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xde, 0xba, 0xd4, 0xd5, 0x20, 0x00, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0xb7, 0xa5, 0x25, 0x20, 0x91, 0x00, 0x80, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7b, 0x7a, 0xb5, 0x52, 0x55, 0x08, 0x10, 0x10, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xd5, 0xd6, 0xd2, 0x95, 0x24, 0xa2, 0x00, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xed, 0x57, 0xa9, 0x49, 0x22, 0xaa, 0x08, 0x00, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xfa, 0xad, 0x6d, 0x4d, 0x2a, 0x98, 0xa1, 0x42, 0x4a, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xfb, 0xad, 0x76, 0xda, 0xa4, 0x94, 0xa5, 0x55, 0x10, 0x10, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xd5, 0x7f, 0xdf, 0xea, 0xa8, 0xa2, 0x52, 0x22, 0x45, 0x02, 0x40, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xdf, 0x7a, 0x14, 0x95, 0x55, 0x44, 0x89, 0x00, 0x48, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xaf, 0x7d, 0xea, 0xc2, 0x42, 0x10, 0x92, 0x48, 0x28, 0x00, 0x08, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xfe, 0xaf, 0x5a, 0x55, 0x54, 0x40, 0x92, 0x01, 0x20, 0x81, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xf5, 0xfa, 0xa9, 0x4c, 0xa2, 0x96, 0xa4, 0x82, 0x04, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0x5f, 0x6b, 0xeb, 0x75, 0xad, 0x52, 0xaa, 0xa8, 0x10, 0x00, 0x12, 0x00,
    0xff, 0xff, 0xff, 0xfd, 0xff, 0xbf, 0x7f, 0xde, 0xd5, 0x5a, 0xaa, 0xaa, 0x80, 0x48, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xef, 0xfe, 0xfb, 0xda, 0xf5, 0xb6, 0xd5, 0x55, 0x54, 0x55, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xb7, 0x5a, 0xaa, 0xaa, 0x53, 0x40, 0x40, 0x20, 0x40,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0xd5, 0x79, 0xd5, 0x5b, 0x55, 0x4c, 0x55, 0x22, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xef, 0x7b, 0xbe, 0x96, 0xb6, 0xd5, 0x2a, 0x2a, 0xaa, 0x84, 0x44, 0x80,
    0xff, 0xff, 0xff, 0xff, 0xbf, 0xd7, 0x77, 0x5e, 0xaa, 0xaa, 0xa9, 0x55, 0x50, 0x51, 0x10, 0x00,
    0xff, 0xff, 0xff, 0xfa, 0xf5, 0x7d, 0xd9, 0xc5, 0x55, 0x55, 0x52, 0x92, 0xaa, 0xaa, 0x89, 0x00,
    0xff, 0xff, 0xff, 0xff, 0xdb, 0xaa, 0xac, 0xab, 0x52, 0xa9, 0x4a, 0xa8, 0x95, 0x48, 0x44, 0x00,
    0xff, 0xff, 0xff, 0xfd, 0x6d, 0xab, 0x66, 0xa5, 0x49, 0x25, 0x29, 0x26, 0xa9, 0x26, 0xa0, 0x00,
    0xff, 0xff, 0xff, 0xf6, 0xb5, 0x55, 0x52, 0xaa, 0xaa, 0x95, 0x4a, 0x98, 0x4a, 0x91, 0x12, 0x00,
    0xfd, 0x7f, 0xff, 0xeb, 0xd5, 0x58, 0xa9, 0x51, 0x55, 0x54, 0xa5, 0x55, 0x50, 0x4c, 0x89, 0x00,
    0xf7, 0x97, 0xff, 0xf5, 0x55, 0x24, 0x54, 0x94, 0xa4, 0x95, 0x19, 0x44, 0xab, 0x50, 0x48, 0x00,
    0xed, 0x6b, 0xff, 0x5a, 0xa8, 0x94, 0x22, 0x89, 0x52, 0x48, 0xa4, 0x25, 0x28, 0x2a, 0xa4, 0x80,
    0xf6, 0xd7, 0xff, 0xb5, 0xa4, 0xa5, 0x18, 0x54, 0x52, 0x82, 0x4b, 0x59, 0x55, 0x45, 0x12, 0x00,
    0x93, 0x53, 0xff, 0xda, 0xaa, 0x52, 0x86, 0xa0, 0x89, 0x4a, 0xa9, 0x44, 0x85, 0x29, 0x00, 0x80,
    0xa8, 0x6f, 0xfe, 0xb6, 0x49, 0x08, 0x42, 0x1c, 0x54, 0x52, 0x01, 0x2a, 0x54, 0xa4, 0xaa, 0x00,
    0x43, 0xbf, 0xfb, 0xda, 0xaa, 0xa5, 0x22, 0xa2, 0x2a, 0x09, 0xe9, 0x15, 0x22, 0x15, 0x10, 0x80,
    0x4e, 0xdf, 0xfe, 0xaa, 0xa9, 0x54, 0x91, 0x4a, 0x29, 0x52, 0x14, 0xa9, 0x55, 0x49, 0x49, 0x40,
    0x3b, 0xff, 0xfb, 0xf5, 0x52, 0x4a, 0xa1, 0xad, 0x16, 0x49, 0x6a, 0x54, 0xa4, 0x52, 0x84, 0x00,
    0xae, 0xaf, 0xfe, 0x96, 0xaa, 0x94, 0xa8, 0x54, 0x8d, 0x55, 0x52, 0x52, 0x53, 0x48, 0x52, 0x40,
    0xab, 0xdf, 0xef, 0x6b, 0x55, 0x52, 0x54, 0xaa, 0x95, 0x54, 0xab, 0x29, 0x20, 0x16, 0x09, 0x00,
    0x5d, 0x5f, 0xfa, 0xf9, 0x4a, 0x25, 0x2a, 0x6a, 0xc5, 0x2a, 0x42, 0x8a, 0x55, 0x41, 0x51, 0x00,
    0xb5, 0x5f, 0xff, 0x55, 0xa9, 0xaa, 0xa5, 0x95, 0x6a, 0xd5, 0x31, 0x55, 0x21, 0x2a, 0x24, 0x40,
    0x6a, 0xbf, 0x6b, 0xaa, 0xaa, 0x92, 0x8b, 0x1b, 0x51, 0x55, 0x0d, 0x4a, 0xa8, 0x01, 0x40, 0x00,
    0xaa, 0x9f, 0xdd, 0xdd, 0x6a, 0xa8, 0x55, 0xca, 0xad, 0xa9, 0x6a, 0xa4, 0x55, 0x41, 0x0a, 0x80,
    0x54, 0x7f, 0xfe, 0xd5, 0x5a, 0xa5, 0x55, 0x47, 0x5a, 0xb5, 0x4a, 0x52, 0xa0, 0x54, 0x80, 0x00,
    0xab, 0x3f, 0xeb, 0x7b, 0x69, 0x2a, 0xaa, 0xb9, 0x6a, 0xaa, 0xa9, 0x52, 0x14, 0x08, 0x49, 0x40,
    0x28, 0xdf, 0xff, 0xad, 0xab, 0x52, 0xd5, 0xad, 0xad, 0x4d, 0x54, 0x29, 0xa8, 0x44, 0x04, 0x00,
    0x23, 0x3f, 0xdd, 0x75, 0x56, 0xab, 0x5a, 0xd6, 0xb5, 0x75, 0x53, 0x92, 0x8a, 0x11, 0x42, 0x00,
    0x54, 0xaf, 0xfe, 0xab, 0x6b, 0x2d, 0x76, 0xeb, 0x5a, 0xaa, 0x94, 0xaa, 0x15, 0x04, 0x00, 0x80,
    0x4a, 0xbf, 0xf7, 0xfd, 0x55, 0x75, 0xae, 0xba, 0xcd, 0xda, 0xaa, 0x94, 0xc0, 0x28, 0xa0, 0x00,
    0xa9, 0x5f, 0x7d, 0xab, 0xdb, 0x56, 0xb5, 0xad, 0xf6, 0xab, 0x55, 0x46, 0x56, 0x05, 0x04, 0x40,
    0x96, 0xdf, 0xef, 0xb4, 0xaa, 0xfb, 0xef, 0xd7, 0x57, 0x55, 0x5a, 0x69, 0x09, 0x40, 0x91, 0x00,
    0xab, 0x5f, 0xba, 0xdb, 0x6f, 0x2f, 0x7a, 0xfd, 0xb9, 0xfa, 0xca, 0xa4, 0xa4, 0x28, 0x00, 0x00,
    0xb5, 0x7f, 0xef, 0xbd, 0xab, 0xfb, 0xdf, 0x57, 0xdd, 0x4d, 0x75, 0x12, 0xa1, 0x04, 0x40, 0x80,
    0xb6, 0xbf, 0xfd, 0xeb, 0x6d, 0x5d, 0x75, 0xed, 0x6d, 0x77, 0x5a, 0xd8, 0x94, 0x40, 0x10, 0x00,
    0xdb, 0xd7, 0xf7, 0x6d, 0xb7, 0xf7, 0xde, 0xb7, 0xb7, 0x5a, 0xca, 0xa6, 0x42, 0x21, 0x00, 0x00,
    0xbe, 0xbf, 0xdd, 0xfe, 0xda, 0x9e, 0xff, 0xfd, 0xea, 0xf5, 0x5a, 0x54, 0x20, 0x00, 0x40, 0x00,
    0xeb, 0x4f, 0xff, 0x55, 0xae, 0xfb, 0xdf, 0x56, 0xbf, 0xaf, 0xae, 0xaa, 0x4a, 0x28, 0x12, 0x00,
    0x76, 0xb3, 0xff, 0xfd, 0xf7, 0xde, 0xeb, 0xff, 0xd2, 0xd9, 0x75, 0x51, 0x20, 0x04, 0x80, 0x00,
    0xdd, 0xad, 0xfa, 0xab, 0x7b, 0x7f, 0x7d, 0x55, 0x7f, 0xbe, 0xab, 0xac, 0x96, 0x00, 0x08, 0x00,
    0xb6, 0xd3, 0xef, 0x77, 0xaa, 0xaa, 0xda, 0xff, 0xea, 0xeb, 0xba, 0xd2, 0x41, 0x01, 0x00, 0x00,
    0xdb, 0x5b, 0xfd, 0xdd, 0xb5, 0xff, 0xff, 0xfb, 0x7b, 0xbd, 0x6d, 0x4a, 0x88, 0x00, 0x20, 0x00,
    0x6d, 0x6b, 0xff, 0xff, 0x6e, 0xb6, 0xab, 0xef, 0xef, 0xed, 0xb7, 0x6a, 0x42, 0x94, 0x00, 0x00,
    0xb6, 0xaa, 0xff, 0x7b, 0xf6, 0xfd, 0xbf, 0xbf, 0xfe, 0xf6, 0xd5, 0x53, 0x28, 0x00, 0x08, 0x00,
    0x0a, 0xeb, 0x7b, 0xef, 0x5d, 0xb7, 0x8a, 0xfb, 0x6f, 0xaf, 0x76, 0xb8, 0xa5, 0x45, 0x00, 0x00,
    0x41, 0x15, 0x7e, 0xdd, 0xf6, 0xfa, 0xab, 0xff, 0xfd, 0xdb, 0xad, 0xd5, 0x92, 0x40, 0x00, 0x00,
    0xa8, 0x40, 0x3b, 0xff, 0xbf, 0xfd, 0xf3, 0xee, 0xff, 0x7c, 0xf6, 0xaa, 0xa9, 0x00, 0x00, 0x00,
    0x4a, 0x90, 0x9f, 0xb7, 0xef, 0x57, 0x50, 0x10, 0x2b, 0xdf, 0x5b, 0x75, 0x24, 0xa8, 0x04, 0x00,
    0xa5, 0x4a, 0x4f, 0xfd, 0x7b, 0xef, 0xe0, 0x00, 0x2a, 0xb7, 0xad, 0xae, 0xd5, 0x04, 0x10, 0x00,
    0x54, 0xaa, 0xaf, 0xef, 0xee, 0xfa, 0xa0, 0x00, 0x04, 0xfd, 0xf6, 0xda, 0xaa, 0xa2, 0x80, 0x00,
    0xaa, 0xa4, 0x8e, 0xfb, 0xff, 0x5f, 0x80, 0x04, 0x82, 0x2f, 0x5f, 0x6d, 0x54, 0xa8, 0x00, 0x00,
    0x55, 0x2a, 0xa3, 0xbe, 0xb7, 0xea, 0xc0, 0x10, 0x2a, 0x15, 0xea, 0xb6, 0xaa, 0x45, 0x20, 0x40,
    0xaa, 0xa9, 0x2b, 0xd7, 0xfa, 0xbd, 0x00, 0x09, 0x25, 0x22, 0x7f, 0xd5, 0xd6, 0xa8, 0x00, 0x00,
    0x55, 0x25, 0x25, 0xfd, 0xdf, 0xee, 0x00, 0x44, 0x55, 0x08, 0x4a, 0xba, 0xaa, 0x02, 0x00, 0x00,
    0xa9, 0x54, 0x91, 0xdf, 0x75, 0x55, 0x01, 0x29, 0x2a, 0x20, 0x2b, 0x6e, 0xe9, 0x50, 0x00, 0x00,
    0x55, 0x4a, 0xa4, 0x76, 0xfb, 0xfa, 0x80, 0x94, 0xaa, 0x00, 0x15, 0x6b, 0x24, 0x84, 0x00, 0x00,
    0xaa, 0xaa, 0x55, 0x7f, 0xad, 0x6a, 0x16, 0xaa, 0xad, 0x00, 0x05, 0x34, 0xa8, 0x10, 0x00, 0x00,
    0xaa, 0xab, 0x48, 0x15, 0x6b, 0xb5, 0x41, 0x55, 0xd4, 0x02, 0x40, 0x89, 0x40, 0x00, 0x00, 0x00,
    0x55, 0x55, 0x55, 0x81, 0xb5, 0xac, 0xad, 0x56, 0xa8, 0xa8, 0x12, 0x20, 0x04, 0x80, 0x04, 0x00,
    0xaa, 0xaa, 0xa4, 0x48, 0x95, 0x55, 0x25, 0x54, 0x92, 0x02, 0xa4, 0x95, 0x40, 0x29, 0x51, 0x00,
    0xaa, 0xac, 0xaa, 0xa5, 0x22, 0x49, 0x22, 0x8a, 0x48, 0xa9, 0x12, 0x48, 0x2a, 0x94, 0x04, 0x40,
    0x55, 0x53, 0x52, 0xa8, 0x88, 0x80, 0x14, 0x51, 0x25, 0x14, 0xa9, 0x25, 0x89, 0x42, 0xa2, 0x80,
    0xaa, 0xd5, 0x2c, 0x96, 0x56, 0x4a, 0x49, 0x2a, 0x92, 0xa2, 0x92, 0x52, 0x52, 0x28, 0x48, 0x00,
    0xaa, 0xaa, 0xd3, 0x69, 0x53, 0x25, 0x24, 0x84, 0x48, 0x14, 0x49, 0x24, 0x89, 0x4a, 0x25, 0x40,
    0xaa, 0xaa, 0xaa, 0x95, 0x54, 0x92, 0x92, 0x52, 0xa5, 0xaa, 0xa4, 0xaa, 0x54, 0x91, 0x90, 0x00,
    0x4a, 0xaa, 0xaa, 0x55, 0x55, 0x54, 0xa9, 0x2a, 0x94, 0xa4, 0x95, 0x25, 0x22, 0x4a, 0x25, 0x40,
    0xab, 0x4d, 0x55, 0xaa, 0x94, 0xa2, 0xac, 0x94, 0xa6, 0x52, 0x52, 0x90, 0x95, 0x29, 0x48, 0x00,
    0x55, 0x55, 0x54, 0xa9, 0x55, 0x2a, 0xb5, 0x52, 0xaa, 0x95, 0x4a, 0x56, 0x52, 0x84, 0x95, 0x40,
    0xb2, 0x75, 0x55, 0x55, 0x49, 0x55, 0x4a, 0x55, 0x55, 0x49, 0x29, 0x22, 0x88, 0x52, 0x40, 0x00,
    0xdb, 0x4a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa9, 0x54, 0xaa, 0x8a, 0x94, 0x55, 0x29, 0x2a, 0x80,
    0x24, 0xb5, 0x55, 0x49, 0x55, 0x55, 0x55, 0x55, 0x2a, 0x92, 0x68, 0x4a, 0xa1, 0x44, 0x92, 0x40,
    0xaa, 0xaa, 0xaa, 0xaa, 0x54, 0xa9, 0x28, 0x94, 0xaa, 0xaa, 0x95, 0x55, 0x1a, 0x2a, 0x49, 0x00,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 0x96, 0xaa, 0xd4, 0xaa, 0x49, 0x4a, 0xa5, 0x41, 0x48, 0x40,
    0xa8, 0x8a, 0x55, 0x55, 0x52, 0x92, 0x51, 0x45, 0x4a, 0xa5, 0x2a, 0xa8, 0x14, 0xac, 0x25, 0x00,
    0xb6, 0xa5, 0x2a, 0xaa, 0xad, 0x55, 0x55, 0x32, 0xa5, 0x52, 0xa5, 0x26, 0xa2, 0x42, 0x92, 0x80,
    0x4a, 0xaa, 0xaa, 0x54, 0xaa, 0xc9, 0x55, 0x95, 0x29, 0x4a, 0x54, 0xa9, 0x55, 0x28, 0x48, 0x40,
    0xaa, 0xaa, 0x95, 0x4a, 0xa9, 0x2a, 0x95, 0x56, 0x92, 0xa9, 0x15, 0x54, 0x24, 0x95, 0x22, 0x00,
    0xb5, 0x55, 0x6a, 0xaa, 0x95, 0x45, 0x54, 0xa8, 0x69, 0x15, 0x55, 0x0a, 0xa2, 0x49, 0x4a, 0x80,
    0x56, 0xaa, 0xaa, 0x95, 0x55, 0x59, 0x22, 0x95, 0x8a, 0xca, 0xa8, 0xa1, 0x55, 0x24, 0xa4, 0x80,
    0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x64, 0x55, 0x29, 0x26, 0x55, 0x00, 0x92, 0x12, 0x40

};

const unsigned char offline[1952] PROGMEM = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0x84, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0x7f, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xfe, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xfc, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xfd, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xf0, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xf1, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xfc, 0x03, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xfa, 0xaf, 0xff, 0xff, 0xa8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf3, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xc5, 0x55, 0x55, 0x55, 0x55, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x07, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x07, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xf8, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0x80, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0x80, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x07, 0xf0, 0x00, 0x00, 0x0e, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x07, 0xf0, 0x00, 0x00, 0x0e, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x03, 0xf0, 0x00, 0x00, 0x0e, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf8, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf8, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf0, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf8, 0xef, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf0, 0xc7, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf0, 0xc7, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf8, 0xc7, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xfe, 0x30, 0xc7, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xfe, 0x30, 0xc7, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xfe, 0x78, 0xc7, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xfe, 0x30, 0xc7, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xfe, 0x30, 0xc7, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xfe, 0x78, 0xc7, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xfe, 0x30, 0xc7, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xfe, 0x30, 0x07, 0xff, 0xff, 0xff, 0x00, 0x78, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xfe, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x00, 0x78, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x01, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xf8, 0x38, 0xc0, 0x00, 0x00, 0x07, 0x0f, 0xff, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0,
    0xfa, 0xf0, 0xca, 0xaa, 0xaa, 0xaf, 0x0f, 0xff, 0x0f, 0xd5, 0x55, 0x52, 0x44, 0x40, 0x07, 0xc0,
    0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x07, 0xff, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xf9, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xfd, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xfd, 0x7f, 0xc0,
    0xff, 0xff, 0xef, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xf8, 0x7f, 0xc0,
    0xff, 0xff, 0xe7, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0

};