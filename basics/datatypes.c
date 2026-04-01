#include<stdio.h>
#include<conio.h>

int main()
{
    int a=200;
    float b=3.142312;
    char c='A';
    double d=2.7151648;
    long e=10000000000;
    short f=32767;
    char str[100]="This is a @Gowtham-314";
    long int j=12345678910;
    long long int k10=123456789123456789;
    
    printf("int a : %d \n",a);
    printf("float b : %f \n",b);
    printf("char c : %c \n",c);
    printf("double d : %lf \n",d);
    printf("long e : %ld \n",e);
    printf("short f : %hd \n",f);
    printf("char str : %s \n",str);
    printf("long int j : %ld \n",j);
    printf("long long int k10 : %lld \n",k10);

    return 0;
}