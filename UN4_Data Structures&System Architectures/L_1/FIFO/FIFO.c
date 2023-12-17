/*
 * FIFO.c
 *      Author: elbaradey74
 */
#include "FIFO.h"

//FIFO_APIS
FIFO_Buf_status FIFO_init    (FIFO_Buf_t* fifo , element_type* buf , uint32_t length)
{
	if(buf == NULL)
		return FIFO_NULL;

	fifo -> base   = buf  ;
	fifo -> head   = buf  ;
	fifo -> tail   = buf  ;
	fifo -> count  = 0    ;
	fifo -> length = length;

	return FIFO_no_error ;
}

FIFO_Buf_status FIFO_enqueue (FIFO_Buf_t* fifo , element_type item  )
{
	//fifo_is_null?
	if( !fifo || !fifo->base || !fifo->head || !fifo->tail)
		return FIFO_NULL ;

	//fifo_is_full?
	if(FIFO_is_FULL(fifo) == FIFO_full )
		return FIFO_full ;

	*(fifo ->base ) = item ;

	//circler_fifo
    if ((fifo->head+1) == (fifo->base + fifo->length))
       {
		 fifo->head = fifo->base;
	   }
    else{
        fifo->head++;
	}
		fifo ->count++ ;

	return FIFO_no_error ;
}

FIFO_Buf_status FIFO_dequeue (FIFO_Buf_t* fifo , element_type* item )
{
	//fifo_is_null?
	if( !fifo || !fifo->base || !fifo->head || !fifo->tail)		
		return FIFO_NULL ;
	//fifo_is_empty?
	if( fifo->count == 0 )
		return FIFO_empty;

	*item = *(fifo->tail) ;
	fifo->count-- ;

	//circler_fifo
    if ((fifo->tail+1) == (fifo->base + fifo->length))
        fifo->tail = fifo->base;
    else
        fifo->tail++;

	return FIFO_no_error ;
}

FIFO_Buf_status FIFO_is_FULL (FIFO_Buf_t* fifo )
{
	//fifo_is_null?
	if( !fifo || !fifo->base || !fifo->head || !fifo->tail)
		return FIFO_NULL ;

	//fifo_is_full?
	if( fifo->count == fifo->length)
		return FIFO_full;

	return FIFO_no_error ;
}

void FIFO_print   (FIFO_Buf_t* fifo )
{
	element_type* temp = fifo->tail;
	int i ;

	if(fifo->count == 0 )
	{
		printf("FIFO is Empty \n");
	}
	else
	{
		printf("\n=====FIFO_print=====\n");

		for(i = 0; i < fifo->count; i++)
		{
			printf("\t %X \n",*temp);
			temp++;
		}
		printf("===================\n");
	}
}
