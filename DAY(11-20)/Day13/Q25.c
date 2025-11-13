//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            result = a + b;
            printf("%d\n", result);
            break;
        case '-':
            result = a - b;
            printf("%d\n", result);
            break;
        case '*':
            result = a * b;
            printf("%d\n", result);
            break;
        case '/':
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero\n");
                return 1;
            }
            printf("%d\n", result);
            break;
        case '%':
            if (b != 0)
                result = a % b;
            else {
                printf("Error: Modulo by zero\n");
                return 1;
            }
            printf("%d\n", result);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
