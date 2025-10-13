#include <stdio.h>

int main()
{
    int n, i, num, count = 0;
    int arr[100]; // array to store integers

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input number whose frequency is to be found
    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    // Count occurrences
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    // Display result
    printf("\nThe number %d appears %d time(s) in the list.\n", num, count);

    return 0;
}
