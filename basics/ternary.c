#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

// Ternary operator in C
int main()
{
    int a=10, b=20;
    bool check = (a>b)?true:false;
    if(check)
    {
        printf("%d is greater than %d.", a, b);
    }
    else
    {
        printf("%d is greater than %d.", b, a);
    }
    return 0;
}