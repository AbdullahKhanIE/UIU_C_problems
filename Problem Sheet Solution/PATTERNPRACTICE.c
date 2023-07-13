#include <stdio.h>


void main()
{
    int row, column, input;
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("* ");
        }
        puts(" ");
    }
}

// 5
// *
// * *
// * * *
// * * * *
//* * * * *

void main()
{
    int row, column, input;
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        for(int column = 1; column <= input-row; column++)
        printf("  ");
        for (int column = 1; column <= row; column++)
        {
            printf("* ");
        }
        puts("");
    }
}
// 5
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

void main()
{
    int row, column, input;
    scanf("%d", &input);
    for (int row = input; row >= 1; row--)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("* ");
        }
        puts(" ");
    }
}

// 5
// * * * * *
// * * * *
// * * *
// * *
// *

void main()
{
    int row, column, input;
    scanf("%d", &input);
    for (int row = input; row >= 1l; row--)
    {
        for (int column = 1; column <= input - row; column++)
        {
            printf("  ");
        }
        for (int column = 1; column <= row; column++)
        {
            printf("* ");
        }
        puts("");
    }
}

// 5
// * * * * *
//   * * * *
//     * * *
//       * *
//         *

void main()
{
    int row, column, input;
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        for (int column = 1; column <= input - row; column++)
        {
            printf("  ");
        }
        for (int column = 1; column <= (2 * row) - 1; column++)
        {
            printf("* ");
        }
        puts("");
    }
}

// 4
//       *
//     * * *
//   * * * * *
// * * * * * * *

void main()
{
    int row, column, input;
    scanf("%d", &input);
    for (int row = input; row >= 1; row--)
    {
        for (int column = 1; column <= input - row; column++)
        {
            printf("  ");
        }
        for (int column = 1; column <= (2 * row) - 1; column++)
        {
            printf("* ");
        }
        puts("");
    }
}

// 5
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

void main()
{
    int row, column, input;
    scanf("%d", &input);
    for (int row = 1; row <= input / 2 + 1; row++)
    {
        for (int column = 1; column <= input - row; column++)
        {
            printf("  ");
        }
        for (int column = 1; column <= (2 * row) - 1; column++)
        {
            printf("* ");
        }
        puts("");
    }
    for (size_t row = input / 2; row >= 1; row--)
    {
        for (int column = 1; column <= input - row; column++)
        {
            printf("  ");
        }
        for (int column = 1; column <= (2 * row) - 1; column++)
        {
            printf("* ");
        }
        puts("");
    }
}
// 7
//             *
//           * * *
//         * * * * *
//       * * * * * * *
//         * * * * *
//           * * *
//             *

//basic

void main()
{
    int row, column, input;
    scanf("%d", &input);
    for (row = 1; row <= input; row++)
    {
        for (column = 1; column <= input - row; column++)
        {
            printf("  ");
        }
        for (column = row; column >= 1; column--)
        {
            printf("%d ", column);
        }
        puts("");
    }
}
// 5
//          1
//        2 1
//      3 2 1
//    4 3 2 1
//  5 4 3 2 1

void main()
{
    int row, column, input, n = 1;
    scanf("%d", &input);
    for (row = 1; row <= input; row++)
    {
        for (column = 1; column <= input - row; column++)
        {
            printf("  ");
        }
        for (column = row; column >= 1; column--)
        {
            if (n > input)
            {
                n = 1;
            }
            printf("%d ", n++);
        }
        puts("");
    }
}
// 5
//         1
//       2 3
//     4 5 1
//   2 3 4 5
// 1 2 3 4 5

