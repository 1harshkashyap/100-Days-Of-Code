#include<stdio.h>
int main(){
    float a,b;
    printf("Enter first no: ");
    scanf("%f", &a);
    printf("Enter second no: ");
    scanf("%f", &b);
    printf("The Sum: %f\n", a+b);
    printf("The Difference: %f\n", a-b);
    printf("The Multiplication: %f\n", a*b);

    if (b != 0) {
        printf("The Division: %f\n", a/b);
    }
    else {
        printf("Cannot divide by zero.\n");
    }
    
    return 0;
}