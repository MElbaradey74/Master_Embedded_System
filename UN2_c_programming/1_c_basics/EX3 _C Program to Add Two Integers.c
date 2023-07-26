/*
 ============================================================================
 Name        : ex3.c
 Author      : mohamed elbaradey
 Description : C Program to Add Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned int n1=0;
	unsigned int n2=0;

	printf("ENTER TWO INTERGERS NUMBERS : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&n1,&n2);

	printf("SUM = %d",n1+n2 ); /* prints Master_Embedded_System */
	return 0;
}
