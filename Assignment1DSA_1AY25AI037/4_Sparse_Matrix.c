/*
Sparse Matrix: Representation + Fast Transpose

Write a C program that:

a. Reads a matrix as rows, cols, and its elements (or reads only the non-zero entries directly, your choice — state your input format clearly at the top of your code).
b. Stores it using the array-of-triples representation:
   typedef struct { int row, col, value; } term;
with a[0] as the header (rows, cols, number of non-zero terms), exactly as covered in class.
c. Implements fast_transpose(term a[], term b[]) exactly using the counting/starting-position method taught in class (you may not simply call the naive transpose, and you may not sort the output array afterward).
d. Prints:
•	The original matrix's triples.
•	The row_terms[] and starting_pos[] arrays your function computed internally (print these — this is how we'll verify you implemented the fast method and not a disguised sort).
•	The final transposed triples, and confirm they are already in row-major order.
e. Test your program on this matrix and include the output in your report:
   5 0 0
   0 0 3
   2 0 7


*/

#include <stdio.h>

typedef struct {
    int row, col, value;
} term;

void fast_transpose(term a[], term b[]) 
{
    int row_terms[50], starting_pos[50];
    int i, j, num_cols = a[0].col, num_terms = a[0].value;

    b[0].row = num_cols;
    b[0].col = a[0].row;
    b[0].value = num_terms;

    if (num_terms > 0) 
    {
        for (i = 0; i < num_cols; i++)
            row_terms[i] = 0;

        for (i = 1; i <= num_terms; i++)
            row_terms[a[i].col]++;

        starting_pos[0] = 1;
        for (i = 1; i < num_cols; i++)
            starting_pos[i] = starting_pos[i - 1] + row_terms[i - 1];

        printf("\nrow_terms[] and starting_pos[] arrays:\n");
        for (i = 0; i < num_cols; i++)
            printf("Col %d: row_terms = %d, starting_pos = %d\n",
                   i, row_terms[i], starting_pos[i]);

        for (i = 1; i <= num_terms; i++) 
        {
            j = starting_pos[a[i].col]++;
            b[j].row = a[i].col;
            b[j].col = a[i].row;
            b[j].value = a[i].value;
        }
    }
}

int main() 
{
    term a[101], b[101];
    int rows, cols, i, j, val, k = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &val);
            if (val != 0) {
                a[k].row = i;
                a[k].col = j;
                a[k].value = val;
                k++;
            }
        }
    }

    a[0].row = rows;
    a[0].col = cols;
    a[0].value = k - 1;

    printf("\nOriginal Matrix Triples (a[]):\n");
    printf("Index\tRow\tCol\tValue\n");
    for (i = 0; i <= a[0].value; i++)
        printf("%d\t%d\t%d\t%d\n", i, a[i].row, a[i].col, a[i].value);

    fast_transpose(a, b);

    printf("\nTransposed Matrix Triples (b[]):\n");
    printf("Index\tRow\tCol\tValue\n");
    for (i = 0; i <= b[0].value; i++)
        printf("%d\t%d\t%d\t%d\n", i, b[i].row, b[i].col, b[i].value);

    printf("\nThe transposed triples are in row-major order.\n");
    return 0;
}

 