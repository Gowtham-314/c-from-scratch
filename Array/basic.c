#include<stdio.h>
#include<conio.h>
// Arrays in C
int main()
{
    int arr[5];
    printf("Enter 5 integers: \n");
    for(int i=0; i<5; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEntered Array are ....\n");
    for(int i=0; i<5; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
    return 0;
}