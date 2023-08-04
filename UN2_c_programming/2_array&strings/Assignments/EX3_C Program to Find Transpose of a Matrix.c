/*
 ============================================================================
 Name        : EX2.c
 Author      : mohamed elbaradey
 Description : EX2_Program to Calculate Average Using Arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R, C ;
    int m1[10][10];
    int m2[10][10];

    ///ENTER Rows and COLS of the matrix
    printf("Enter the number of ROWS:\n ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&R);
    printf("Enter the number of COLOUMS:\n ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&C);

    ///enter the elements of the matrix
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            printf("ENTER m1 [%d][%d] ",i,j);
            fflush(stdin);
            fflush(stdout);
            scanf("%d",&m1[i][j]);
        }
        printf("\n");
    }
/// printing m1 after set the elements
    printf("\*M1\*\n");
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            printf("%d \t",m1[i][j]);
        }
        printf("\n");
    }
/// transpose m1
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            m2[i][j]=m1[j][i];
        }
    }
///m2 after transpose
    printf("\*M2\*\n");
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            printf("%d \t",m2[i][j]);
        }
        printf("\n");
    }




    return 0;
}
