/*
 ============================================================================
 Name        : C.c
 Author      : mohamed elbaradey
 Description : C Program to Find the Largest Number Among Three Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {

	float n1 = 0 ;
	float n2 = 0 ;
	float n3 = 0 ;

	printf("ENTER NUMBER 1 : \n ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n1);
	printf("ENTER NUMBER 2 : \n ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n2);
	printf("ENTER NUMBER 3 : \n ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n3);

	if (n1>n2 && n1>n3)
	{
		printf("%0.2f is the largest number \n",n1);
	}

	else if ( n2>n1 && n2>n3)
	{
		printf("%0.2f is the largest number \n",n2);

	}

	else
	{
		printf("%0.2f is the largest number \n",n3);

	}

	return 0;
}
