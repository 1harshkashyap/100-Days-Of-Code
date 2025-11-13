//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10; 

    digits = (int)log10(n); 
    first = n / pow(10, digits); 

    if (digits == 0) {
        swapped = n;
    } else {
        int middle = n % (int)pow(10, digits);
        middle = middle / 10;

        swapped = last * pow(10, digits) + middle * 10 + first;
    }

    printf("%d\n", swapped);

    return 0;
}
