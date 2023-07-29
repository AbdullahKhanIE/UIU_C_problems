#include <stdio.h>
#define N 100

// 1
int main()
{
    int input, row, column, sum = 0;
    int array[N][N];
    scanf("%d", &input);
    for (row = 0; row < input; row++)
    {
        for (column = 0; column < input; column++)
        {
            scanf("%d", &array[row][column]);
            if (row == 0 || column == input - 1 || row == input - 1)
            {
                sum += array[row][column];
            }
        }
    }
    printf("No. of treats = %d\n", sum);

    return 0;
}

// 4
// 6 6 6 5
// 5 5 4 5
// 2 2 3 3
// 4 8 4 4
// No. of treats = 51



// 2
int main()
{
    int input, sum = 0, i = 0, j = 0;
    int array[N];
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        scanf("%d", &array[i]);
    }
    for (j = 0; j < input; j++)
    {
        if (array[j] % 2 == 0)
        {
            sum += array[j];
            array[j + 1] = array[j + 1] - 1;
        }
        else
        {
            sum += array[j];
        }
    }
    printf("Sum = %d\n", sum);
    return 0;
}

// 6
// 2 9 8 4 6 1
// Sum = 27