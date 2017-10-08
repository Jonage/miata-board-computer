

/*
 *
 * mont14
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : mont14.h
 * Date                : 28.12.2016
 * Font size in bytes  : 8865
 * Font width          : 10
 * Font height         : 16
 * Font first char     : 48
 * Font last char      : 123
 * Font used chars     : 75
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef MONT14_H
#define MONT14_H

#define MONT14_WIDTH 10
#define MONT14_HEIGHT 16

static const uint8_t mont14[] PROGMEM = {
    0x22, 0xA1, // size
    0x0A, // width
    0x10, // height
    0x30, // first char
    0x4B, // char count
    
    // char widths
    0x08, 0x04, 0x07, 0x08, 0x08, 0x07, 0x07, 0x07, 0x07, 0x07, 
    0x02, 0x03, 0x06, 0x07, 0x07, 0x07, 0x0B, 0x0A, 0x08, 0x09, 
    0x09, 0x07, 0x07, 0x09, 0x08, 0x02, 0x07, 0x09, 0x07, 0x0B, 
    0x09, 0x0A, 0x08, 0x0B, 0x09, 0x08, 0x08, 0x08, 0x0A, 0x0E, 
    0x0A, 0x09, 0x08, 0x04, 0x08, 0x03, 0x06, 0x08, 0x04, 0x06, 
    0x08, 0x07, 0x07, 0x07, 0x06, 0x07, 0x07, 0x02, 0x04, 0x07, 
    0x02, 0x0C, 0x07, 0x08, 0x08, 0x07, 0x04, 0x07, 0x06, 0x07, 
    0x08, 0x0C, 0x08, 0x08, 0x06, 
    
    // font data
    0xE0, 0xF0, 0x38, 0x18, 0x18, 0x38, 0xF0, 0xC0, 0x07, 0x0F, 0x18, 0x18, 0x18, 0x1C, 0x0F, 0x03, // 48
    0x18, 0x18, 0xF8, 0xF8, 0x00, 0x00, 0x1F, 0x1F, // 49
    0x30, 0x38, 0x18, 0x18, 0xF8, 0xF0, 0x00, 0x18, 0x1C, 0x1E, 0x1B, 0x19, 0x18, 0x18, // 50
    0x00, 0x18, 0x98, 0xD8, 0xF8, 0xB8, 0x18, 0x00, 0x08, 0x1C, 0x19, 0x19, 0x19, 0x1F, 0x0F, 0x02, // 51
    0x00, 0x80, 0xC0, 0xF0, 0xB8, 0x98, 0x80, 0x00, 0x06, 0x07, 0x07, 0x06, 0x1F, 0x1F, 0x1F, 0x06, // 52
    0xF8, 0xF8, 0x98, 0x98, 0x98, 0x98, 0x00, 0x0C, 0x19, 0x18, 0x19, 0x1F, 0x0F, 0x06, // 53
    0xE0, 0xF0, 0xB8, 0x98, 0x98, 0xB8, 0x10, 0x07, 0x1F, 0x19, 0x18, 0x19, 0x1F, 0x0F, // 54
    0x38, 0x38, 0x18, 0xD8, 0xF8, 0x78, 0x18, 0x10, 0x18, 0x1E, 0x07, 0x01, 0x00, 0x00, // 55
    0x70, 0xF8, 0x98, 0x98, 0x98, 0xF8, 0x70, 0x0F, 0x1F, 0x19, 0x19, 0x19, 0x1F, 0x0F, // 56
    0xF0, 0xF8, 0x18, 0x18, 0xB8, 0xF0, 0xE0, 0x08, 0x1D, 0x1B, 0x1B, 0x1D, 0x0F, 0x07, // 57
    0x80, 0x80, 0x19, 0x19, // 58
    0x80, 0x80, 0x00, 0x39, 0x39, 0x08, // 59
    0xC0, 0xC0, 0x60, 0x60, 0x30, 0x38, 0x01, 0x01, 0x03, 0x03, 0x06, 0x0E, // 60
    0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, // 61
    0x38, 0x30, 0x70, 0x60, 0xE0, 0xC0, 0xC0, 0x0E, 0x06, 0x03, 0x03, 0x03, 0x01, 0x01, // 62
    0x20, 0x30, 0x38, 0x98, 0xF8, 0xF8, 0x60, 0x00, 0x00, 0x0A, 0x1B, 0x1B, 0x00, 0x00, // 63
    0xC0, 0x60, 0xB0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0x20, 0xE0, 0x80, 0x0F, 0x10, 0x27, 0x2F, 0x48, 0x48, 0x2F, 0x2F, 0x18, 0x0C, 0x07, // 64
    0x00, 0x00, 0x80, 0xE0, 0xF8, 0x78, 0xF0, 0xC0, 0x00, 0x00, 0x10, 0x1E, 0x0F, 0x07, 0x06, 0x06, 0x07, 0x07, 0x1F, 0x18, // 65
    0xF8, 0xF8, 0x98, 0x98, 0x98, 0xF8, 0xF0, 0x00, 0x1F, 0x1F, 0x19, 0x19, 0x19, 0x19, 0x1F, 0x0E, // 66
    0xE0, 0xF0, 0x38, 0x18, 0x18, 0x18, 0x38, 0x30, 0x10, 0x07, 0x0F, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x08, // 67
    0xF8, 0xF8, 0x18, 0x18, 0x18, 0x38, 0x30, 0xF0, 0xC0, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x0F, 0x07, // 68
    0xF8, 0xF8, 0x98, 0x98, 0x98, 0x98, 0x98, 0x1F, 0x1F, 0x19, 0x19, 0x19, 0x19, 0x19, // 69
    0xF8, 0xF8, 0x98, 0x98, 0x98, 0x98, 0x98, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, // 70
    0xE0, 0xF0, 0x38, 0x18, 0x18, 0x18, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x0F, 0x0F, // 71
    0xF8, 0xF8, 0x80, 0x80, 0x80, 0x80, 0xF8, 0xF8, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x01, 0x1F, 0x1F, // 72
    0xF8, 0xF8, 0x1F, 0x1F, // 73
    0x00, 0x00, 0x18, 0x18, 0xF8, 0xF8, 0xF8, 0x08, 0x1C, 0x18, 0x18, 0x1F, 0x0F, 0x07, // 74
    0xF8, 0xF8, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x18, 0x08, 0x1F, 0x1F, 0x03, 0x01, 0x07, 0x0F, 0x1C, 0x18, 0x10, // 75
    0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, // 76
    0xF8, 0xF8, 0x78, 0xF0, 0xC0, 0x00, 0x80, 0xE0, 0xF8, 0xF8, 0xF8, 0x1F, 0x1F, 0x00, 0x01, 0x07, 0x0F, 0x0F, 0x03, 0x00, 0x1F, 0x1F, // 77
    0xF8, 0xF8, 0x70, 0xE0, 0xC0, 0x80, 0x00, 0xF8, 0xF8, 0x1F, 0x1F, 0x00, 0x00, 0x03, 0x07, 0x0E, 0x1F, 0x1F, // 78
    0xE0, 0xF0, 0x38, 0x18, 0x18, 0x18, 0x18, 0x70, 0xE0, 0xC0, 0x07, 0x0F, 0x1C, 0x18, 0x18, 0x18, 0x18, 0x0E, 0x0F, 0x03, // 79
    0xF8, 0xF8, 0x18, 0x18, 0x18, 0x38, 0xF0, 0xE0, 0x1F, 0x1F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, // 80
    0xE0, 0xF0, 0x38, 0x18, 0x18, 0x18, 0x18, 0x70, 0xE0, 0xC0, 0x00, 0x07, 0x0F, 0x1C, 0x18, 0x18, 0x38, 0x78, 0x6E, 0x6F, 0x33, 0x20, // 81
    0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0xF0, 0xF0, 0x00, 0x1F, 0x1F, 0x03, 0x03, 0x07, 0x0F, 0x1D, 0x19, 0x10, // 82
    0x00, 0xF0, 0xF8, 0xD8, 0x98, 0x98, 0x38, 0x10, 0x08, 0x0C, 0x1C, 0x19, 0x19, 0x19, 0x1F, 0x0F, // 83
    0x18, 0x18, 0x18, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, // 84
    0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x07, 0x0F, 0x1C, 0x18, 0x18, 0x18, 0x1F, 0x0F, // 85
    0x18, 0x78, 0xF0, 0xC0, 0x00, 0x00, 0xE0, 0xF8, 0x38, 0x08, 0x00, 0x00, 0x03, 0x0F, 0x1E, 0x1F, 0x07, 0x01, 0x00, 0x00, // 86
    0x18, 0xF8, 0xF0, 0x80, 0x00, 0xE0, 0xF8, 0x78, 0xF0, 0x80, 0x80, 0xF0, 0xF8, 0x38, 0x00, 0x00, 0x03, 0x1F, 0x1F, 0x07, 0x00, 0x00, 0x07, 0x1F, 0x1F, 0x07, 0x00, 0x00, // 87
    0x08, 0x18, 0x78, 0xF0, 0xC0, 0xE0, 0xF0, 0x38, 0x18, 0x00, 0x10, 0x18, 0x1E, 0x0F, 0x03, 0x07, 0x0F, 0x1C, 0x18, 0x10, // 88
    0x08, 0x38, 0xF0, 0xE0, 0x80, 0xE0, 0x78, 0x38, 0x08, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x01, 0x00, 0x00, 0x00, // 89
    0x18, 0x18, 0x18, 0x98, 0xF8, 0xF8, 0x38, 0x18, 0x1C, 0x1E, 0x1F, 0x1B, 0x19, 0x18, 0x18, 0x18, // 90
    0xFC, 0xFC, 0x0C, 0x0C, 0x7F, 0x7F, 0x60, 0x60, // 91
    0x04, 0x1C, 0x7C, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1E, 0x18, 0x10, // 92
    0x0C, 0xFC, 0xFC, 0x60, 0x7F, 0x7F, // 93
    0x02, 0x02, 0x03, 0x01, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x01, 0x03, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, // 96
    0xC0, 0x40, 0x60, 0x60, 0xC0, 0xC0, 0x0E, 0x1F, 0x1B, 0x1B, 0x1F, 0x1F, // 97
    0xF8, 0xF8, 0xC0, 0x60, 0x60, 0xC0, 0xC0, 0x00, 0x1F, 0x1F, 0x08, 0x18, 0x18, 0x1C, 0x0F, 0x07, // 98
    0x80, 0xC0, 0xE0, 0x60, 0x60, 0xC0, 0x40, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0x1C, 0x08, // 99
    0x80, 0xC0, 0x60, 0x60, 0x40, 0xF8, 0xF8, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0x1F, 0x1F, // 100
    0x80, 0xC0, 0x60, 0x60, 0x60, 0xC0, 0x80, 0x0F, 0x1F, 0x1B, 0x1B, 0x1B, 0x1B, 0x0B, // 101
    0x40, 0xF0, 0xF8, 0xFC, 0x4C, 0x18, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, // 102
    0x80, 0xC0, 0x60, 0x60, 0x40, 0xE0, 0xE0, 0x6F, 0xCF, 0xD8, 0xD8, 0xD8, 0x7F, 0x7F, // 103
    0xF8, 0xF8, 0xC0, 0x60, 0x60, 0xC0, 0x80, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 104
    0xF8, 0xFC, 0x1F, 0x1F, // 105
    0x00, 0x00, 0xFC, 0xF8, 0xC0, 0xC0, 0xFF, 0x7F, // 106
    0xF8, 0xF8, 0x00, 0xC0, 0xE0, 0x60, 0x20, 0x1F, 0x1F, 0x03, 0x07, 0x1E, 0x1C, 0x10, // 107
    0xF8, 0xF8, 0x1F, 0x1F, // 108
    0xE0, 0xE0, 0xC0, 0x60, 0xE0, 0xC0, 0xC0, 0x40, 0x60, 0xE0, 0xC0, 0x80, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 109
    0xE0, 0xE0, 0xC0, 0x60, 0x60, 0xC0, 0x80, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, // 110
    0x80, 0xC0, 0x60, 0x60, 0x60, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0x1F, 0x0F, 0x02, // 111
    0xE0, 0xE0, 0xC0, 0x60, 0x60, 0xC0, 0xC0, 0x00, 0xFF, 0xFF, 0x08, 0x18, 0x18, 0x1C, 0x0F, 0x07, // 112
    0x80, 0xC0, 0x60, 0x60, 0x40, 0xE0, 0xE0, 0x0F, 0x1F, 0x18, 0x18, 0x18, 0xFF, 0xFF, // 113
    0xE0, 0xE0, 0xC0, 0x60, 0x1F, 0x1F, 0x00, 0x00, // 114
    0x00, 0xC0, 0xC0, 0x60, 0x60, 0xC0, 0x40, 0x08, 0x19, 0x1B, 0x1B, 0x1F, 0x1E, 0x0C, // 115
    0x60, 0xF8, 0xF8, 0xF8, 0x60, 0x00, 0x00, 0x07, 0x1F, 0x1F, 0x18, 0x18, // 116
    0xE0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x0F, 0x1F, 0x18, 0x18, 0x08, 0x1F, 0x1F, // 117
    0x60, 0xE0, 0xC0, 0x00, 0x00, 0x80, 0xE0, 0x60, 0x00, 0x01, 0x0F, 0x1E, 0x1E, 0x0F, 0x03, 0x00, // 118
    0x20, 0xE0, 0xC0, 0x00, 0x00, 0xE0, 0xE0, 0xC0, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x01, 0x0F, 0x1E, 0x1F, 0x07, 0x01, 0x0F, 0x1E, 0x1F, 0x07, 0x00, // 119
    0x20, 0x60, 0xE0, 0x80, 0x80, 0xE0, 0x60, 0x20, 0x10, 0x18, 0x1D, 0x0F, 0x0F, 0x1F, 0x18, 0x10, // 120
    0x60, 0xE0, 0xC0, 0x00, 0x00, 0x80, 0xE0, 0x60, 0x40, 0xC1, 0xCF, 0xFE, 0x7E, 0x0F, 0x03, 0x00, // 121
    0x60, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0x1C, 0x1E, 0x1F, 0x1B, 0x19, 0x18 // 122
    
};

#endif