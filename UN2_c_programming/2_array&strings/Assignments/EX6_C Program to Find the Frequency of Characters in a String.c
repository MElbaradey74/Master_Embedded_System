/*
 ============================================================================
 Name        : EX6_C.c
 Author      : mohamed elbaradey
 Description : EX6_C Program to Find the Frequency of Characters in a String
 ============================================================================
 */

#include <stdio.h>

int main() {
    char str[100];
    char target;
    int frequency = 0;

    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(str);

    printf("Enter the character to find its frequency: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &target);

    // find the frequency of the target character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            frequency++;
        }
    }

    // Display the frequency of the target character
    printf("Frequency of '%c' in the string is %d.\n", target, frequency);

    return 0;
}

