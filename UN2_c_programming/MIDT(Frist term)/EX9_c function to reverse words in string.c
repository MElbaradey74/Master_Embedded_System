/*
 ============================================================================
 Name        : EX9_c.c
 Author      : Mohamed elbaradey
 Description : EX9_c function to reverse words in string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char text[10] ;

	/* Assigning the string */
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(text);

	rev_string(text);


	return 0;
}


void rev_string(char a[])
{
	char reverse_text[10];
	int i = 0 ;
	int j = 0 ;

	/* Reversing process */
	for (i = strlen(a); i > 0 ; i--)
	{
		reverse_text[j] = a[i - 1];
		j++;
	}
	reverse_text[j] ='\0';

	/* Printing reverse string */
	printf("Reverse string is: %s", reverse_text);
}
