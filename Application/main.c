
#include "defines.h"

RCC_ClocksTypeDef RCC_Clock;

float temp, humidity;

int main(void)
{
	
	RCC_GetClocksFreq(&RCC_Clock);	
	
	SHT21_Init();
	
	for(;;)
	{
		temp = SHT21_ReadTemp();
		humidity = SHT21_ReadHumidity();
		
		// delay
		for(int i = 0; i< 1000000; i++);
	}
}

