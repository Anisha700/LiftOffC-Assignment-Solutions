//Write a C programming to enter two numbers and perform all Arithmetic operation?
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x,y;
  printf("Enter the two numbers\n");
  scanf("%d%d", &x, &y);
  int sum= x+y;
  printf("Sum of the two numbers = %d\n", sum);
  int sub=x-y;
  printf("sub of two numbers =%d\n",sub);
  int mul=x*y;
  printf("mul of two numbers =%d\n",mul);
  int div=x/y;
  printf("div of two numbers =%d\n",div);
  return 0; 
}
