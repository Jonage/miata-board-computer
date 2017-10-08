#if defined(ARDUINO_ARCH_AVR)
    #include <avr/pgmspace.h>
#elif defined(ARDUINO_SAM_DUE)
    #define PROGMEM
#endif

const uint16_t logoWidth = 80;
const uint16_t logoHeight = 18;
const uint16_t logo[1440] PROGMEM={
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x31A6,0x5AEB,0x8C51,0x9492,0x4208,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 0, 80 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2124,0x8410,0xCE79,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x8430,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 1, 160 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x31A6,0xAD55,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x0861,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x10A2,0x39C7,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 2, 240 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x4A49,0xC638,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xD6BA,0x528A,0x1082,0xBDD7,0xFFFF,0xFFFF,0xFFFF,0x0861,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7BEF,0xFFFF,0xA534,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 3, 320 pixels
0x0000,0x0000,0x0000,0x2965,0xD69A,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDEFB,0x5ACB,0x0000,0x0000,0x0000,0xDEDB,0xFFFF,0xFFFF,0xBDF7,0x0000,0x0000,0x0000,0x0000,0x5AEB,0xA514,0xB5B6,0x7BCF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x738E,0xFFFF,0xFFFF,0x9CD3,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 4, 400 pixels
0x0000,0x4228,0x5AEB,0xCE79,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDEDB,0x0020,0x0000,0x0000,0x0000,0x4A69,0xFFFF,0xFFFF,0xDEFB,0x528A,0x0000,0x0000,0x73AE,0xEF5D,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x2945,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0841,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x18E3,0x6B4D,0x9CF3,0xBDD7,0xBDD7,0xA514,0x8C71,0x8410,0xC618,0xFFFF,0xFFFF,0xFFFF,0x5ACB,0x4208,0x5ACB,0x5ACB,0x52AA,0x18C3,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 5, 480 pixels
0x18C3,0xFFDF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0x31A6,0x0000,0x0000,0x0000,0x0000,0xE73C,0xFFFF,0xD6BA,0x52AA,0x0000,0x39C7,0xD69A,0xFFFF,0xFFFF,0xDEFB,0xFFFF,0xFFFF,0xFFFF,0x73AE,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x31A6,0x9CD3,0xEF7D,0xDEFB,0xAD75,0x0861,0x0000,0x0000,0x0000,0x0000,0x0000,0x18C3,0xAD55,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x31A6,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 6, 560 pixels
0xB596,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x9CD3,0x1082,0x0000,0x0000,0x0000,0x0000,0xA514,0xFFFF,0xFFFF,0x528A,0x0000,0x6B6D,0xFFFF,0xFFFF,0xFFFF,0x528A,0x632C,0xFFFF,0xFFFF,0xFFFF,0x6B6D,0x0000,0x0000,0x18C3,0x18C3,0x0000,0x0000,0x0000,0x0000,0xDEDB,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x4228,0x0000,0x0000,0x0000,0x0000,0x0000,0x1082,0xBDF7,0xD69A,0xD69A,0xE73C,0xF7BE,0xFFDF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEF5D,0x9492,0x5AEB,0x52AA,0x10A2,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 7, 640 pixels
0x9CD3,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDEDB,0x0000,0x0000,0x0000,0x0000,0x0000,0x4A69,0xFFFF,0xFFFF,0x94B2,0x4208,0xD6BA,0xFFFF,0xFFFF,0xE73C,0x39C7,0x0000,0xE73C,0xFFFF,0xFFFF,0xFFFF,0x3186,0x630C,0xD6BA,0xFFDF,0xFFFF,0xCE79,0x3186,0x0000,0x0000,0x18E3,0x73AE,0xC638,0xEF7D,0xFFFF,0xB596,0x0000,0x0000,0x0000,0x0000,0x0000,0x18E3,0x0861,0x0000,0x0000,0x0000,0x0000,0x0000,0x10A2,0x18E3,0x52AA,0xF7BE,0xFFFF,0xFFFF,0xFFFF,0x3186,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 8, 720 pixels
0x0020,0x94B2,0xFFFF,0xFFDF,0xC618,0x39E7,0x0000,0x0000,0x0000,0x0000,0x0861,0xFFDF,0xFFFF,0xEF7D,0x9492,0xF7BE,0xFFFF,0xFFFF,0xA534,0x0841,0x0000,0x73AE,0xFFFF,0xFFFF,0xFFFF,0xC638,0x7BEF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x31A6,0x0000,0x0000,0x0000,0x0000,0x1082,0x94B2,0x4A69,0x0000,0x0000,0x0000,0x0000,0x9492,0xFFFF,0xFFFF,0xE71C,0x7BEF,0x0861,0x3186,0x2124,0x0000,0x0000,0x0000,0xF7BE,0xFFFF,0xFFFF,0xF79E,0x0000,0x0000,0x0000,0x2104,0x6B6D,0x2945,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 9, 800 pixels
0x0000,0x0000,0x2124,0x10A2,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xB5B6,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x73AE,0x0000,0x0000,0x0000,0xCE79,0xFFFF,0xFFFF,0xFFFF,0xC638,0xDEFB,0xFFFF,0xEF7D,0xF7BE,0xFFFF,0xFFFF,0xFFFF,0xE73C,0x0020,0x0000,0x0000,0x738E,0xC618,0xCE79,0x0000,0x0000,0x0000,0x0000,0xB596,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0xFFFF,0xFFFF,0x7BEF,0x0000,0x0841,0xEF7D,0xFFFF,0xFFFF,0xE71C,0x0000,0x0000,0x7BCF,0xFFDF,0xFFFF,0xFFFF,0xC638,0x630C,0x2945,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 10, 880 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4208,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x3186,0x0000,0x0000,0x0000,0x0861,0xF7BE,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x18E3,0x630C,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x4208,0x0000,0x0000,0xB596,0xFFFF,0xFFFF,0xAD75,0x0000,0x0000,0xC638,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xD69A,0x2945,0xE71C,0xFFFF,0xFFFF,0xF79E,0x0000,0x0000,0xDEFB,0xFFFF,0xFFFF,0xEF5D,0x0000,0x8430,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0x73AE,0xFFFF,0xDEDB,0x39E7,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 11, 960 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xE71C,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x5ACB,0x0000,0x0000,0x0000,0x0000,0x0861,0xFFDF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEF5D,0x0000,0x5AEB,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x5AEB,0x0000,0x0000,0x528A,0xFFFF,0xFFFF,0xFFFF,0x4A49,0x94B2,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDEDB,0x0861,0x0000,0xBDF7,0xFFFF,0xFFFF,0xFFFF,0x39E7,0x0000,0xC638,0xFFFF,0xFFFF,0xFFDF,0xD69A,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x6B6D,0x0000,0x0000,0xCE79,0xFFFF,0xFFFF,0xB596,0x0841,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 12, 1040 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x73AE,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x8C71,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xCE59,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x8C71,0x0000,0x8C71,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x4A69,0x0000,0x0000,0x738E,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x8C71,0x0000,0x0000,0x0000,0x5AEB,0xFFFF,0xFFFF,0xFFFF,0xEF7D,0x18E3,0x52AA,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xE71C,0x0000,0x0000,0x0000,0x7BCF,0xFFFF,0xFFFF,0xFFFF,0xA514,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 13, 1120 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x18E3,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x9CD3,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2945,0xD6BA,0xFFFF,0xFFFF,0xFFFF,0xDEDB,0x0861,0x0000,0x8C71,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x3186,0x10A2,0x8C71,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x52AA,0x0000,0x0000,0x0000,0xA534,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFDF,0xBDF7,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x6B4D,0x0000,0x0000,0x0000,0x0000,0xE71C,0xFFFF,0xFFFF,0xFFFF,0x52AA,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 14, 1200 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDEFB,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x94B2,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2945,0x2965,0x4A69,0x10A2,0x0000,0x0000,0x4228,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDEFB,0xF7BE,0xFFFF,0xE71C,0xAD75,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xB596,0x630C,0x8410,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xCE79,0x2965,0x0000,0x0000,0x52AA,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xD69A,0x8C51,0x39E7,0x0020,0x0000,0x0000, // row 15, 1280 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9492,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x8C51,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xBDD7,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x94B2,0x0000,0x7BCF,0x94B2,0xA534,0xC638,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xBDF7,0x9CF3,0xD69A,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDEDB,0xEF5D,0xFFFF,0xA514,0x7BCF,0xD6BA,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x94B2,0x31A6,0xD69A,0xC618, // row 16, 1360 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDEDB,0xFFDF,0xD69A,0xBDF7,0x6B4D,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xD69A,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x9CF3,0x0861,0x0000,0x0000,0x0000,0x0000,0x0000,0x4A69,0xCE79,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xCE59,0x0000,0x0000,0x0000,0x2945,0x52AA,0x52AA,0x4208,0x2945,0x39C7,0x8C51,0x9CD3,0xDEDB,0xF7BE,0xFFFF,0xFFFF,0xFFFF,0xEF5D,0x2124,0x0000,0x0000,0x0000,0x39E7,0x8430,0xCE79,0xF7BE,0xFFFF,0xFFFF,0xFFFF,0x630C}; // row 17, 1440 pixels