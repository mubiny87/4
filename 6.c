#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Ask for input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // space before %c to catch stray newline

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation using switch
    switch (operator) {
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
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            printf("Result: %.2lf\n", result);
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
