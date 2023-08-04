/*
 ============================================================================
 Name        : EX4_C.c
 Author      : mohamed elbaradey
 Description : EX4_C Program to Insert an element in an Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr [100];
	int position , value , i , n ;


	printf("ENTER THE NUMBER OF THE ELEMENTS in the array  : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	printf("Enter the %d element of the array \n",n);
	for(i=0;i<n;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("Please enter the value of new element\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&value);

	printf("Please enter the location where you want to insert an new element\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&position);

	///inserting
	for ( i = n - 1; i >= position - 1; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[position-1] = value;

	/* printing new arr */
	printf("new array : \n");
	for(i=0;i<n+1;i++)
	{
		printf("%d",arr[i]);
	}

	return 0;
}

