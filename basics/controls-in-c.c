#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// Control statements in C
int main()
{
    // Control statements
    int a=10, b=20;

    // break statement
    printf("Break statement:\n");
    for(int i=1; i<=10; i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");
    // continue statement
    printf("\nContinue statement:\n");
    for(int i=1; i<=10; i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");


    // goto statement
    printf("\nGoto statement:\n");
    int x;
    printf("Enter a number: "); 
    scanf("%d", &x);
    if(x < 0)
    {
        goto negative;
    }
    else if(x > 0)
    {
        goto positive;
    }
    else
    {
        goto zero;
    }
negative:
    printf("You entered a negative number.\n");
    goto end;
positive:
    printf("You entered a positive number.\n");
    goto end;
zero:
    printf("You entered zero.\n");
end:
    return 0;
}