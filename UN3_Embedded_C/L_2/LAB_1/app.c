#include "Uart.h"


unsigned char string [100] = "learn-in-depth:Mohamed Elbaradey"; 

void main(void)
{
	uart_send_string(string);
}