//Write a C program to enter the radius of a circle and find its diameter,circumference and area.
#include<stdio.h>
int main()
{
    float radius,diameter,circumference,area;
    printf("Enter the radius of a circle=\n");
    scanf("%f", &radius);
    diameter=2*radius;
    printf("Diameter of the circle is=%f\n",diameter);
    circumference=2*3.14*radius;
    printf("Circumference of the circle is=%f\n",circumference);
    area =22/7*radius*radius;
    printf("Area of the circle is=%f\n",area);

    return 0;


}
