#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Taking input from user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c to catch newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Performing operation
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}