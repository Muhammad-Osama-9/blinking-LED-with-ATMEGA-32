/*
 * bit_math.h
 *
 * Created: 9/28/2022 11:17:02 AM
 *  Author: engmu
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_
//----DIRECTION DEFINES----//
#define HIGH 1
#define LOW 0 
#define IN 0
#define OUT 1
//------------------------------------------//
#define  CLEAR_BIT(port,pin)     port&=~(1<<pin)
#define SET_BIT(port,pin)          port|=(1<<pin)
#define GET_BIT(port,pin)           port =(port>>pin)&1
#define TOGGLE_BIT(port,pin)    port^=(1<<pin)

#endif /* BIT_MATH_H_ */