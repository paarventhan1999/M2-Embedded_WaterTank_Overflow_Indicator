#include<avr/io.h>
#include <util/delay.h>
#include"led.h"

void led()
{
    DDRD &= ~(1<<PD0); //input pin Port D pin 1
    DDRD &= ~(1<<PD1);  //input pin Port D pin 2

    /*Giving logic HIGH for the input pins*/
    PORTD |= (1<<PD0);
    PORTD |= (1<<PD1);

    /*Giving the output @ pin0 Port B */
    DDRD |= (1<<PD2);

    if  ( (!(PIND & (1<<PD0))) & (!(PIND & (1<<PD1))) )
    {
        PORTD &= ~(1<<PD2);   //Turns off the LED if both the switches are closed
        _delay_ms(1000);
    }
    else if  ( ((PIND & (1<<PD0))) & (!(PIND & (1<<PD1))) )
    {
        PORTD &= ~(1<<PD2);   
        _delay_ms(1000);
    }
    else
    {
       PORTD |= (1<<PD2);  //Turns On the LED
        _delay_ms(1000);
    }
}
