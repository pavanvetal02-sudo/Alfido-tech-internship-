#include <stdio.h>

void main() 
{
    char operator;
    double num1, num2;

    printf("Enter an operator(+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) 
{
        case '+':
            printf("Addition is : %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Subtraction is  : %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("multiplication is:%.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Division is : %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed!\n");
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    
}