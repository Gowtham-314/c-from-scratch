#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[100],n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d integers: \n", n);
    for(int i=0; i<n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int search_ele;
    printf("Enter the element to search: ");
    scanf("%d", &search_ele);


    while(

    printf("\nEntered Array are ....\n");
    for(int i=0; i<n; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
    return 0;
}