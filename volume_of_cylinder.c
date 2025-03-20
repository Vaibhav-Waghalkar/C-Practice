// Program to calculate volume of cylinder by user input.


#include <stdio.h>
#include<math.h>
int main()
{
    float radius, volume, height;
    printf("Enter radius\n");
    scanf("%f", &radius);

    printf("Enter height\n");
    scanf("%f", &height);

   volume = 3.14159 * radius * radius *height;

    printf("The volume of cylinder is %f", volume);
    return 0;

}




