// Program to calculate area of circle by user input.


#include <stdio.h>
#include<math.h>
int main()
{
    float radius, area;
    printf("Enter radius\n");
    scanf("%f", &radius);

   area = 3.14159 * radius * radius ;

    printf("The area of circle is %f", area);
    return 0;

}




