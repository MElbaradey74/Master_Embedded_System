/*
 * LIFO.h
 *
 *  Created on: Dec 4, 2023
 *      Author: elbaradey74
 */

#ifndef LIFO_H_
#define LIFO_H_

#include <stdio.h>
#include <stdlib.h>
///type_definitions

 typedef struct
 {
	unsigned int  length ;
	unsigned int  count  ;
	unsigned int* base   ;
	unsigned int* head   ;
 } LIFO_Buf_T ;

 typedef enum
 {
	 LIFO_no_error ,
	 LIFO_full     ,
	 LIFO_empty    ,
	 LIFO_null
 } LIFO_Status;

///APIS

LIFO_Status LIFO_push_item ( LIFO_Buf_T* LIFO_buf , unsigned int  item );
LIFO_Status LIFO_pop_item ( LIFO_Buf_T* LIFO_buf , unsigned int* item );
LIFO_Status LIFO_init     ( LIFO_Buf_T* LIFO_buf , unsigned int* buf ,unsigned int lenght  );

#endif /* LIFO_H_ */
