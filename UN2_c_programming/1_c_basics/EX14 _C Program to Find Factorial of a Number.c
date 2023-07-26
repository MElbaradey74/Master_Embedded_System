/*
 ============================================================================
 Name        : C.c
 Author      : mohamed elbaradey
 Description : C Program to Find Factorial of a Number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	 int number = 0 ;
	 int factorial = 1 ;
	unsigned int i = 1 ;

	printf("enter a number : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	if(number <= 0 )
	{
		printf("ERROR !! you entered nigative number \n");
	}
	else
	{
		for(i=1 ; i<=number ; i ++)
		{
			factorial*= i ;
		}

	}
	printf("factorial of %d = %d \n",number,factorial);
	return 0;
}

