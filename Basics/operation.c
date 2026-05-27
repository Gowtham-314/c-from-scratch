#include<stdio.h>
#include<conio.h>
// Arithmetic operations without using arithmetic operators
int main()
{
    int a, b, sum, difference, product, quotient;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    switch(a, b)
    {
        case 1:
            // Addition
            while(b!=0)
            {
                a=a+1;
                b=b-1;
            }
            printf("The sum of %d and %d is: %d\n", a, b, sum);
            break;
        case 2:
            // Subtraction
                while(b!=0)
                {
                    a=a-1;
                    b=b-1;
                }
            printf("The difference of %d and %d is: %d\n", a, b, difference);
            break;
        case 3:
            // Multiplication
            product = 0;
            while(b!=0)
            {
                product = product + a;
                b = b - 1;
            }
            printf("The product of %d and %d is: %d\n", a, b, product);
            break;
        case 4:
            // Division
            if(b != 0) {
                quotient = 0;
                while(a >= b) {
                    a = a - b;
                    quotient = quotient + 1;
                }
                printf("The quotient of %d and %d is: %d\n", a, b, quotient);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }
    return 0;
}