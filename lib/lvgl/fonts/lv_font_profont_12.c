/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --font ProFont.ttf --range 32-127 --format lvgl -o lv_font_profont_12.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_PROFONT_12
#define LV_FONT_PROFONT_12 1
#endif

#if LV_FONT_PROFONT_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfa,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x57, 0xd5, 0xf5, 0x0,

    /* U+0024 "$" */
    0x23, 0xab, 0x47, 0x16, 0xae, 0x20,

    /* U+0025 "%" */
    0x7d, 0x6c, 0xe6, 0xd6, 0x40,

    /* U+0026 "&" */
    0x74, 0xa8, 0x8a, 0xc9, 0xa0,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x2a, 0x49, 0x22, 0x20,

    /* U+0029 ")" */
    0x88, 0x92, 0x4a, 0x80,

    /* U+002A "*" */
    0x27, 0xdd, 0xf2, 0x0,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x4, 0x20, 0x84, 0x10, 0x86, 0x10, 0xc2, 0x0,

    /* U+0030 "0" */
    0x74, 0x67, 0x5c, 0xc5, 0xc0,

    /* U+0031 "1" */
    0x27, 0x8, 0x42, 0x13, 0xe0,

    /* U+0032 "2" */
    0x74, 0x42, 0x22, 0x23, 0xe0,

    /* U+0033 "3" */
    0x74, 0x42, 0x60, 0xc5, 0xc0,

    /* U+0034 "4" */
    0x11, 0x95, 0x2f, 0x88, 0xe0,

    /* U+0035 "5" */
    0xfc, 0x3c, 0x10, 0xc5, 0xc0,

    /* U+0036 "6" */
    0x74, 0x3d, 0x18, 0xc5, 0xc0,

    /* U+0037 "7" */
    0xf8, 0x42, 0x22, 0x10, 0x80,

    /* U+0038 "8" */
    0x74, 0x62, 0xe8, 0xc5, 0xc0,

    /* U+0039 "9" */
    0x74, 0x63, 0x17, 0x85, 0xc0,

    /* U+003A ":" */
    0xf3, 0xc0,

    /* U+003B ";" */
    0xf3, 0xd8,

    /* U+003C "<" */
    0x12, 0x48, 0x42, 0x10,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0x84, 0x21, 0x24, 0x80,

    /* U+003F "?" */
    0x74, 0x42, 0x22, 0x0, 0x80,

    /* U+0040 "@" */
    0x74, 0x6f, 0x5b, 0xc1, 0xe0,

    /* U+0041 "A" */
    0x22, 0x95, 0x1f, 0xc6, 0x20,

    /* U+0042 "B" */
    0xf4, 0x63, 0xe8, 0xc7, 0xc0,

    /* U+0043 "C" */
    0x74, 0x61, 0x8, 0x45, 0xc0,

    /* U+0044 "D" */
    0xf4, 0x63, 0x18, 0xc7, 0xc0,

    /* U+0045 "E" */
    0xfc, 0x21, 0xe8, 0x43, 0xe0,

    /* U+0046 "F" */
    0xfc, 0x21, 0xe8, 0x42, 0x0,

    /* U+0047 "G" */
    0x74, 0x61, 0x38, 0xc5, 0xc0,

    /* U+0048 "H" */
    0x8c, 0x63, 0xf8, 0xc6, 0x20,

    /* U+0049 "I" */
    0xf9, 0x8, 0x42, 0x13, 0xe0,

    /* U+004A "J" */
    0x8, 0x42, 0x18, 0xc5, 0xc0,

    /* U+004B "K" */
    0x9d, 0xb9, 0x8e, 0x5a, 0x60,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x43, 0xe0,

    /* U+004D "M" */
    0x8e, 0xeb, 0x58, 0xc6, 0x20,

    /* U+004E "N" */
    0x8e, 0x6b, 0x38, 0xc6, 0x20,

    /* U+004F "O" */
    0x74, 0x63, 0x18, 0xc5, 0xc0,

    /* U+0050 "P" */
    0xf4, 0x63, 0xe8, 0x42, 0x0,

    /* U+0051 "Q" */
    0x74, 0x63, 0x18, 0xd5, 0xc1,

    /* U+0052 "R" */
    0xf4, 0x63, 0xe8, 0xc6, 0x20,

    /* U+0053 "S" */
    0x74, 0x60, 0xe0, 0xc5, 0xc0,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x80,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc5, 0xc0,

    /* U+0056 "V" */
    0x8c, 0x62, 0xa5, 0x10, 0x80,

    /* U+0057 "W" */
    0x8c, 0x63, 0x5a, 0xee, 0x20,

    /* U+0058 "X" */
    0x8c, 0x54, 0x45, 0x46, 0x20,

    /* U+0059 "Y" */
    0x8c, 0x62, 0xa2, 0x10, 0x80,

    /* U+005A "Z" */
    0xf8, 0x44, 0x44, 0x43, 0xe0,

    /* U+005B "[" */
    0xea, 0xaa, 0xc0,

    /* U+005C "\\" */
    0xc1, 0x6, 0x8, 0x30, 0x41, 0x82, 0x8, 0x10,

    /* U+005D "]" */
    0xd5, 0x55, 0xc0,

    /* U+005E "^" */
    0x22, 0xa2,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x7c, 0x63, 0x36, 0x80,

    /* U+0062 "b" */
    0x84, 0x3d, 0x18, 0xc7, 0xc0,

    /* U+0063 "c" */
    0x74, 0x61, 0x7, 0x80,

    /* U+0064 "d" */
    0x8, 0x5f, 0x18, 0xc5, 0xe0,

    /* U+0065 "e" */
    0x74, 0x7f, 0x7, 0x80,

    /* U+0066 "f" */
    0x34, 0xe4, 0x44, 0x40,

    /* U+0067 "g" */
    0x7c, 0x63, 0x17, 0x85, 0xc0,

    /* U+0068 "h" */
    0x84, 0x3d, 0x18, 0xc6, 0x20,

    /* U+0069 "i" */
    0x43, 0x24, 0xb8,

    /* U+006A "j" */
    0x21, 0x92, 0x49, 0xc0,

    /* U+006B "k" */
    0x84, 0x25, 0x4e, 0x4a, 0x20,

    /* U+006C "l" */
    0xc9, 0x24, 0xb8,

    /* U+006D "m" */
    0xf5, 0x6b, 0x5a, 0x80,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0x80,

    /* U+006F "o" */
    0x74, 0x63, 0x17, 0x0,

    /* U+0070 "p" */
    0xf4, 0x63, 0x1f, 0x42, 0x0,

    /* U+0071 "q" */
    0x7c, 0x63, 0x17, 0x84, 0x20,

    /* U+0072 "r" */
    0xb6, 0x61, 0x8, 0x0,

    /* U+0073 "s" */
    0x7c, 0x1c, 0x1f, 0x0,

    /* U+0074 "t" */
    0x44, 0xe4, 0x44, 0x30,

    /* U+0075 "u" */
    0x8c, 0x63, 0x36, 0x80,

    /* U+0076 "v" */
    0x8c, 0x54, 0xa2, 0x0,

    /* U+0077 "w" */
    0xad, 0x6b, 0x55, 0x0,

    /* U+0078 "x" */
    0x8a, 0x88, 0xa8, 0x80,

    /* U+0079 "y" */
    0x8c, 0x63, 0x17, 0x85, 0xc0,

    /* U+007A "z" */
    0xf8, 0x88, 0x8f, 0x80,

    /* U+007B "{" */
    0x29, 0x25, 0x12, 0x48, 0x80,

    /* U+007C "|" */
    0xff, 0x80,

    /* U+007D "}" */
    0x89, 0x24, 0x52, 0x4a, 0x0,

    /* U+007E "~" */
    0xed, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 96, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 96, .box_w = 1, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 96, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 4, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 8, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 14, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 96, .box_w = 1, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 25, .adv_w = 96, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 29, .adv_w = 96, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 33, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 37, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 41, .adv_w = 96, .box_w = 2, .box_h = 4, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 42, .adv_w = 96, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 43, .adv_w = 96, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 52, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 96, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 96, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 106, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 96, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 112, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 96, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 211, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 96, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 259, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 267, .adv_w = 96, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 270, .adv_w = 96, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 272, .adv_w = 96, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 273, .adv_w = 96, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 274, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 305, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 96, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 96, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 317, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 96, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 342, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 347, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 96, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 380, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 96, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 389, .adv_w = 96, .box_w = 1, .box_h = 9, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 391, .adv_w = 96, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 396, .adv_w = 96, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t lv_font_profont_12 = {
#else
lv_font_t lv_font_profont_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if LV_FONT_PROFONT_12*/

