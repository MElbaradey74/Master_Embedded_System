/*
 ============================================================================
 Name        : case.c
 Author      : mohamed elbaradey
 Description : C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n1 = 0;
	int n2 = 0;
	char ch = 0 ;

	printf("enter a N1 : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n1);
	printf("enter a N2 : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n2);
	printf("chose operator ( * , + , - , / ) : \n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	switch (ch)
	{
	case '*' :
		printf("Multiply = %d * %d = %d\n",n1,n2,n1*n2);
		break;
	case '/' :
		printf("divide = %d / %d = %d\n",n1,n2,n1/n2);
		break;
	case '+' :
		printf(" SUM = %d + %d = %d\n",n1,n2,n1+n2);
		break;
	case '-' :
		printf("Subtraction = %d - %d = %d\n",n1,n2,n1-n2);
		break;
	default :
		printf("ERROE !! opreator not correct");
		break;
	}

    return 0 ;
}
