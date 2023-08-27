/*
 ============================================================================
 Name        : EX6_c.c
 Author      : Mohamed elbaradey
 Description : EX6_cfunction to return unique number in array with one loop
 ============================================================================
 */
#include <stdio.h>

int findUniqueNumber(int a[], int size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    int uniqueNumber = findUniqueNumber(a, size);

    printf("The unique number is: %d\n", uniqueNumber);

    return 0;
}

int findUniqueNumber(int a[], int size) {
    int unique = 0;

    for (int i = 0; i < size; i++) {
        unique ^= a[i];
    }

    return unique;
}
