//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i; 
    }
    return fact;
}

int main() {
    int n, sum = 0, temporary_variable;

    printf("Enter a number: ");
    scanf("%d", &n);

    temporary_variable = n;

    while (temporary_variable > 0) {
        int digit = temporary_variable % 10;
        sum += factorial(digit);
        temporary_variable /= 10;
    }

    if (sum == n) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
