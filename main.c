/*
 * first_app.c
 *
 * Created: 9/27/2022 11:54:39 AM
 * Author : engmu
 */ 
///---------Toggle Pin 3 in Port B----///

#define F_CPU 1000000U // 1 MHZ


#include "LED.h"
#include <util/delay.h>

int main(void)
{
	/*     SETUP      */
	uint8 val ;
	led_init(PORT_A,PIN0,OUT);
    dio_init(PORT_C,PIN0,IN) ; 
    while (1) 
    {
	 dio_read (PORT_C,PIN0 , &val);
	 if (val)
	 {
	led_toggle (PORT_A,PIN0);
	_delay_ms(250);
	 }
	else 
	{
		led_off(PORT_A,PIN0);
	}
		
    }
}

