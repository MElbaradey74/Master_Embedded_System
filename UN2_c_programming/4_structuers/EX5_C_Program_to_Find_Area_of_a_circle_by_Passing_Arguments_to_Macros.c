/*
 ============================================================================
 Name        : EX5_C_Program_to_Find_Area_of_a_circle_by_Passing_Arguments_to_Macros.c
 Author      : Mohamed elbaradey
 Description : EX5_C_Program_to_Find_Area_of_a_circle_by_Passing_Arguments_to_Macros
 ============================================================================
 */

#include<stdio.h>

#define AREA(x) 3.14*x*x

int main()
{
    float r1,r2,area;
    printf("Enter 1st radius of circle : ");
    scanf("%f",&r1);

    area=AREA(r1);

    printf("Area of circle =%.2f",area);

    return 0;
}
