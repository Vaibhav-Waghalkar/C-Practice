//Program to convert Celsius/Centigrade degrees temperature to Fahrenheit.


#include <stdio.h>
#include<math.h>
int main()
{
    float Fahrenheit, Celsius;

    printf("Enter Celsius\n");
    scanf("%f", &Celsius);

    Fahrenheit = (1.8 * Celsius) + 32 ;

    printf("The Fahrenheit Temperature is  %f", Fahrenheit);
    return 0;

}

