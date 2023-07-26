/*
 ============================================================================
 Name        : C.c
 Author      : mohamed elbaradey
 Description : C Program to Check Whether a Number is Even or Odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned int number = 0 ;
	unsigned int d = 0 ;

	printf("ENTER interger number : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	d = number % 2 ;

	if(d==0)
	{
		printf("%d is Even number \n",number);
	}

	else
	{

		printf("%d is odd number \n",number);
	}

	return 0 ;
}
