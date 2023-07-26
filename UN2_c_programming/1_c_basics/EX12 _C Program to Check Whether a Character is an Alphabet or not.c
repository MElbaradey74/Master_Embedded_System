/*
 ============================================================================
 Name        : C.c
 Author      : mohamed elbaradey
 Description : C Program to Check Whether a Character is an Alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char ch;

	printf("enter an alphabet : \n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z' ))
	{
		printf("%c is an alphabet \n",ch);
	}
	else
	{
		printf(" %c is not an alphabet \n",ch);
	}


	return 0;
}

