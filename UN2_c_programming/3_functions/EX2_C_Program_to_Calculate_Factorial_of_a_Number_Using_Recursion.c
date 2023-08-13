/*
 ============================================================================
 Name        : EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion.c
 Author      : mohamed elbaradey
 Description : EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int multiplyNumbers(int n);

int main()
{
	int n;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	printf("Factorial of %d = %d", n, multiplyNumbers(n));
	return 0;
}


int multiplyNumbers(int n)
{
	if (n>=1)
	{
		return n*multiplyNumbers(n-1);
	}

	else
	{
		return 1;
	}
}
