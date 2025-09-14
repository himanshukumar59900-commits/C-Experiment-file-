#include<stdio.h>
int main()
{
    float si,p,r,t;
    printf("enter principal value:");
    scanf("%f",&p);
    printf("enter rate of interest:");
    scanf("%f",&r);
    printf("enter the time period in years:");
    scanf("%f",&t);
    si=p*r*t/100;
    printf("the simple interest is %f\n",si);
    return 0;
}