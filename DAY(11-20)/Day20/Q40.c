//Q40: Write a program to find the 1's complement of a binary number and print it.

#include <stdio.h>

int main() {
    char binary[100]; 

    printf("Enter a binary number: ");
    scanf("%s", binary); 

    printf("1's complement: ");

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        } else {
            printf("\nInvalid input! Only 0 and 1 allowed.\n");
            return 1;
        }
    }

    printf("\n");
    return 0;
}
