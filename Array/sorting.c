// Linear Search in C

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
    // Sorting the array (Quick Sort)
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nSorted Array are ....\n");
    for(int i=0; i<n; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

}