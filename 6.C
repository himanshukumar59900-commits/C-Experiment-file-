#include <stdio.h>


long long FACT_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * FACT_recursive(n - 1);
}

long long FACT_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long binomial_coefficient_recursive(int n, int r) {
    return FACT_recursive(n) / (FACT_recursive(r) * FACT_recursive(n - r));
}

long long binomial_coefficient_iterative(int n, int r) {
    return FACT_iterative(n) / (FACT_iterative(r) * FACT_iterative(n - r));
}

int main() {
    int n, r;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! r should be <= n and both should be non-negative.\n");
        return 0;
    }

    printf("\nUsing Recursive FACT Function:\n");
    printf("C(%d, %d) = %lld\n", n, r, binomial_coefficient_recursive(n, r));

    printf("\nUsing Non-Recursive (Iterative) FACT Function:\n");
    printf("C(%d, %d) = %lld\n", n, r, binomial_coefficient_iterative(n, r));

    printf("\n-------------------------------------------\n");
    printf("  n  |  r  |  C(n,r) (Iterative)\n");
    printf("-------------------------------------------\n");
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("  %2d | %2d | %10lld\n", i, j, binomial_coefficient_iterative(i, j));
        }
    }
    printf("-------------------------------------------\n");

    return 0;
}
