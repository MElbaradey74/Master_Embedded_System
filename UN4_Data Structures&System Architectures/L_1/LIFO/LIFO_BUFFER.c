/*
 ============================================================================
 Name        : LIFO_BUFFER.c
 Author      : Mohamed_Elbaradey
 Description : LIFO_EX
 ============================================================================
 */


#include "LIFO.h"


LIFO_Status LIFO_push_item ( LIFO_Buf_T* LIFO_buf , unsigned int  item )
{
	//check_lifo_is_valid
	if(!LIFO_buf ->base || !LIFO_buf ->head)
		return LIFO_null ;

	//check_lifo_is_full
	if(LIFO_buf ->count == LIFO_buf ->length)
		return LIFO_full ;

	//add_item
	*(LIFO_buf ->head) = item ;
	  LIFO_buf ->head ++      ;
	  LIFO_buf ->count++      ;
		return LIFO_no_error ;
}

LIFO_Status LIFO_pop_item ( LIFO_Buf_T* LIFO_buf , unsigned int* item )
{
	//check_lifo_is_valid
		if(!LIFO_buf ->base || !LIFO_buf ->head)
			return LIFO_null ;
	//check_lifo_is_empty??
		if(LIFO_buf ->count == 0)
			return LIFO_empty ;
    //get_item
		LIFO_buf ->head --              ;
		*item     = *(LIFO_buf ->head)  ;
		LIFO_buf ->count--              ;
		return LIFO_no_error ;
}

LIFO_Status LIFO_init     ( LIFO_Buf_T* LIFO_buf , unsigned int* buf , unsigned int lenght )
{
	if( buf == NULL )
		return LIFO_null ;

	LIFO_buf ->base   = buf    ;
	LIFO_buf ->head   = buf    ;
	LIFO_buf ->length = lenght ;
	LIFO_buf ->count  = 0 ;

	return LIFO_no_error ;
}
