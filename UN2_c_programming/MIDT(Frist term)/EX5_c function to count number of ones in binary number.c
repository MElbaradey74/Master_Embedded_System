/*
 ============================================================================
 Name        : EX5_c.c
 Author      : Mohamed elbaradey
 Description : EX5_c function to count number of ones in binary number
 ============================================================================
 */

#include <stdio.h>

int countOnesInBinary(int num);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = countOnesInBinary(number);

    printf("Number of ones in binary representation: %d\n", result);

    return 0;
}

int countOnesInBinary(int num) {
    int count = 0;

    while (num > 0) {
        if (num % 2 == 1) {
            count++;
        }
        num /= 2;
    }

    return count;
}
