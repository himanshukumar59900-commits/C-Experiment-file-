#include<stdio.h>
int main()
{
    int a,b,c;
    int A,B,C;
    printf("enter the first angle:");
    scanf("%d", &a);

    printf("enter second angle:");
    scanf("%d", &b);
    
    printf("enter third angle:");
    scanf("%d", &c);
    
    if (a + b + c != 180)
    {
        printf("its not a triangle.\n");
    }
    else if (a == 90 || b == 90 || c == 90)
    {
        printf("its a right angle triangle.\n");
    }
    else
    {
        printf("enter first side:");
        scanf("&d", &A);
        
        printf("enter second side:");
        scanf("%d", &B);
        
        printf("enter third side:");
        scanf("%d", &C);
        
        
        if (A == B && B == C)
        {
            printf("its a eqilateral triangle.\n");
        }
        else if (A == B || B == C || C == A);
        {
            printf("its a isoselse triangle.\n");
        }
        
        {
            printf("its a scaler triangle.\n");
        }
    }
    return 0;
    }
