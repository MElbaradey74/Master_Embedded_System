/*
 ============================================================================
 Name        : EX8_c.c
 Author      : Mohamed elbaradey
 Description : EX8_c function to take an array and revers its elements
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverseArray(int a[], int size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    reverseArray(a, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void reverseArray(int a[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
}
