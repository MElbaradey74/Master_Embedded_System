/*
 ============================================================================
 Name        : C.c
 Author      : mohamed elbaradey
 Description : C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float n1=0;
	float n2=0;

	printf("ENTER TWO FLOATING NUMBERS : \n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f\n",&n1,&n2);



	printf("MULTIPLY = %f",n1*n2); /* prints Master_Embedded_System */
	return 0;
}
