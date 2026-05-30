#include<stdio.h>
#include<conio.h>

// Passing a member of a structure to a function
struct Point {
    int x;
    int y;
};

void printPoint(x, y) 
    printf("Point Details:\n");
    printf("Coordinates: (%d, %d)\n", x,y);
}

int main()
{
    struct Point p1;
    printf("Enter the x and y coordinates of the point: ");
    scanf("%d %d", &p1.x, &p1.y);
    printPoint(p1.x, p1.y); // This will cause a compilation error because printPoint expects a struct Point, not two integers.
    return 0;
}