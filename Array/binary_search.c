#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
// Binary Search in C
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

    int low = 0, high = n-1;
    bool x;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == search_ele)
        {
            x = true;
            break;

        }
        else if(arr[mid] < search_ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if(x)
    {
        printf("Element found in the array.\n");
    }
    else
    {
        printf("Element not found in the array.\n");
    }
}