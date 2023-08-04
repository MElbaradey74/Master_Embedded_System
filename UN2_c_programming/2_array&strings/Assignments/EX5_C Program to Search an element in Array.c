/*
 ============================================================================
 Name        : EX5_C.c
 Author      : mohamed elbaradey
 Description : EX5_C Program to Search an element in Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[10];
	int arr_size , svalue ,i ;

	printf("ENTER THE NUMBER OF THE ELEMENTS in the array  : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&arr_size);

	printf("Enter the %d element of the array \n",arr_size);
	for(i=0;i<arr_size;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("Please enter the element to be searched : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&svalue);

	//searching

	for(i = 0 ; i < arr_size ; i++)
	{
		if( arr[i] == svalue )
		{
			printf("%d is found at position %d",svalue,i+1);
			break;
		}
	}
	return 0;
}
