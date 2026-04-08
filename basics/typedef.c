#include<stdio.h>
#include<conio.h>


typedef int mydata;  // creating a new data type called mydata which is an alias for int
int main()
{

    mydata a=100;
    mydata b=200;
    printf("Value of a : %d \n",a);
    printf("Value of b : %d \n",b);

    printf("Size of mydata : %lu bytes\n", sizeof(mydata));  // Output: Size of mydata : 4 bytes

    printf("Sum of a and b : %d \n", a+b);
    
    return 0;
}