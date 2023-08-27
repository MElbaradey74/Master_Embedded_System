/*
 ============================================================================
 Name        : EX2_c.c
 Author      : MOHAMED ELBARADEY
 Description : EX2_c function to take an integer number and calculate it's square root
 ============================================================================
 */


#include <stdio.h>
#include <math.h>

double calculateSquareRoot(int num);

int main() {
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    double result = calculateSquareRoot(number);

    printf("Square root: %.3lf\n", result);

    return 0;
}

double calculateSquareRoot(int num) {
    return sqrt(num);
}
