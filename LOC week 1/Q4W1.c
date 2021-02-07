/*Write a C program to input marks of five subjects Physics, Chemistry, Biology,Mathematics and Computer.
 Calculate percentage and grade.*/
#include<stdio.h>
int main()
{
    float Physics,Chemistry,Biology,Mathematics,Computer,Total;
    printf("Enter the marks of Physics=\n");
    scanf("%f",&Physics);
    printf("Enter the marks of Chemistry=\n");
    scanf("%f",&Chemistry);
    printf("Enter the marks of Biology=\n");
    scanf("%f",&Biology);
    printf("Enter the marks of Mathematics");
    scanf("%f",&Mathematics);
    printf("Enter the marks of Computer=\n");
    scanf("%f",&Computer);
    Total=(Physics+Chemistry+Biology+Mathematics+Computer)/500*100;
    printf("Percentage =%f\n",Total);
    if(Total>=90) 

      printf("Grade=A");
    else if(Total>=80)
      printf("Grade=B");
    else if(Total>=70)
      printf("Grade=C");
    else if(Total>=60)
      printf("Grade=D");
    else if(Total>=40)
      printf("Grade=E");
    else 
      printf("Grade=F");
       return 0;



   
}