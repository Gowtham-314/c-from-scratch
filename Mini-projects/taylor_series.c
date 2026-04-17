#include<stdio.h>
#include<math.h>

#define PI 3.141592653589

int factorial(int n)        // Factorial of Number
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

double sine_series(double d)
{
    double x;
    double sine = 0;

    for(int i=1; i<=9; i+=2)   // 1,3,5,7,9
    {
        x=pow(d,i)/factorial(i);
        
        if((i/2) % 2 == 1)   // alternate sign
            x =(-x);
        sine += x;
    }
    return sine;
}


int main()
{
    int degree;
    printf("Enter the angle in degrees: ");
    scanf("%d",&degree);

    double radian = (degree * PI) / 180.0;
    printf("The value of sin(%d) is : %.4f", degree, sine_series(radian));
    return 0;
}