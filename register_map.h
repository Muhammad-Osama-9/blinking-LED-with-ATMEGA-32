/*
 * register_map.h
 *
 * Created: 9/28/2022 10:44:40 AM
 *  Author: engmu
 */ 


#ifndef REGISTER_MAP_H_
#define REGISTER_MAP_H_
#include "std_types.h"
/*********************************************
*                                   DIO-PINS                           *
**********************************************/
                                    //----PORT A---//
#define PORTA  *((volatile uint8 *) (0x3B))  
#define DDRA *((volatile uint8 *) (0x3A))
#define PINA  *((volatile uint8 *) (0x39))
 
                              //----PORT B----//
#define PORTB  *((volatile uint8 *)(0x38))
#define DDRB *((volatile uint8 *)(0x37))
#define PINB  *((volatile uint8 *)(0x36))
                          
						  //----PORTC----//
#define PORTC  *((volatile uint8 *) (0x35))
#define DDRC *((volatile uint8 *) (0x34))
#define PINC  *((volatile uint8 *) (0x33))						  

                            //----PORTD----//
#define PORTD  *((volatile uint8 *) (0x32))
#define DDRD   *((volatile uint8 *) (0x31))
#define PIND   *((volatile uint8 *) (0x30))					
//------------------------------------------------------------------------------------//

// ---  PIN --//
#define PIN0 0
#define PIN1  1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
//-------------------------------------------------------------------------------//


#endif /* REGISTER_MAP_H_ */