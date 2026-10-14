/*
Design a struct Student with fields: roll_no (int), name (char[20]), marks (float).
Write a C program that:

a. Asks the user for n (number of students), and dynamically allocates an array of n Student structures using malloc.
b. Reads all n records from the user.
c. Computes and prints the average marks, and the record of the student with the highest marks, using a pointer to traverse the array (not array-indexing — use pointer arithmetic, e.g. (ptr + i)).
d. Frees the allocated memory before exiting.
e. If n changes at runtime (ask the user if they want to add 2 more students), use realloc to grow the array without losing existing data.
*/



#include<stdio.h>
#include <stdlib.h>

struct Student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    int n;
    printf("Enter the Number of Students : ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    struct Student *s = malloc(n * sizeof(*s));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter student records:\n");
    for (int i = 0; i < n; i++) {
        struct Student *current = s + i;

        printf("\nStudent %d roll number: ", i + 1);
        if (scanf("%d", &current->roll_no) != 1) {
            printf("Invalid roll number.\n");
            free(s);
            return 1;
        }

        printf("Student %d name: ", i + 1);
        if (scanf(" %19[^\n]", current->name) != 1) {
            printf("Invalid name.\n");
            free(s);
            return 1;
        }

        printf("Student %d marks: ", i + 1);
        if (scanf("%f", &current->marks) != 1) {
            printf("Invalid marks.\n");
            free(s);
            return 1;
        }
    }

    char ans;
    printf("\nDo you want to add 2 more students? (y/n): ");
    scanf(" %c", &ans);

    if (ans == 'y' || ans == 'Y') {
        int new_count = n + 2;
        struct Student *resized = realloc(s, new_count * sizeof(*s));

        if (resized == NULL) {
            printf("Memory reallocation failed. Existing records will be used.\n");
        } 
        else {
            s = resized;
            for (int i = n; i < new_count; i++) {
                struct Student *current = s + i;

                printf("\nStudent %d roll number: ", i + 1);
                if (scanf("%d", &current->roll_no) != 1) {
                    printf("Invalid roll number.\n");
                    free(s);
                    return 1;
                }

                printf("Student %d name: ", i + 1);
                if (scanf(" %19[^\n]", current->name) != 1) {
                    printf("Invalid name.\n");
                    free(s);
                    return 1;
                }

                printf("Student %d marks: ", i + 1);
                if (scanf("%f", &current->marks) != 1) {
                    printf("Invalid marks.\n");
                    free(s);
                    return 1;
                }
            }
            n = new_count;
        }
    }

    float total_marks = 0.0f;
    struct Student *highest = s;
    for (int i = 0; i < n; i++) {
        struct Student *current = s + i;
        total_marks += current->marks;
        if (current->marks > highest->marks) {
            highest = current;
        }
    }

    printf("\nAverage marks: %.2f\n", total_marks / n);
    printf("Student with highest marks:\n");
    printf("Roll number: %d\n", highest->roll_no);
    printf("Name: %s\n", highest->name);
    printf("Marks: %.2f\n", highest->marks);

    free(s);
    return 0;
}