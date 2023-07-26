/*
 ============================================================================
 Name        : C.c
 Author      : mohamed elbaradey
 Description : C Program to Calculate Sum of Natural Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	unsigned int i = 0 ;
	unsigned int sum = 0 ;
	unsigned int number = 0 ;

	printf("enter a number : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	for ( i=0 ; i<=number ; i++ )
	{
		sum += i ;
	}
	printf("sum = %d \n",sum);

	return 0;
}
