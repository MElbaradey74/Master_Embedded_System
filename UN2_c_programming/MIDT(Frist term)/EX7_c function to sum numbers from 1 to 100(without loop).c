/*
 ============================================================================
 Name        : EX7_c.c
 Author      : Mohamed elbaradey
 Description :EX7_cfunction to sum numbers from 1 to 100(without loop)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int printNos(unsigned int n);



int main()
{ int ret = 0 ;
	ret = printNos(100);
	printf("%d",ret);
	return 0;
}

// Prints numbers from 1 to n
int printNos(unsigned int n)
{ static int sum = 0 ;
	if(n > 0)
	{
		printNos(n - 1);
		sum = sum +n;
	}
	return sum;
}
