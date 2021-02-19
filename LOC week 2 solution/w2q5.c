#include<stdio.h>
int main()
{
  int b,i,j;

printf("Number of element= ");
scanf("%d",&b);

for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==j||(i+j==6))
            printf("*");
            else
            printf(" ");
        }
      printf("\n");
    }
}


