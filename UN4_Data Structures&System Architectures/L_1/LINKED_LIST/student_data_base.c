/*
 *      Author: elbaradey74
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float height;
    struct Student* next;
};

void addStudent(struct Student** head, int id, const char* name, float height) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    newStudent->id = id;
    strcpy(newStudent->name, name);
    newStudent->height = height;
    newStudent->next = *head;
    *head = newStudent;
}

void deleteAllStudents(struct Student** head) {
    while (*head) {
        struct Student* temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void deleteStudentById(struct Student** head, int id) {
    struct Student* current = *head;
    struct Student* prev = NULL;

    while (current != NULL && current->id != id) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Student with ID %d not found\n", id);
        return;
    }

    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}

void viewStudentById(struct Student* head, int id) {
    struct Student* current = head;

    while (current != NULL && current->id != id) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Student with ID %d not found\n", id);
    } else {
        printf("Student ID: %d\n", current->id);
        printf("Name: %s\n", current->name);
        printf("Height: %.2f\n", current->height);
    }
}

void viewAllStudents(struct Student* head) {
    struct Student* current = head;

    if (current == NULL) {
        printf("No students in the database\n");
        return;
    }

    while (current != NULL) {
        printf("Student ID: %d\n", current->id);
        printf("Name: %s\n", current->name);
        printf("Height: %.2f\n", current->height);
        printf("\n");
        current = current->next;
    }
}

int main() {
    struct Student* head = NULL;
    int choice;
    int id;
    char name[50];
    float height;

    do {
        printf("\nMenu:\n");
        printf("1. Add a new student\n");
        printf("2. View all students\n");
        printf("3. View a specific student by ID\n");
        printf("4. Delete a specific student by ID\n");
        printf("5. Delete all students\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter student ID: ");
                scanf("%d", &id);
                printf("Enter student name: ");
                scanf("%s", name);
                printf("Enter student height: ");
                scanf("%f", &height);
                addStudent(&head, id, name, height);
                break;

            case 2:
                printf("All Students:\n");
                viewAllStudents(head);
                break;

            case 3:
                printf("Enter student ID: ");
                scanf("%d", &id);
                viewStudentById(head, id);
                break;

            case 4:
                printf("Enter student ID to delete: ");
                scanf("%d", &id);
                deleteStudentById(&head, id);
                break;

            case 5:
                deleteAllStudents(&head);
                printf("All students deleted\n");
                break;

            case 0:
                // Exit the program
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    // Free allocated memory before exiting
    deleteAllStudents(&head);

    return 0;
}

