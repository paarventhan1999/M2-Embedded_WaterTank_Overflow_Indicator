#include <avr/io.h>
#include"led.h"
#include"lcd.h"
#include"display.h"
#include<util/delay.h>
int main(void)
{
    LCD_INITIALIZATION();
    while(1)
    {
        led(); 
        lcd(); 
        display(); 
    }
  return 0;
}
