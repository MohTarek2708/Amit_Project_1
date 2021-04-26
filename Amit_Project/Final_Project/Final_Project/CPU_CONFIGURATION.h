
/*
 * CPU_CONFIGURATION.h
 *
 * Created: 4/15/2021 3:54:10 PM
 *  Author: hp
 */ 


#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_

#undef F_CPU 
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/io.h> 
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO.h"

#endif /* CPU_CONFIGURATION_H_ */