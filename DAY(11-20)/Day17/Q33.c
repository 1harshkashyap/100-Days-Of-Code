//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits

    int temp = n;
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
