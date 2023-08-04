/*
 ============================================================================
 Name        : EX2.c
 Author      : mohamed elbaradey
 Description : EX2_Program to Calculate Average Using Arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int max;
	int numbers[100];
	int sum = 0;
	float average = 0.0 ;

	printf("Enter the number of elements:\n ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&max);

	// Input 'n' elements from the user
	for (int i = 0 ; i < max ; i ++)
	{
		printf("ENTER NUMBER %d : \n",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&numbers[i]);
	}

	// Calculate the sum of all elements
	for(int i = 0 ; i < max ; i++)
	{
		sum += numbers[i];
	}

	// Calculate the average

	average = (float)sum / max ;


	printf("Average = %0.2f",average);


	return 0;
}
