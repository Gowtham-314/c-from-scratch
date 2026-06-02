#include<stdio.h>
#include<conio.h>
// Typedef struct in C

typedef struct Student
{
    int id;
    char name[20];
} students;


int main()
{
    students s1;
    s1.id = 1;
    printf("ID: %d\n", s1.id);
    getche();
}