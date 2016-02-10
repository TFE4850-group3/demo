/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* insert your hardware initialization here */
    for(;;){
        PORTD = 0b00000001;
        _delay_ms(0);
        PORTD = 0b00000000;
        _delay_ms(10);
    }
    return 0;   /* never reached */
}
