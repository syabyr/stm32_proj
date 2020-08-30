#include "oled_interface.h"

void WriteCmd(unsigned char I2C_Command)
{
	HAL_StatusTypeDef result;
	result = HAL_I2C_Mem_Write(&hi2c1,OLED_ADDRESS,0x00,I2C_MEMADD_SIZE_8BIT,&I2C_Command,1,10000);
	if(0 != result)
	{
		printf("WriteCmd:%d\r\n",result);
	}

}
void WriteDat(unsigned char I2C_Data)
{
	HAL_StatusTypeDef result;
	result = HAL_I2C_Mem_Write(&hi2c1,OLED_ADDRESS,0x40,I2C_MEMADD_SIZE_8BIT,&I2C_Data,1,10000);
	if(0 != result)
		{
			printf("WriteDat:%d\r\n",result);
		}
}
