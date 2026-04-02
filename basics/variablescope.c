//VARIABLE SCOPE
#include<stdio.h>
#include<conio.h>
int main()
{    int a=10;
    {
        int a=20;
        printf("Inner block a: %d\n", a);
    }
    printf("Outer block a: %d\n", a);
    return 0;
}