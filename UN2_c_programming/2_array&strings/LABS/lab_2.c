/*
 ============================================================================
 Name        : lab_2.c
 Author      : mohamed elbaradey
 Description : LAB_2(calculate plynomial value for a set of inputs )
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float y = 0 ;
	float x[5] = { 11 , 22 , 3.4 , 33 , 44};
	int i = 0 ;

	for( i = 0 ; i < 5 ; i++ )
	{
		y = 5 * x[i] * x[i] + 3 * x[i] + 2 ;
		printf("y[%0.1f]=%0.1f \n ",x[i],y );
	}

	return 0;
}
