/*
 ============================================================================
 Name        : EX4_c.c
 Author      : mohamed elbaradey
 Description : EX4_c function to revers digits in number
 ============================================================================
 */
#include <stdio.h>

int reverseDigits(int num);



int reverseDigits(int num);


int main()
{
	int num = 0;
	printf("ENTER THE NUMBER : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("Reverse of no. is %d", reverseDigits(num));

	getchar();
	return 0;
}
/* Iterative function to reverse digits of num*/
int reverseDigits(int num)
{
	int rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}
