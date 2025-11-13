//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, X, Y, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    X = a;
    Y = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    lcm = (X * Y) / a;

    printf("%d\n", lcm);

    return 0;
}
