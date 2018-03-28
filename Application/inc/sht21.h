#ifndef _SHT21_H
#define _SHT21_H

#include "defines.h"

#define SHT21_ADDR							0x80

#define SHT21_CMD_TEMPERATURE		0xE3				
#define SHT21_CMD_HUMIDITY			0xE5
#define SHT21_USER_REG					0xE7
#define SHT21_SOFT_RESET				0xFE

#define I2C_TIMEOUT 						100000

void SHT21_Init(void);
float SHT21_ReadTemp (void);
float SHT21_ReadHumidity (void);

#endif