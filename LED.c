/*
 * LED.c
 *
 * Created: 10/6/2022 6:35:44 PM
 *  Author: engmu
 */ 
#include "LED.h"
void led_init (uint8 port , uint8 pin , uint8 direction) 
{
	dio_init(port,pin,direction);
}
void led_on (uint8 port , uint8 pin )
{
	dio_write(port,pin,HIGH);
}
void led_off (uint8 port , uint8 pin )
{
		dio_write(port,pin,LOW);

}
void led_toggle (uint8 port , uint8 pin )
{
	dio_toggle(port , pin);
}