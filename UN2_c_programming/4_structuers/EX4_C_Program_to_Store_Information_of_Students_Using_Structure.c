/*
 ============================================================================
 Name        : EX4_C_Program_to_Store_Information_of_Students_Using_Structure.c
 Author      : Mohamed elbaradey
 Description : EX4_C_Program_to_Store_Information_of_Students_Using_Structure
 ============================================================================
 */

#include <stdio.h>

// Define a structure to store student information
struct S_StudentInformation
{
    char m_name[50];
    int m_rollNumber;
    float m_marks;
};
struct S_StudentInformation ReadStudentInformation();
void printStudentInfo(struct S_StudentInformation StudentInfo);


int main()
{    int numStudents, i;


    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct S_StudentInformation StudentInfo;
    struct S_StudentInformation StudentsData[numStudents];

    printf("\nEnter the information of %d Students:\n",numStudents);

    for (i = 0; i < numStudents; ++i)
    {
        printf("\nEnter the information of student No.[%d]:\n", i + 1);
        StudentInfo = ReadStudentInformation();
        StudentsData[i] = StudentInfo;
    }

    printf("\nDisplaying the information of the students:\n");

    for (i = 0; i < numStudents; ++i)
    {
        printStudentInfo(StudentsData[i]);
    }

    return 0;
}

// Function to input student details
struct S_StudentInformation ReadStudentInformation()
{
    struct S_StudentInformation StudentInfo;

    printf("\nEnter the student name: ");
    scanf("%s",&StudentInfo.m_name);

    printf("\nEnter the student's roll number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &StudentInfo.m_rollNumber);

    printf("\nEnter the student's marks: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &StudentInfo.m_marks);

    return StudentInfo;
}


// Function to display student information
void printStudentInfo(struct S_StudentInformation StudentInfo)
{
    printf("\nStudent name: %s", StudentInfo.m_name);
    printf("\nStudent's roll number: %d", StudentInfo.m_rollNumber);
    printf("\nStudent's marks: %.2f", StudentInfo.m_marks);
    printf("\n********************************************\n");
}
