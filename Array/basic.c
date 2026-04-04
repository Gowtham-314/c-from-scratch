#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5];
    printf("Enter 5 integers: \n");
    for(int i=0; i<5; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Entered Array are ....\n")
    for(int i=0; i<5; i++)
    {
        printf("arr[%d] = %d ",i,arr[i]);
    }
    return 0;
}