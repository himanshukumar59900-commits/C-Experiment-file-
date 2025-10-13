#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q;
    int i, j, k;

    // Input order of first matrix
    printf("Enter the order of matrix A (m x n): ");
    scanf("%d %d", &m, &n);

    // Input order of second matrix
    printf("Enter the order of matrix B (p x q): ");
    scanf("%d %d", &p, &q);

    // Check compatibility for multiplication
    if (n != p)
    {
        printf("\nMatrix multiplication not possible!\n");
        printf("Reason: Number of columns of A (%d) != Number of rows of B (%d)\n", n, p);
        return 0;
    }

    // Input elements of matrix A
    printf("\nEnter elements of matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of matrix B
    printf("\nEnter elements of matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize resultant matrix C to 0
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication logic: C = A × B
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display matrix A
    printf("\nMatrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }

    // Display matrix B
    printf("\nMatrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%4d ", B[i][j]);
        }
        printf("\n");
    }

    // Display resultant matrix C
    printf("\nResultant Matrix (A x B) (%d x %d):\n", m, q);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
