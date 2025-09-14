#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enetr the secind number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping:\n");
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;

}