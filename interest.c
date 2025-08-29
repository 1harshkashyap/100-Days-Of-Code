#include <stdio.h>
#include <math.h>
int main() {
    float principle, rate, time, si, ci;
    // ENTER THE VALUE FOR Which you want to calculate simple and compound interest
    printf("ENTER PRINCIPLE:");
    scanf("%f", &principle);
    printf("ENTER RATE:");
    scanf("%f", &rate);
    printf("ENTER TIME:");
    scanf("%f", &time);
    si = (principle * rate * time) / 100;
    printf("SIMPLE INTEREST: %f\n", si);
    // Compound Interest calculation
    ci = principle * pow((1 + rate / 100), time) - principle;
    printf("COMPOUND INTEREST: %f\n", ci);
    return 0;
}