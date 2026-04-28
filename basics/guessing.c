#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

// Number Guessing Game in C
int main()
{
    int random,user_input,count=0;
    random=rand()%501;
    do
    {
        printf("Guess the number between 0 and 500: ");
        scanf("%d", &user_input);
        count++;
        if(user_input>random)
        {
            printf("Too High! Try Again.\n");
        }
        else if(user_input<random)
        {
            printf("Too Low! Try Again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", count);
        }
    } while (user_input!=random);
    
     return 0;
}