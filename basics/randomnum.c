#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
    int max,min,randomnum;
    printf("Enter the maximum number: ");
    scanf("%d", &max);
    printf("Enter the Minimum number: ");
    scanf("%d", &min);
    randomnum=rand()/(max-min+1)+min;
    prinf("Random Number Between %d and %d is : %d ",min,max,randomnum);    
    return 0;
}