/*
 ============================================================================
 Name        : EX1_c.c
 Author      : mohamed elbaradey
 Description : EX1_c function to take a number and sum all digits
 ============================================================================
 */
#include <stdio.h>

int sumDigits(int num);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumDigits(number);

    printf("Sum of digits: %d\n", result);

    return 0;
}

int sumDigits(int num) {
    int sum = 0;

    while (num > 0) {
        int digit = num % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        num /= 10; // Remove the last digit from the number
    }

    return sum;
}
