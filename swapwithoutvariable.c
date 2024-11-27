#include <stdio.h>
int main()
{int a,b;
 printf("enter the numbers to be swapped");
 scanf("%d %d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("the swapped numbers are a=%d and b=%d",a,b);
return 0;}
