#include<stdio.h>
#include<conio.h>

int main()
{
    // Typedef enum in C
    typedef enum options {
        ADD,
        SUBTRACT,
        MULTIPLY,
        DIVIDE
    } Operation;
    
    Operation choice;
    printf("Enter your choice (0 for ADD, 1 for SUBTRACT, 2 for MULTIPLY, 3 for DIVIDE): ");
    scanf("%d", &choice);
    switch(choice) {
        case ADD:
            printf("You chose ADD\n");
            break;
        case SUBTRACT:
            printf("You chose SUBTRACT\n");
            break;
        case MULTIPLY:
            printf("You chose MULTIPLY\n");
            break;
        case DIVIDE:
            printf("You chose DIVIDE\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}