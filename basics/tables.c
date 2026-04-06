#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter the number which you want to print the table: ");
    scanf("%d", &num);
    for(int i=1; i<=10; i++)
    {
        printf("%3d * %d = %2d\n", num, i, num*i);
    }
    return 0;
}