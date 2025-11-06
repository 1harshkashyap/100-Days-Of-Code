//C PROGRAMME FOR AREA AND PERIMETER OF A RECTANGLE OF GIVEN DIMENSIONS
#include <stdio.h>
int main(){
    float a,b ;
    printf ("ENTER LENGTH:");
    scanf("%f",&a);
    printf ("ENTER BREADTH:");
    scanf("%f",&b);
    printf("THE AREA OF RECTANGLE IS: %f \n",a*b);
    printf("THE PERIMETER OF RECTANGLE IS: %f",(2*(a+b)));

    return 0;
}