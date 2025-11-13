/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;   

    for (i = 0; i < rows; i++)
     {
        for (space = 0; space < i; space++) {
            printf(" ");
        }   
        for (j = 0; j < rows - i; j++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}
