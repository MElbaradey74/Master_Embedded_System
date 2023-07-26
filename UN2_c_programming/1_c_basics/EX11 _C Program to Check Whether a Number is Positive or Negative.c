/*
 ============================================================================
 Name        : C.c
 Author      : mohamed elbaradey
 Description : C Program to Check Whether a Number is Positive or Negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float number = 0;

	printf("enter a number : \n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&number);

	if ( number < 0 )
	{
		printf("%0.2f is a negative number \n",number);
	}
	else if (number > 0 )
	{
		printf("%0.2f is a positive number \n",number);
	}
	else
	{
		printf(" you enter zero \n");

	}


	return 0;
}
