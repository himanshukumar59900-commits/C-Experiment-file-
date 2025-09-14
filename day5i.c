#include<stdio.h>
int main()
{
    int t,hours,minute,seconds;
    printf("enter the time in second:");
    scanf("%d",&t);
    hours=t/3600;
    minute=t%3600/60;
    seconds=t%60;
    printf("time is:%02d:%02d:%02d\n",hours,minute,seconds); 
    return 0;
}
