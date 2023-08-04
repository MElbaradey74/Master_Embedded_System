/*
 ============================================================================
 Name        : EX7_C.c
 Author      : mohamed elbaradey
 Description : EX7_C Program to Find the Length of a String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char s[100];
	int i;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(s);

	for (i = 0; s[i] != '\0'; ++i);

	printf("Length of the string: %d", i);


	return 0;
}
