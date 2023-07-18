#include <stdio.h>
#include <math.h>
#define N 500

// 1
int main()
{
    int input;
    scanf("%d", &input);
    int n = sqrt(input);
    int array[N][N];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 9
// 1 1 1 2 2 2 3 3 3
// 1 1 1
// 2 2 2
// 3 3 3

// 2
int main()
{
    int row, column;
    scanf("%d", &row);
    scanf("%d", &column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nRow Wise: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", array[i][j]);
        }
    }
    printf("\nColumn Wise: ");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", array[j][i]);
        }
    }
    printf("\n");
    return 0;
}
// 2 3
// 1 2 3 6 5 4

// Row Wise: 1 2 3 6 5 4
// Column Wise: 1 6 2 5 3 4

// 3
int main()
{
    int input, determinant;
    int array[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    determinant = (array[0][0] * ((array[1][1] * array[2][2]) - (array[1][2] * array[2][1]))) - (array[0][1] * ((array[1][0] * array[2][2]) - (array[2][0] * array[1][2]))) + (array[0][2] * ((array[1][0] * array[2][1]) - (array[1][1] * array[2][0])));
    printf("\n\t%d\n", determinant);
    return 0;
}

// 1 2 3
// 4 5 6
// 7 8 9

//         0

// 4
int main()
{
    int n;
    scanf("%d", &n);
    int array[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nMajor Diagonal: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", array[i][j]);
            }
        }
    }
    printf("\nMinor Diagonal: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                printf("%d ", array[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}

// Major Diagonal: 1 4 2 9 4
// Minor Diagonal: 5 2 2 7 1

// 5
int main()
{
    int n;
    scanf("%d", &n);
    int array[n][n];
    printf("\nIdentity Matrix of %d: \n", n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("1 ", array[i][j]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
// 4

// Identity Matrix of 4:
// 1 0 0 0
// 0 1 0 0
// 0 0 1 0
// 0 0 0 1

//6
int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int arrayA[row][column];
    int arrayB[row][column];
    int arrayC[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arrayA[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arrayB[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arrayC[i][j] = arrayA[i][j] + arrayB[i][j];
            printf("%d ", arrayC[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 2 3

// 1 2 3
// 2 3 4

// 1 1 1
// 2 2 2

// 2 3 4
// 4 5 6

// 7
int main()
{
    int row = 3, column = 3, sum = 0;
    int arrayA[row][column];
    int arrayB[row][column];
    int arrayC[row][column];
    // Input for arrayA
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arrayA[i][j]);
        }
    }
    // Input for arrayB
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arrayB[i][j]);
        }
    }
    // Calculate the matrix product
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            for (int k = 0; k < column; k++)
            {
                sum += arrayA[i][k] * arrayB[k][j];
            }
            arrayC[i][j] = sum;
            sum = 0;
        }
    }
    // Print the result arrayC
    printf("Matrix A:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arrayA[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arrayB[i][j]);
        }
        printf("\n");
    }
    printf("Matrix C (Result):\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arrayC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 1 2 3 4 5 6 7 8 9 2 2 2 2 2 2 1 1 1
// Matrix A:
// 1 2 3
// 4 5 6
// 7 8 9
// Matrix B:
// 2 2 2
// 2 2 2
// 1 1 1
// Matrix C (Result):
// 9 9 9
// 24 24 24
// 39 39 39

// 8
int main()
{
    int row, column;
    int array[row][column];
    scanf("%d %d", &row, &column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int max = array[0][0];
    int indexi = 0;
    int indexj = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                indexi = i;
                indexj = j;
            }
        }
    }
    printf("Max: %d\nLocation: [%d][%d]\n", max, indexi, indexj);
    return 0;
}
// 2 3
// 9 8 7
// 3 4 5
// Max: 9
// Location: [0][0]

//9
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        int array[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &array[i][j]);
            }
        }
        printf("\n\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j || i + j == n - 1 || i == 0 || i == n - 1)
                {
                    sum += array[i][j];
                    printf("%d ", array[i][j]);
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}
// 1 1 1 1 1 1 1
//   1       1
//     1   1
//       1
//     1   1
//   1       1
// 1 1 1 1 1 1 1
// Sum: 23

// 1 2 3 4 5
//   3   1
//     9
//   2   7
// 5 4 3 2 1
// Sum: 52

//10
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        int array[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &array[i][j]);
            }
        }
        printf("\n\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == (n - 1) / 2 || j == (n - 1) / 2 || (i >= (n - 1) / 2 && j == 0) || (i <= (n - 1) / 2 && j == n - 1) || (j <= (n - 1) / 2 && i == 0) || (j >= (n - 1) / 2 && i == n - 1))
                {
                    sum += array[i][j];
                    printf("%d ", array[i][j]);
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}

// 5
// 1 2 3 4 5
// 2 3 4 1 6
// 3 4 9 6 7
// 4 2 6 7 8
// 5 4 3 2 1

// 1 2 3   5
//     4   6
// 3 4 9 6 7
// 4   6
// 5   3 2 1
// Sum: 71

//11
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        int array[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &array[i][j]);
            }
        }
        printf("\n\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i % 2 == 1) || (j % 2 == 1))
                {
                    sum += array[i][j];
                    printf("%d ", array[i][j]);
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}

// 7
// 1 1 1 1 1 1 1
// 1 1 1 1 1 1 1
// 1 1 1 1 1 1 1
// 1 1 1 1 1 1 1
// 1 1 1 1 1 1 1
// 1 1 1 1 1 1 1
// 1 1 1 1 1 1 1

//   1   1   1
// 1 1 1 1 1 1 1
//   1   1   1
// 1 1 1 1 1 1 1
//   1   1   1
// 1 1 1 1 1 1 1
//   1   1   1
// Sum: 33

// 12
int main()
{
    int row, column, sum = 0;
    scanf("%d %d", &row, &column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = column - 1; j >= 0; j--)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 2 6
// 6 5 4 3 2 1
// 4 5 6 7 8 9

// 1 2 3 4 5 6
// 9 8 7 6 5 4

// 13
int main()
{
    int row, column, input = 0, count = 0;
    scanf("%d ", &input);
    row = input;
    column = input;
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if ((array[i][j] == array[j][i]))
            {
                ++count;
            }
        }
    }
    if (count == input * input)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

// 3
// 1 7 3
//7 4 5
//3 5 6
// YES

// 2
// 1 3
// 4 2
// NO


// 14
//dont know.


// 15
int main()
{
    int row, column, sum = 0;
    scanf("%d %d", &row, &column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }
    printf("\nSum: %d\n", sum);
    return 0;
}

// 3 3 
// 1 7 3
// 7 4 5
// 3 5 6

// Sum: 41