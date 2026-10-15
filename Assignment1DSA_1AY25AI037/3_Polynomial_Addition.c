/*
Polynomial Addition using the Array-of-Coefficients Representation

Write a C program that:

a. Reads two polynomials from the user as (degree, list of coefficients), using the representation from class:
   typedef struct 
   {
       int   degree;
       float coef[101];    // coef[i] = coefficient of x^(degree-i)
   } polynomial ;

b. Implements a function polynomial add(polynomial a, polynomial b) that adds them term by term (matching exponents), without using any built-in polynomial library.
c. Implements a function void display(polynomial p) that prints the polynomial in the form 3x^4 + 2x^2 + 1 (skip terms whose coefficient is 0, and handle the constant term without printing x^0).
d. Test your program on:
	A(x) = 3x⁴ + 2x² + 1 and B(x) = 5x³ − 2x² + 4 → expected output: 3x^4 + 5x^3 + 5
	A case where the sum of two matching terms becomes exactly 0 (make sure your output correctly omits that term).
*/


#include <stdio.h>

typedef struct {
    int   degree;
    float coef[101];   /* coef[i] = coefficient of x^(degree-i) */
} polynomial;

polynomial add(polynomial a, polynomial b) 
{
    polynomial c;
    int i, exp;

    c.degree = (a.degree > b.degree) ? a.degree : b.degree;

    for (i = 0; i <= c.degree; i++)
        c.coef[i] = 0;

    for (i = 0; i <= a.degree; i++) {
        exp = a.degree - i;
        c.coef[c.degree - exp] += a.coef[i];
    }

    for (i = 0; i <= b.degree; i++) {
        exp = b.degree - i;
        c.coef[c.degree - exp] += b.coef[i];
    }

    return c;
}

void display(polynomial p) 
{
    int i, exp, first = 1;
    float c;

    for (i = 0; i <= p.degree; i++) 
    {
        c = p.coef[i];
        exp = p.degree - i;

        if (c == 0)
            continue;

        if (!first) 
        {
            if (c > 0)
                printf(" + ");
            else {
                printf(" - ");
                c = -c;
            }
        } else 
        {
            if (c < 0) 
            {
                printf("-");
                c = -c;
            }
            first = 0;
        }
        if (exp == 0)
            printf("%g", c);
        else if (exp == 1)
            printf("%gx", c);
        else
            printf("%gx^%d", c, exp);
    }

    if (first)
        printf("0");
    printf("\n");
}

int main() 
{
    polynomial a, b, c;
    int i;

    printf("Enter degree of polynomial A: ");
    scanf("%d", &a.degree);
    printf("Enter %d coefficients of A: ", a.degree + 1);
    for (i = 0; i <= a.degree; i++)
        scanf("%f", &a.coef[i]);

    printf("Enter degree of polynomial B: ");
    scanf("%d", &b.degree);
    printf("Enter %d coefficients of B: ", b.degree + 1);
    for (i = 0; i <= b.degree; i++)
        scanf("%f", &b.coef[i]);

    printf("\nA(x) = ");
    display(a);
    printf("B(x) = ");
    display(b);

    c = add(a, b);
    printf("Sum  = ");
    display(c);

    return 0;
}
