// Pointer to pointer
#include<stdio.h>
#include<conio.h>

int main()
{
    int a=10;
    int *p=&a; // pointer to a
    int **q=&p; // pointer to pointer p
    printf("Value of a: %d\n",a);
    printf("Value of a using pointer p: %d\n",*p);
    printf("Value of a using pointer to pointer q: %d\n",**q);
    
    return 0;
}