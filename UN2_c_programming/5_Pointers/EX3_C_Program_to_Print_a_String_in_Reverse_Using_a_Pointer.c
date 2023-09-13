/*
 ============================================================================
 Name        : EX3_C_Program_to_Print_a_String_in_Reverse_Using_a_Pointer.c
 Author      : Mohamed Elbaradey
 Description : EX3_C_Program_to_Print_a_String_in_Reverse_Using_a_Pointer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr [50];
	char rev_arr [50];
	char*ptr_arr = arr ;
	char*ptr_rev_arr = rev_arr;
	int char_counter = -1;


	printf("Enter the string (max character 50) : ");
	gets(arr);

	while(*ptr_arr)
	{
		ptr_arr++;

		char_counter++;
	}

	while(char_counter >= 0 )
	{
		ptr_arr--;

		*ptr_rev_arr = *ptr_arr;

		ptr_rev_arr ++;
		--char_counter;
	}

	*ptr_rev_arr = '\0';

	printf("\nReveersed string : %s \n",rev_arr);

return 0;
}

