/*
 ============================================================================
 Name        : C.c
 Author      : mohamed elbaradey
 Description :C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char c=0;

	printf("ENTER THE CHARACTER : \n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);

	printf("VALUE OF CHARACTER = %d",c);

	return 0;
}
