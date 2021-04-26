/*
* Final_Project.c
*
* Created: 4/15/2021 6:29:42 PM
* Author : hp
*/

#include "LED.h"
#include "LCD.h"
#include "SPI.h"

int main(void)
{
	Uint8t data_received = 0;
	LED0_Init();
	LED1_Init();
	LCD_Init();
	SPI_INIT();
	LCD_Clear();
	LCD_Write_String((Uint8t*)"Welcome");
	_delay_ms(1000);
	LCD_Clear();
	/* Replace with your application code */
	while (1)
	{
		data_received = SPI_RECEIVE();
		if (data_received == 'C' || data_received == 'c')
		{
			LCD_Clear();
			data_received = 0;
		}
		else if (data_received == 'A' || data_received == 'a')
		{
			LCD_Clear();
			LED0_ON();
			LCD_Write_Data(data_received);
			_delay_ms(1000);
			LED0_OFF();
			data_received = 0;
		}
		else if(data_received == 'B' || data_received == 'b')
		{
			LCD_Clear();
			LED1_ON();
			LCD_Write_Data(data_received);
			_delay_ms(1000);
			LED1_OFF();
			data_received = 0;
		}
		else
		{
			LCD_Clear();
			LCD_Write_Data(data_received);
			_delay_ms(1000);
			data_received = 0;
		}
	}
}

