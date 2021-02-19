#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{

     char s[200];
     int count = 0, i;
     printf("\nENTER YOU STRING :");
     scanf("%[^\n]s", s);
     for (i = 0;s[i] != '\0';i++)
     {
         if (s[i] == ' ' && s[i+1] != ' ')
             count++;    
     }
     printf("WORDS : %d", count + 1);
}