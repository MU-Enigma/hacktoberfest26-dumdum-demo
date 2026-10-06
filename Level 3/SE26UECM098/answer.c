#include <stdio.h>

int main()
{
    float a, b;
    char operator;

    printf("Enter da 1st number: ");
    scanf("%f", &a);

    printf("Enter da operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter da 2nd number: ");
    scanf("%f", &b);

    switch (operator)
    {
        case '+':
            printf("Result: %.2f\n", a+b);
            break;

        case '-':
            printf("Result: %.2f\n", a-b);
            break;

        case '*':
            printf("Result: %.2f\n", a*b);
            break;

        case '/':
            if (b==0)
                printf("Cannot divide by zero gng.\n");
            else
                printf("Result: %.2f\n", a/b);
            break;

        default:
            printf("Invalid operator 💔\n");
    }

    return 0;
}
