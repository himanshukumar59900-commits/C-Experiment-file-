#include<stdio.h>
int main()
{
    int a,b,x;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    x=a;
    a=b;
    b=x;
    printf("after swapping:\n");
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
}