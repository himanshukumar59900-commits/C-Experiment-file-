#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    float b[3] = {1.1, 2.2, 3.3};
    char c[3] = {'A', 'B', 'C'};

    int *ptr_int = a;
    float *ptr_float = b;
    char *ptr_char = c;

    printf("Initial Addresses:\n");
    printf("ptr_int   = %p\n", ptr_int);
    printf("ptr_float = %p\n", ptr_float);
    printf("ptr_char  = %p\n\n", ptr_char);

    // Increment pointers
    ptr_int++;
    ptr_float++;
    ptr_char++;

    printf("After Incrementing:\n");
    printf("ptr_int   = %p (points to %d)\n", ptr_int, *ptr_int);
    printf("ptr_float = %p (points to %.1f)\n", ptr_float, *ptr_float);
    printf("ptr_char  = %p (points to %c)\n\n", ptr_char, *ptr_char);

    // Decrement pointers (back to original)
    ptr_int--;
    ptr_float--;
    ptr_char--;

    printf("After Decrementing (back to original):\n");
    printf("ptr_int   = %p (points to %d)\n", ptr_int, *ptr_int);
    printf("ptr_float = %p (points to %.1f)\n", ptr_float, *ptr_float);
    printf("ptr_char  = %p (points to %c)\n", ptr_char, *ptr_char);

    return 0;
}

