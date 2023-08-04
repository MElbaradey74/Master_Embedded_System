/*
 ============================================================================
 Name        : EX1_.c
 Author      : mohamed elbaradey
 Description : EX1: Example of Multidimensional Array In C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m1[3][3], m2[3][3],result [3][3];


    // Taking input for m1
    printf("Enter elements of 1st matrix\n");
    for(int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            fflush(stdin);
            fflush(stdout);
            scanf("%d",&m1[i][j]);
        }
    }

    // Taking input for m2
    printf("Enter elements of 2nd matrix\n");
    for(int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            fflush(stdin);
            fflush(stdout);
            scanf("%d",&m2[i][j]);
        }
    }
// adding corresponding elements of two matrices
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            result[i][j] = m1[i][j] + m2
                           [i][j];
        }

    // Displaying the sum

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
