/*
 ============================================================================
 Name        : lab_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : lab3(calculate and print transpose of 3x3 matrix)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int m1 [3][3] = {{0,1,2},
			        {3,4,5},
					{6,7,8} };
	int m2 [3][3];
	int i,j;

	for( i = 0 ; i < 3 ; i ++ )
	{
		for(j = 0 ; j < 3 ; j ++)
		{
			m2[i][j] = m1[j][i];
		}
	}

	for( i = 0 ; i < 3 ; i ++ )
		{
			for(j = 0 ; j < 3 ; j ++)
			{
				printf("%d\t",m2[i][j]);
			}
			printf("\n");
		}


	return 0;
}
