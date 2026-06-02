#include<stdio.h>
#include<string.h>
// Union in C
union Data {
    int i;
    float f;
    char str[20];
};

// In a union, all members share the same memory location.
// The size of the union is determined by the size of its largest member.


int main()
{
    union Data d;
    d.i = 10;
    printf("Value of i: %d\n", d.i);
    // d = 10;

    d.f = 10.5;
    printf("Value of f: %.2f\n", d.f);
    // d= 10.5;

    strcpy(d.str, "Hello");
    printf("Value of str: %s\n", d.str);
    // d = "Hello";


    printf("Value of i after modifying f: %d\n", d.i);

    return 0;

}