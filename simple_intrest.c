// Program to calculate Simple Intrest.

#include <stdio.h>
#include <math.h>
int main()
{
    float Principle, Years, Rate, Simple_Intrest;
    printf("Enter Principle amount\n");
    scanf("%f", &Principle);

    printf("Enternumber of Years \n");
    scanf("%f", &Years);

    printf("Enter Rate of amount\n");
    scanf("%f", &Rate);

    Simple_Intrest = (Principle * Years * Rate) / 100;

    printf("The Simple Intrest is %f", Simple_Intrest);
    return 0;
}