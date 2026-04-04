#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    int max,min,randomnum;
    printf("Enter the Mininum number: ");
    scanf("%d", &min);
    printf("Enter the Maximum number: ");
    scanf("%d", &max);
    randomnum=rand()/(max-min+1)+min;
    printf("Random Number Between %d and %d is : %d ",min,max,randomnum);    
    return 0;
}