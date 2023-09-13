/*
 ============================================================================
 Name        : EX1_C_Program_to_Demonstrate_How_to_Handle_the_Pointers_in_the_Program.c
 Author      : Mohamed Elbaradey
 Description : C_Program_to_Demonstrate_How_to_Handle_the_Pointers_in_the_Program
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m   = 29 ;
	int *ab = &m ;

	printf("address of m : 0x%p\n",&m);
	printf("value of m   : %d \n",m);

	printf("address of pointer ab : 0x%p\n",ab);
	printf("value of pointer ab   : %d \n",*ab);

	m=34 ;

	printf("address of pointer ab : 0x%p\n",ab);
	printf("value of pointer ab   : %d \n",*ab);

	*ab = 7 ;

	printf("address of m : 0x%p\n",&m);
	printf("value of m   : %d \n",m);

	return 0;
}
