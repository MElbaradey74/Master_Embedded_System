/*
 ============================================================================
 Name        : EX10_c.c
 Author      : Mohamed elbaradey
 Description : EX10_c function to count the max number of ones between two zeros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int max_ones (int num);


int main ()
{
	int num;

	printf("Enter integer number in decimal : ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	printf("\n maximum number of One-digits is %d.", max_ones(num));

	return 0;
}

int max_ones (int num)
{
    int count = 0 ;
    while( num!=0 )
    {
        num &=( num<<1);
        count++;
    }
    return count ;
}
