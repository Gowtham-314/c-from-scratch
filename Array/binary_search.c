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

    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low + high)/ 2;
        if(arr[mid] == search_ele)
        {
            printf("Element found at index %d\n", mid);
            return 0;
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
    printf("Element not found in the array.\n");

}