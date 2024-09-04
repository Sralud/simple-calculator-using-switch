#include <stdio.h>

int main() {
    double firstNumber, secondNumber;
    char operation;

    printf("Input the first number: ");
    scanf("%lf", &firstNumber);

    printf("Input the second number: ");
    scanf("%lf", &secondNumber);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("Answer: %.2lf\n", firstNumber + secondNumber);
            break;
        case '-':
            printf("Answer: %.2lf\n", firstNumber - secondNumber);
            break;
        case '*':
            printf("Answer: %.2lf\n", firstNumber * secondNumber);
            break;
        case '/':
            if (secondNumber != 0) {
                printf("Answer: %.2lf\n", firstNumber / secondNumber);
            } else {
                printf("Division by zero is invalid.\n");
            }
            break;
        default:
            printf("Invalid operation\n", operation);
    }

    return 0;
}
