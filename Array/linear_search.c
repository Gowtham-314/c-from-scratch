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
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] == search_ele)
        {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found in the array.\n");
}