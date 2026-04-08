#include<stdio.h>
#include<conio.h>

enum week{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main()
{
    //Enum in C
    enum week today;
    today = Wednesday;
    printf("Today is: %d", today);  // Output: Today is: 2 (since enum starts from 0)
    return 0;
}