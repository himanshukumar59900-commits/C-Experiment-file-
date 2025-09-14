#include<stdio.h>
int main()
{
    float r,A,C,pi=3.14;
    printf("enter the radius:");
    scanf("%f",&r);
    A=pi*r*r;
    C=2*pi*r;
    printf("the area od circle is %.f\n",A);
    printf("the circumference of circle is %.2f\n",C);
    return 0;
}