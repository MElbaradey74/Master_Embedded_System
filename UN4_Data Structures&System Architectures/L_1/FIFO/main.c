/*
 * main.c
 *      Author: elbaradey74
 */

#include "FIFO.h"

void main()
{
	element_type i , temp=0 ;
     FIFO_Buf_t FIFO_uart ;

	if(FIFO_init(&FIFO_uart , UART_BUFF , 5 ) == FIFO_no_error)
		printf("FIFO_INIT ------> DONE\n");

	for( i = 0 ; i < 5 ; i++)
	{
		printf("FIFO_enqueue (%x)\n",i);

		if(FIFO_enqueue( &FIFO_uart , i ) == FIFO_no_error)
			printf("FIFO_enqueue ------> DONE\n");
		else
			printf("FIFO_enqueue ------> faild\n");
	}

	FIFO_print(&FIFO_uart);

	if(FIFO_dequeue( &FIFO_uart , &temp ) == FIFO_no_error)
				printf("FIFO_dequeue %x ------> DONE\n", temp);
	if(FIFO_dequeue( &FIFO_uart , &temp ) == FIFO_no_error)
				printf("FIFO_dequeue %x ------> DONE\n", temp);

	FIFO_print(&FIFO_uart);

}
