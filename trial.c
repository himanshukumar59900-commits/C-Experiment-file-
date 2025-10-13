#include <stdio.h>

int main()
{
    int a, b, c;     
    int A, B, C;     

    printf("Enter the first angle: ");
    scanf("%d", &a);

    printf("Enter the second angle: ");
    scanf("%d", &b);

    printf("Enter the third angle: ");
    scanf("%d", &c);

    
    if (a + b + c != 180)
    {
        printf("It's not a valid triangle.\n");
    }
    else if (a == 90 || b == 90 || c == 90)
    {
        printf("It's a right-angled triangle.\n");
    }
    else
    {
        
        printf("Enter the first side: ");
        scanf("%d", &A);

        printf("Enter the second side: ");
        scanf("%d", &B);

        printf("Enter the third side: ");
        scanf("%d", &C);

        
        if (A == B && B == C)
        {
            printf("It's an equilateral triangle.\n");
        }
        else if (A == B || B == C || C == A)
        {
            printf("It's an isosceles triangle.\n");
        }
        else
        {
            printf("It's a scalene triangle.\n");
        }
    }

    return 0;
}
