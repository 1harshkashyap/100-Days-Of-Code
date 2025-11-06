#include <stdio.h>
int main() {
    int a, b, x;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
// Swap using a temporary variable
    x = a;
    a = b;
    b = x;
    printf("After swapping:  a = %d, b = %d\n", a, b);
    return 0;
}
