/*
 ============================================================================
 Name        : EX8_C.c
 Author      : mohamed elbaradey
 Description : EX8_C Program to Reverse String Without Using Library Function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char text[10], reverse_text[10];
	    int i = 0 ;
	    int j = 0 ;

	    /* Assigning the string */
	    printf("Enter a string: ");
	    fflush(stdin);fflush(stdout);
	    gets(text);

	    /* Reversing process */
	    for (i = strlen(text); i > 0 ; i--)
	    {
	        reverse_text[j] = text[i - 1];
	        j++;
	    }
	    reverse_text[j] ='\0';

	    /* Printing reverse string */
	    printf("Reverse string is: %s", reverse_text);

	return 0;
}
