// https://github.com/Sylaina/oled-display

#include <oled.h>

int main(void)
{
    oled_init(OLED_DISP_ON);
    oled_clrscr();

    //oled_charMode(DOUBLESIZE);
    //oled_puts("OLED disp.");

    //oled_charMode(NORMALSIZE);

    // oled_gotoxy(x, y)
    //oled_gotoxy(0, 2);
    //oled_puts("128x64, SHH1106");

    // oled_drawLine(x1, y1, x2, y2, color)
    oled_drawLine(0, 0, 120, 0, WHITE); //-
    oled_drawLine(0, 60, 120, 60, WHITE);//_
    oled_drawLine(0, 0, 0, 60, WHITE);  //levo
    oled_drawLine(120, 0, 120, 60, WHITE); //pravo

    oled_gotoxy(2, 4);
    oled_puts("Hello World");

  

    // Copy buffer to display RAM
    oled_display();

    while (1) {
        ;
    }

    return 0;
}