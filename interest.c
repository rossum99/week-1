#include <stdio.h>
int main()
{int n;
float p,r;
printf("enter principal amount, rate, number of years");
scanf("%f %f %d", &p,&r,&n);
printf("simple interest is %f and compund interest is %f",(p*r*n)/100,pow(p*(1+r/100),n));
return 0;
}
