#include<stdio.h>
#include<conio.h>

int main()
{
    // Enum Pointer in C
    enum options {
        ADD,
        SUBTRACT,
        MULTIPLY,
        DIVIDE
    };

    enum options *ptr;
    ptr = (enum options *)malloc(sizeof(enum options));
    printf("Enter your choice (0 for ADD, 1 for SUBTRACT, 2 for MULTIPLY, 3 for DIVIDE): ");
    scanf("%d", ptr);
    switch(*ptr) {
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
    free(ptr);
    return 0;
}