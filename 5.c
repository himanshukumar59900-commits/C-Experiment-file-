#include <stdio.h>

int main()
{
    int n, i;
    int arr[100]; // array to store numbers
    int largest, secondLargest;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and secondLargest
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        secondLargest = arr[1];
    }
    else
    {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Find largest and second largest
    for (i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    // Display result
    printf("\nThe second largest number is: %d\n", secondLargest);

    return 0;
}
