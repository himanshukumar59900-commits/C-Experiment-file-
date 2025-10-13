#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int positive = 0, negative = 0, even = 0, odd = 0;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Process the array
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Display the results
    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
