#include <avr/io.h>
#include<util/delay.h>
#include "display.h"
#include "lcd.h"
#define F_CPU 1600000UL

char display()
{
        char Temp[20];
        char start[]="Water Level";
        TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
        TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);//choosing 64 as prescalar as a function oc clock
        DDRB|=(1<<PB1); //set portB
        lcd();
        if((ADC>=0) && (ADC<=209))
        {
        CLEAR_LCD();
        OCR1A=205;
        Temp[0] = '7';
        Temp[1] = '0';
        Temp[2] = '0';
        Temp[3] = 'L';
        Temp[4] = ' ';
        Temp[5] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(20);
        _delay_ms(200);
        }
        else if ((ADC>=210) && (ADC<=509))
        {
        CLEAR_LCD();
        OCR1A=410;
        Temp[0] = '1';
        Temp[1] = '5';
        Temp[2] = '0';
        Temp[3] = '0';
        Temp[4] = 'L';
        Temp[5] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(200);
        }
        else if((ADC>=510) && (ADC<=709))
        {
        CLEAR_LCD();
        OCR1A=717;
        Temp[0] = '2';
        Temp[1] = '0';
        Temp[2] = '0';
        Temp[3] = '0';
        Temp[4] = 'L';
        Temp[5] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(200);
        }
        else if((ADC>=710) && (ADC<=1024))
        {
        CLEAR_LCD();
        OCR1A=974;
        Temp[0] = '2';
        Temp[1] = '5';
        Temp[2] = '0';
        Temp[3] = '0';
        Temp[4] = 'L';
        Temp[5] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(200);
        }

}

