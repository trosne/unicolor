#include "unicolor.h"
#include <stdio.h>


int main()
{
  puts("Normal string");
  uni_col_set(COL_RED);
  puts("Red color");
  uni_col_set(COL_WHITE);
  puts("White color");
  uni_col_set(COL_DEFAULT);
  printf("\t\t");
  uni_bg_set(COL_BLUE);
  printf("Blue background ");
  uni_bg_set(COL_RED);
  printf("Red background\n");
  uni_style_set(STYLE_BOLD);
  puts("Bold"); 
  uni_style_clear(STYLE_BOLD);
  printf("Blue background");
  uni_reset();
  puts("\nBack to normal");
  uni_style_set(STYLE_ITALIC);
  puts("Italic");
  uni_style_clear(STYLE_ITALIC);
  uni_style_set(STYLE_BLINK_SLOW);
  puts("Blinking");
  uni_style_set(STYLE_BLINK_FAST);
  puts("Blink fast and slow?");
  uni_reset();
  uni_style_set(STYLE_INVERT);
  puts("Inverted");
  uni_style_clear(STYLE_INVERT);
  puts("Normal");
  for(int i = 1; i < 10; ++i)
  {
    uni_alt_font_set(i);
    printf("Alt font number %i\n", i);
  }

  return 0;
}
