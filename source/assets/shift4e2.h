#if defined(ARDUINO_ARCH_AVR)
    #include <avr/pgmspace.h>
#elif defined(ARDUINO_SAM_DUE)
    #define PROGMEM
#endif

const uint16_t shift4e2Width = 26;
const uint16_t shift4e2Height = 17;
const uint16_t shift4e2[442] PROGMEM={
0x0000,0x2945,0x4208,0x0861,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x18C3,0x4A49,0x18C3,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 0, 26 pixels
0x0000,0x0000,0x2104,0x4A49,0x18E3,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1082,0x4A49,0x18E3,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 1, 52 pixels
0x0000,0x0000,0x0000,0x1082,0x3186,0x2965,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0861,0x4228,0x2104,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000, // row 2, 78 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x2945,0x39E7,0x0841,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0861,0x4228,0x2104,0x0000,0x0000,0x0000,0x0000,0x0000, // row 3, 104 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2124,0x4228,0x0861,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0841,0x4228,0x2104,0x0000,0x0000,0x0000,0x0000, // row 4, 130 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x18E3,0x4A49,0x10A2,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0841,0x4228,0x2104,0x0000,0x0000,0x0000, // row 5, 156 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x10A2,0x4A69,0x2104,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0841,0x4228,0x2104,0x0000,0x0000, // row 6, 182 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0861,0x2965,0x2124,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0861,0x4A49,0x18E3,0x0000, // row 7, 208 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0020,0x2965,0x2945,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1082,0x4A49,0x0020, // row 8, 234 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2965,0x2965,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2124,0x2124, // row 9, 260 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2965,0x3186,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0861,0x39E7, // row 10, 286 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2965,0x2965,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0841,0x4228, // row 11, 312 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2965,0x2965,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x18C3,0x31A6, // row 12, 338 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2965,0x2945,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x39E7,0x10A2, // row 13, 364 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0020,0x2965,0x2965,0x0020,0x0000,0x0000,0x0841,0x31A6,0x2945,0x0000, // row 14, 390 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2945,0x4A49,0x39E7,0x39E7,0x4A69,0x2124,0x0000,0x0000, // row 15, 416 pixels
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1082,0x0861,0x0000,0x0000,0x0000,0x0000}; // row 16, 442 pixels
