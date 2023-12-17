/*
 * main.c
 *
 *  Created on: Dec 4, 2023
 *      Author: elbaradey74
 */
#include <stdio.h>
#include "LIFO.h"
#include <stdlib.h>

unsigned int buffer_1 [5];

void main()
{
	int i , temp =0 ;


	LIFO_Buf_T uart_lifo , I2C_lifo ;

	//static allocation
	LIFO_init(&uart_lifo,buffer_1 , 6);


	//dynamic allocation
	unsigned int* buffer_2 = (unsigned int*) malloc(5*sizeof(unsigned int)) ;
	LIFO_init(&I2C_lifo,buffer_2 , 6);


	for(i = 0 ; i < 7 ; i++ )
	   {
			if( LIFO_push_item (&uart_lifo,i) == LIFO_no_error)
				printf("UART_LIFO ADD : %d \n",i);
     	}

	for(i = 0 ; i <7 ; i++ )
		{
			if( LIFO_pop_item (&uart_lifo,&temp) == LIFO_no_error)
				printf("UART_LIFO Get : %d \n",temp);
		}

	printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    //I2C_lifo
	for(i = 0 ; i < 7 ; i++ )
	   {
			if( LIFO_push_item (&I2C_lifo,i) == LIFO_no_error)
				printf("I2C_lifo ADD : %d \n",i);
     	}

	for(i = 0 ; i <7 ; i++ )
		{
			if( LIFO_pop_item (&I2C_lifo,&temp) == LIFO_no_error)
				printf("I2C_lifo Get : %d \n",temp);
		}


}
