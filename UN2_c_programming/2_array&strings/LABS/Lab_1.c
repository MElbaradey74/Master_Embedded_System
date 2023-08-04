/*
 ============================================================================
 Name        : Lab_1.c
 Author      : mohamed elbaradey
 Description : lab_1 (store and print number of students degrees)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i =0;
	float degrees [5];

	for( i = 0 ; i < 5 ; i++ )
	{
		printf("enter student %d degree : \n",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&degrees[i]);
	}

	for( i = 0 ; i < 5 ; i++ )
	{
		printf("student %d degree is %0.2f\n",i+1,degrees[i]);
	}

	return 0;
}

