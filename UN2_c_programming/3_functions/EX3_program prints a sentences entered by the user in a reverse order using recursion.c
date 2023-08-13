/*
 ============================================================================
 Name        : EX3_program.c
 Author      : MOHAMED Elbaradey
 Description : EX3_program prints a sentences entered by the user in a reverse order using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverseSentence();

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}
