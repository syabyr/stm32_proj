#include <stdio.h>
#include "usart.h"

int _write(int fd,char *ptr,int len)
{
	(void)HAL_UART_Transmit(&huart1,(uint8_t *)ptr,len,0xFFFF);
	return len;
}