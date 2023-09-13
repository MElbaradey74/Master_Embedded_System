/*
 ============================================================================
 Name        : EX2_C_Program_to_Print_All_Alphabets_Using_a_pointer.c
 Author      : Mohamed Elbaradey
 Description : EX2_C_Program_to_Print_All_Alphabets_Using_a_pointer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char Alphabets [27];
	char* alph_ptr = Alphabets ;

	for(int i = 0 ; i < 26 ; i++)
	{
		*alph_ptr = i+'A' ;
		alph_ptr ++ ;
	}

	alph_ptr = Alphabets ;

	printf("ALPHABETS are : \n");

	for(int i = 0 ; i < 26 ; i++ )
	{
		printf("%c\t",*alph_ptr);

		alph_ptr++;
	}
return 0;
}
