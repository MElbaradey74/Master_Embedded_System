/*
 ============================================================================
 Name        : EX2.c
 Author      : mohamed elbaradey
 Description :C Program to Print a Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned int x = 0 ;
	printf("ENTER INTEGER NUMBER : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	printf("You entered = %d \n",x); /* prints integer number entered by user  */

	return 0;
}
