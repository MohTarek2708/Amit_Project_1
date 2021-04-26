/*
* UART_CONFIG.h
*
* Created: 4/15/2021 8:36:49 PM
*  Author: hp
*/


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_
#include "CPU_CONFIGURATION.h"
/*
#define UBRRH (*((volatile Uint8t*)0x40))
#define UBRRL (*((volatile Uint8t*)0x29))
#define UCSRA (*((volatile Uint8t*)0x2B))
#define UCSRB (*((volatile Uint8t*)0x2A))
#define UCSRC (*((volatile Uint8t*)0x40))
#define UDR   (*((volatile Uint8t*)0x2C))
*/
#define FRQ 80000
#define BAUDRATE 96


typedef enum
{
	UART_NOK = 0,
	UART_OK = 1
}UART_STATUS;
#endif /* UART_CONFIG_H_ */