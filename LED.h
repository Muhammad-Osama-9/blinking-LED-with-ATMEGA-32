/*
 * LED.h
 *
 * Created: 10/6/2022 6:36:01 PM
 *  Author: engmu
 */ 


#ifndef LED_H_
#define LED_H_

#include "DIO.h"

void led_init (uint8 port , uint8 pin , uint8 direction) ;
void led_on (uint8 port , uint8 pin );
void led_off (uint8 port , uint8 pin );
void led_toggle (uint8 port , uint8 pin );


#endif /* LED_H_ */