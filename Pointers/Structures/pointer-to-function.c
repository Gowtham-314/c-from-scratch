#include<stdio.h>
#include<conio.h>

// Passing a pointer to a structure to a function
struct Point {
    int x;
    int y;
};

void printPoint(struct Point *p) {
    printf("Point Details:\n");
    printf("Coordinates: (%d, %d)\n", p->x, p->y);
}

int main()
{
    struct Point p1;
    printf("Enter the x and y coordinates of the point: ");
    scanf("%d %d", &p1.x, &p1.y);
    printPoint(&p1);
    return 0;
}