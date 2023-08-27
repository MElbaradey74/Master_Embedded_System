/*
 ============================================================================
 Name        : EX3_c.c
 Author      : mohamed elbaradey
 Description : c function to print all prime numbers between two numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int isPrime(int num);

int main() {
    int start, end;

    printf("Enter the starting interval: ");
    scanf("%d", &start);

    printf("Enter the ending interval: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

