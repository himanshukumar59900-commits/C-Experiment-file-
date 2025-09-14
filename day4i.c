#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i <= n;i++){
    sum+=i;
    }
    printf("the sum of n terms is %d\n",sum);
    return 0;
}