/*
 ============================================================================
 Name        : EX1_C.c
 Author      : Mohamed elbaradey
 Description : EX1_C Program to Store Information of a Student Using Structure
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct sdata
{
    char name [50];
    int number ;
    float deg ;
} s_student;

struct sdata read_std_data ();
void print_std_data (struct sdata x);


int main(void)
{
  s_student = read_std_data();
  print_std_data(s_student);


}
struct sdata read_std_data ()
{
    struct sdata stu;

    printf("Enter the student data :\n");

    printf ("Enter the student name: ");
    fflush (stdin);
    fflush(stdout);
    gets(stu.name);

    printf ("\nEnter the student's roll number: ");
    fflush (stdin);
    fflush(stdout);
    scanf ("%d", &stu.number);

    printf ("\nEnter the students marks: ");
    fflush (stdin);
    fflush(stdout);
    scanf ("%f", &stu.deg);

    return stu ;
}


void print_std_data (struct sdata x)
{
    printf ("\nDisplaying the student's Information: \n");

	printf ("Student name: %s",x.name);

	printf ("\nStudent's roll number: %d", x.number);

	printf ("\nStudent's marks: %.2f",x.deg);
}
