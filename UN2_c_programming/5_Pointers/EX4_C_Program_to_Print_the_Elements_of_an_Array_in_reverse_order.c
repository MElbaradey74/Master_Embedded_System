/*
 ============================================================================
 Name        : EX4_C_Program_to_Print_the_Elements_of_an_Array_in_reverse_order.c
 Author      : Mohamed Elbaradey
 Description : EX4_C_Program_to_Print_the_Elements_of_an_Array_in_reverse_order
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int num_element ;

	printf("Enter number of element : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_element);

	int arr[num_element];
	int*p_arr = arr ;

	printf("Enter the element :\n ");

	for(int i = 0 ; i < num_element ; i++)
	{
		printf("\nElement %d : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",p_arr++);
	}

	p_arr = &arr[num_element -1];

	printf("\nReversed _Elements : \n");

	for(int i = num_element ; i > 0 ; i--)
	{
		printf("\nElement %d : %d\n",i,*p_arr--);
	}
	return 0;
}
