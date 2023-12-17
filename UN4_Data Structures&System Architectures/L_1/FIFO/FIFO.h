/*
 * FIFO.h
 *      Author: elbaradey74
 */

#ifndef FIFO_H_
#define FIFO_H_

#include<stdio.h>
#include"Platform_Types.h"
#include<stdint.h>
//USER_Configuration
//select_the_element_type(uint8_t,uint16_t,uint32_t,...)
#define element_type uint8_t

//create buffer
#define width 5
element_type UART_BUFF[width] ;

//FIFO_Data_types
typedef struct
{
	unsigned int length ;
	unsigned int count  ;
	element_type* base  ;
	element_type* head  ;
	element_type* tail  ;
}FIFO_Buf_t;

typedef enum
{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_NULL
}FIFO_Buf_status;

//FIFO_APIS
FIFO_Buf_status FIFO_init    (FIFO_Buf_t* fifo , element_type* buf , uint32_t length);
FIFO_Buf_status FIFO_enqueue (FIFO_Buf_t* fifo , element_type item  );
FIFO_Buf_status FIFO_dequeue (FIFO_Buf_t* fifo , element_type* item );
FIFO_Buf_status FIFO_is_FULL (FIFO_Buf_t* fifo );
void FIFO_print   (FIFO_Buf_t* fifo );




#endif /* FIFO_H_ */
