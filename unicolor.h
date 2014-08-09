#ifndef _UNICOLOR_H__
#define _UNICOLOR_H__

typedef enum
{
  COL_BLACK,
  COL_RED,
  COL_GREEN,
  COL_YELLOW,
  COL_BLUE,
  COL_MAGENTA,
  COL_CYAN,
  COL_WHITE,
  COL_DEFAULT = 9
} unicolor_col;

typedef enum
{
  STYLE_BOLD = 1,
  STYLE_FAINT,
  STYLE_ITALIC,
  STYLE_UNDERLINE,
  STYLE_BLINK_SLOW,
  STYLE_BLINK_FAST,
  STYLE_INVERT,
  STYLE_CROSSED_OUT = 9
} unicolor_style;

void uni_col_set(unicolor_col font_color);

void uni_bg_set(unicolor_col background_color);

void uni_style_set(unicolor_style font_style);

void uni_style_clear(unicolor_style font_style);

void uni_alt_font_set(unsigned char font_number);

void uni_reset(void);


#endif /*_UNICOLOR_H__*/
