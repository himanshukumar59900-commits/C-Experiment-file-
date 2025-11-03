#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    
    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;

    
    printf("Values of variables:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n\n", c);

    
    printf("Addresses stored in pointers:\n");
    printf("ptr_int = %p\n", ptr_int);
    printf("ptr_float = %p\n", ptr_float);
    printf("ptr_char = %p\n\n", ptr_char);

    
    printf("Values using pointers:\n");
    printf("*ptr_int = %d\n", *ptr_int);
    printf("*ptr_float = %.2f\n", *ptr_float);
    printf("*ptr_char = %c\n", *ptr_char);

    return 0;
}
