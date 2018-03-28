
#include "sht21.h"

void SHT21_Init (void)
{
	I2C1_config();
}

float SHT21_ReadTemp (void)
{
	uint8_t tmp8[3];
	float ret;
	
	I2C1_read_buf(SHT21_ADDR,SHT21_CMD_TEMPERATURE,tmp8, 3);
	
	ret = -46.85 + 175.72*(float)(tmp8[0]<<8 | (tmp8[1] & 0xFC))/65536;
	 
	return ret;
}

float SHT21_ReadHumidity (void)
{
	uint8_t tmp8[3];
	float ret;
	
	I2C1_read_buf(SHT21_ADDR,SHT21_CMD_HUMIDITY,tmp8, 3);
	
	ret = -6 + 125*(float)(tmp8[0]<<8 | (tmp8[1] & 0xFC))/65536;
	 
	return ret;	
}

