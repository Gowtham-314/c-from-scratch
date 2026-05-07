#include<stdio.h>
#include<conio.h>

// Pointer to Pointer Example

int main()
{
    int x=10;
    int *p;
    int **q;
    p=&x;
    q=&p;
    printf("x   = %d\n", x);
    printf("*P  = %d\n", *p);
    printf("**q = %d\n", **q);

    printf("Address of x: %p\n", &x);
    printf("Value stored in p: %p\n", p); 
    printf("\n--------------------------------\n");
    printf("Address of p: %p\n", &p);
    printf("Value stored in q: %p\n", q);
    printf("\n--------------------------------\n");
    printf("Address of q: %p\n", &q);    
    return 0;
}