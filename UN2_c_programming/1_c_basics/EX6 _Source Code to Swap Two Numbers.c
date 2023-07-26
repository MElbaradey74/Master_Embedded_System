/*
 ============================================================================
 Name        : Source.c
 Author      : mohamed elbaradey
 Description : Source Code to Swap Two Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float n1=0;
	float n2=0;
	float temp=0;

	printf("ENTER value of N1 : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&n1);
	printf("ENTER value of N2 : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&n2);

	temp = n1  ;
	n1   = n2  ;
	n2   = temp;

	printf("After swapping, value of N1 : %.2f \n",n1);
	printf("After swapping, value of N2 : %.2f \n",n2);

	return 0;
}
