#include<stdio.h>
#include<conio.h>

int main()
{
    // Structure declaration
    struct Point {
        int x;
        int y;
        char label[20];
    };
    struct Point p1;
    p1.x = 10;
    p1.y = 20;
    printf("Enter the label for the point: ");
    scanf("%s", p1.label);
    printf("Point Details:\n");
    printf("Label: %s\n", p1.label);
    printf("Coordinates: (%d, %d)\n", p1.x, p1.y);
    return 0;
}