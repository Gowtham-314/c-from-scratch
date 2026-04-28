#include<stdio.h>
#include<conio.h>


// Loops in C
int main()
{
    // For loop
    printf("For loop:\n");
    for(int i=1; i<=5; i++)
    {
        printf("%d ", i);
    }
    printf("\n\n");
    // While loop
    printf("While loop:\n");
    int j=1;
    while(j<=5)
    {
        printf("%d ", j);
        j++;
    }
    printf("\n");
    // Do-while loop
    printf("\nDo-while loop:\n");
    int k=1;
    do
    {
        printf("%d ", k);
        k++;
    } while (k<=5);
    printf("\n");
    
    return 0;
}