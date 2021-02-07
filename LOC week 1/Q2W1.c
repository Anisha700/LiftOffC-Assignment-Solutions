//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include<stdio.h>
int main()
{
float celsius,fahrenheit;
printf("Enter temperature in Celsius and convert it into Fahrenheit\n");

printf("ENTER THE TEMPERATURE IN celsius= ");

 scanf("%f", &fahrenheit);

celsius=(fahrenheit*1.8)+32;
printf("fahrenheit = %.3f",celsius);

return 0;



}



