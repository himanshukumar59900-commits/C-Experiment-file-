#include<stdio.h>
int main()
{
    int x;
    printf("enter the integer:");
    scanf("%d",&x);
    if(x==0)
    {
    printf("the number is zero");
    }
    else if(x>0)
    {
    printf("the number is positive");
    }
    else
    printf("the number is negative");
    
    return 0;
}