#include <stdio.h>

int main()
{
    float weight, height, bmi;

    // Input weight and height
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI value
    printf("\nYour BMI is: %.2f\n", bmi);

    // Determine BMI category
    if (bmi < 18.5)
    {
        printf("Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf("Category: Normal weight\n");
    }
    else if (bmi >= 25 && bmi < 30)
    {
        printf("Category: Overweight\n");
    }
    else
    {
        printf("Category: Obese\n");
    }

    return 0;
}
