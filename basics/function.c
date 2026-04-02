#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
int check(int a)
{ 
    int id = 2580;
    if(a == id)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char c[20];
    int a;
    printf("Enter your name: ");
    scanf("%s", c);


    printf("\n\nHello %s!", c);

    printf("\nEnter a verification ID: ");
    scanf("%d", &a);
    if(check(a))
    {
        printf("\nVerifing.......");
        Sleep(2000);
        printf("\nVerification successful.");
    }
    else
    {
        printf("\nVerifing.......");
        Sleep(2000);
        printf("\nVerification failed.");
    }

    return 0;
}