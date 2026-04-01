#include<stdio.h>
#include<conio.h>

int main()
{
    int a=100,b=20,c=4;
    printf("a : %d \n",a);
    printf("b : %d \n",b);
    printf("c : %d \n",c);

    printf("\n\na : %-4d \n",a);   // 4 digit with left alignment EX: a=10 will be printed as 10__
    printf("b : %-4d \n",b);
    printf("c : %-4d \n",c);

    printf("\n\na : %04d \n",a);  // 4 digit with leading zeros EX: a=10 will be printed as 0010
    printf("b : %04d \n",b);
    printf("c : %04d \n",c);

    printf("\n\na : %4d \n",a);  // 4 digit with right alignment
    printf("b : %4d \n",b);
    printf("c : %4d \n",c);

    float f=3.14159265 , g=2.71828182;
    printf("\nf : %.2f \n",f);  // 2 digit after decimal point, Output: 3.014
    printf("g : %.3f \n",g);  // 3 digit after decimal point, Output : 2.718

    //flags
    printf("\n\na : %7f \n",f);
    printf("b : %7f \n",g);



    return 0;
}