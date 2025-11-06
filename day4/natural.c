//SUM OF FIRST N NATURAL NUMBERS ARE : (N*(N+1))/2
#include<stdio.h>
int main(){
    int n ,sum;
    printf("Enter A No:");
    scanf("%d",&n);
    sum=( n *( n + 1 ))/2;
    printf("THE SUM OF FIRST N NATURAL NOS ARE:%d",sum);
    return 0;
}