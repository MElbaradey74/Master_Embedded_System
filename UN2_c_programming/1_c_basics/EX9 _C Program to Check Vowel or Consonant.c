/*
 ============================================================================
 Name        : C.c
 Author      : mohamed elbaradey
 Description : C Program to Check Vowel or Consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char ch ;

	printf("ENTER AN ALPHABET : \n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);

	if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o'	|| ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' )

	{
		printf("%c is VOWEL",ch);
	}

	else if ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
	{
		printf("%c is CONSONANT",ch);

	}

	else
	{
		printf("it's not a ALPLABET \n");
	}

	return 0 ;
}
