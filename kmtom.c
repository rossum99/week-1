#include <stdio.h>
int main()
{float a;
printf("enter the distance in km:");
scanf("%d",&a);
printf("the distance in metres is %f, in cm is %f and in mm is %f",a*1000, a*100000,a*1000000);
return 0;
}
