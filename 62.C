#include <stdio.h>


int GCD(int num1, int num2) {
    if (num2 == 0)
        return num1; 
    else
        return GCD(num2, num1 % num2);  
}

int main() {
    int a, b;

    
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    
    int gcd = GCD(a, b);

    
    printf("The Greatest Common Divisor (GCD) of %d and %d is: %d\n", a, b, gcd);

    return 0;
}
