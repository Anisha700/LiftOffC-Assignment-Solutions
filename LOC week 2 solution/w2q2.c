#include<stdio.h>
int main()
{
int array[100],i,n,even=0,x=0;
printf("number of elements: ");
scanf("%d",&n);
printf(" ENTER THE NUMBERS:" );
for(i=0;i<n;i++)
scanf("%d",&array[i]);
for(i=0;i<n;i++)
{
if(array[i]%2==0)
even=even+array[i];
if ((i+1) % 2 == 0)
  x = x + array[i];

}
printf("even: %d",even);
printf("even position: %d",x);
}