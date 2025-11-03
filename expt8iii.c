#include <stdio.h>

// Function prototype
void modifyValues(int *x, float *y, char *z);

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    printf("Before function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n\n", c);

    // Passing addresses (by reference)
    modifyValues(&a, &b, &c);

    printf("After function call:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    return 0;
}

// Function definition
void modifyValues(int *x, float *y, char *z) {
    *x = *x + 5;     // Increment integer value by 5
    *y = *y * 2;     // Double the float value
    *z = *z + 3;     // Move to 3rd next ASCII character
}
