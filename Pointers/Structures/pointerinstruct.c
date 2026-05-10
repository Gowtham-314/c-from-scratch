#include<stdio.h>
#include<conio.h>

int main()
{
    //Pointer to Structure

    struct Point {
        int x;
        int y;
    };
    struct Point p1;
    struct Point *ptr;
    ptr = &p1;
    printf("Enter the x and y coordinates of the point: ");
    scanf("%d %d", &ptr->x, &ptr->y);
    printf("Point Details:\n");
    printf("Coordinates: (%d, %d)\n", ptr->x, ptr->y);
    return 0;
}