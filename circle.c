//C PROGRAMME FOR AREA AND PERIMETER OF A CIRCLE OF GIVEN RADIUS
#include <stdio.h>
int main(){
    float radius ,pi=3.1415;
    printf ("ENTER RADIUS:");
    scanf("%f",&radius);
    printf("THE AREA OF CIRCLE IS: %f \n",pi*radius*radius);
    printf("THE PERIMETER OF CIRCLE IS: %f",(2*(pi*radius)));

    return 0;
}