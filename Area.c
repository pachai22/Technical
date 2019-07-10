/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
    float radius,area;
    printf("enter the radius");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("The area of circle is %f",area);

    return 0;
}
