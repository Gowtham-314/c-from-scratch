#include<stdio.h>
#include<conio.h>


typedef int Marks; // Typedef for int
int main()
{
    Marks m1; // Using typedef for int
    printf("Enter marks: ");
    scanf("%d", &m1);
    printf("Marks: %d\n", m1);
    return 0;
}