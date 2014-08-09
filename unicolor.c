#include "unicolor.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define BASE_FONT_COLOR   3
#define BASE_BG_COLOR     4
#define BASE_STYLE_SET    0
#define BASE_STYLE_CLEAR  2
#define BASE_ALT_FONT     1

#define SET_ATTR(base, number) printf("\033[%X%Xm", base, number);

void uni_col_set(unicolor_col font_color)
{
  if ((uint8_t) font_color < 10)
    SET_ATTR(BASE_FONT_COLOR, font_color);
}


void uni_bg_set(unicolor_col background_color)
{
  if ((uint8_t) background_color < 10)
  {
    SET_ATTR(BASE_BG_COLOR, background_color);
  }
}

void uni_style_set(unicolor_style font_style)
{
  if ((uint8_t) font_style < 10 && (uint8_t) font_style > 0)
    SET_ATTR(BASE_STYLE_SET, font_style);
}

void uni_style_clear(unicolor_style font_style)
{
  if ((uint8_t) font_style < 10 && (uint8_t) font_style > 0)
    SET_ATTR(BASE_STYLE_CLEAR, font_style);
}

void uni_alt_font_set(unsigned char font_number)
{
  if (font_number < 10)
    SET_ATTR(BASE_ALT_FONT, font_number);
}

void uni_reset(void)
{
  SET_ATTR(BASE_STYLE_SET, 0);
}
