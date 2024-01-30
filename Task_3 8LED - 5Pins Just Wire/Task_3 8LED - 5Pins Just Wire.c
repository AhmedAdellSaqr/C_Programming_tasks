#include "MemMap.h"
#include "Utils.h"
#include "StdTypes.h"
#define  F_CPU      8000000
#include "util/delay.h"


int main(void)
{
	u8 i= 0 ;
	while (1)
	{
		switch(i)
		{
			case 0:
			DDRA = 0x03 ;
			PORTA= 0x02 ;
			//CLR_BIT(PORTA,0);
			//SET_BIT(PORTA,1);
			_delay_ms(1000);
			break;
			case 1:
			DDRA = 0x03 ;
			PORTA= 0x01 ;
			//SET_BIT(PORTA,0);
			//CLR_BIT(PORTA,1);
			_delay_ms(1000);
			break;
			case 2:
			DDRA = 0x05 ;
			PORTA= 0x04 ;
			//CLR_BIT(PORTA,0);
			//SET_BIT(PORTA,2);
			_delay_ms(1000);
			break;
			case 3:
			DDRA = 0x05 ;
			PORTA= 0x01 ;
			//SET_BIT(PORTA,0);
			//CLR_BIT(PORTA,2);
			_delay_ms(1000);
			break;
			case 4:
			DDRA = 0x09 ;
			PORTA= 0x08 ;
			//CLR_BIT(PORTA,0);
			//SET_BIT(PORTA,3);
			_delay_ms(1000);
			break;
			case 5:
			DDRA = 0x09 ;
			PORTA= 0x01 ;
			//SET_BIT(PORTA,0);
			//CLR_BIT(PORTA,3);
			_delay_ms(1000);
			break;
			case 6:
			DDRA = 0x11 ;
			PORTA= 0x10 ;
			//CLR_BIT(PORTA,0);
			//SET_BIT(PORTA,4);
			_delay_ms(1000);
			break;
			case 7:
			DDRA = 0x11 ;
			PORTA= 0x01 ;
			//SET_BIT(PORTA,0);
			//CLR_BIT(PORTA,4);
			_delay_ms(1000);
			break;	
		}	
		i++ ;
		if(i>7)
		{
			i = 0;
		}								
	}
}