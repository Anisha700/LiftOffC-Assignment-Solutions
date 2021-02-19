#include<stdio.h>
int main()    
{    


int n,sum=0,m;    
printf("ENTER A NUMBER: ");    
scanf("%d",&n);   
while(n>0)
{    
m=n%10;  
sum=sum+m;    
n=n/10;    
}    
printf("SUM OF THE DIGITS IS: %d",sum);    
return 0;  
}