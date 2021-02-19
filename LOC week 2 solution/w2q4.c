#include<stdio.h>
int main()
{
  int array[20],a,b,max,min;

printf("Number of element= ");
scanf("%d",&b);

printf("ENTER THE ELEMENTS OF ARRAY:\n");
for(a=0;a<b;a++)

scanf("%d",&array[a]);

for(a=0;a<b;a++)
min=max=array[0];

for(a=0;a<b;a++)
{
    if(array[a]>max)
    max=array[a];
    if(array[a]<min)
    min=array[a];
}

printf("\nSMALLEST ELEMENT :%d",min);
printf("\nLARGEST ELEMENT : %d",max);

return 0;

}