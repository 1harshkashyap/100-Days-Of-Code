//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numerator = 2;     
    int denominator = 3;   

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;       
        denominator += 4;    
    }

    printf("Approximate sum: %.2lf\n", sum);

    return 0;
}
