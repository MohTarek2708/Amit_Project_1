/*
* SPI_CONFIG.h
*
* Created: 4/15/2021 9:51:43 AM
*  Author: hp
*/


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "CPU_CONFIGURATION.h"

/************************************** SPI-Registers*************************************************/
/*
#define SPCR (*(volatile Uint8t* )(0x2D))
#define SPSR (*(volatile Uint8t* )(0x2E))
#define SPDR (*(volatile Uint8t* )(0x2F))
*/

/*Renaming for modes of SPI*/
#define SPI_MASTER 1
#define SPI_SLAVE  0

#define SPI_MODE SPI_MASTER

#define SPI_PORT DDRB

#define MOSI 5
#define MISO 6
#define SCK  7
#define SS   4




#endif /* SPI_CONFIG_H_ */