/*
 ============================================================================
 Name        : swap.c
 Author      : mohamed elbaradey
 Description :Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	unsigned int n1 = 0 ;
	unsigned int n2 = 0 ;

	printf("ENTER value of N1 : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n1);
	printf("ENTER value of N2 : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n2);

	n1 = n1 * n2 ; ///30
	n2 = n1 / n2 ; ///10
	n1 = n1 / n2 ;///20

	printf("After swapping, value of N1 : %d \n",n1);
	printf("After swapping, value of N2 : %d \n",n2);

	return 0;
}
