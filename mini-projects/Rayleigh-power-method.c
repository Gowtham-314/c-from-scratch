#include<stdio.h>
#include<conio.h>

int main()
{
    float a[3][3], x[3][1], o[3][1]={0};
    printf("Enter the Elements of 3x3 matrix A: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Enter the Elements of 3x1 matrix X: \n");
    for(int i=0; i<3; i++)
    {
        printf("x[%d][0] = ", i);
        scanf("%f", &x[i][0]);
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            o[i][0] += a[i][j] * x[j][0];
        }   
    }

    printf("o array:\n");
    for(int i=0; i<3; i++)
    {
        printf("o[%d][0] = %f\n", i, o[i][0]);
    }

    



    return 0;
}