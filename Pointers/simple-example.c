#include<stdio.h>
#include<conio.h>

int main()
{

    // Pointer declaration
    int *ptr;
    // Variable declaration
    int num = 10;
    // Assigning the address of num to ptr
    ptr = &num;
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of num using pointer: %d\n", *ptr);

    return 0;
}