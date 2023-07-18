#include <stdio.h>

/// 1
void main()
{
    int input;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= input; j++)
        {
            printf("%d ", j);
        }
        puts("");
    }
}
//   Enter a Number:
//   3
//   1 2 3
//   1 2 3
//   1 2 3

// 2
void main()
{
    int input, n = 1;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        n = row;
        for (int column = 1; column <= input; column++)
        {
            printf("%d ", n++);
        }
        puts("");
    }
}

// Enter a Number:
// 3
// 1 2 3
// 2 3 4
// 3 4 5

// 3
void main()
{
    int input, n;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        n = row;
        for (int column = 1; column <= row; column++)
        {
            printf("%d ", n++);
        }
        puts("");
    }
}

// Enter a Number:
// 5
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

// 4
void main()
{
    int input, row, column;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (row = 1; row <= input; row++)
    {
        for (column = 1; column <= input - row; column++)
        {
            printf("_");
        }
        for (column = 1; column <= row; column++)
        {
            printf("%d", row);
        }
        puts("");
    }
}
// Enter a Number:
// 5
// ____1
// ___22
// __333
// _4444
// 55555

// 5
void main()
{
    int n, input;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        n = input;
        for (int column = 1; column <= row; column++)
        {
            printf("%d ", n--);
        }
        n = input;
        puts("");
    }
}
// Enter a Number:
//  4
//  4
//  4 3
//  4 3 2
//  4 3 2 1

// 6
void main()
{
    int input;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("%d ", column);
        }
        puts("");
    }
}

// Enter a Number :
//  4
//  1
//  1 2
//  1 2 3
//  1 2 3 4

// 7
void main()
{
    int input;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        for (int column = 1; column <= input; column++)
        {
            printf("*");
        }
        puts("");
    }
}

// Enter a Number :
//  4
//  ****
//  ****
//  ****
//  ****

// 8
void main()
{
    int input;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (int row = input; row > 0; row--)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("*");
        }
        puts("");
    }
}
//  Enter a Number:
//  5
//  *****
//  ****
//  ***
//  **
//  *

// 9
void main()
{
    int row, column, input, n = 1;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        for (int column = 1; column <= input; column++)
        {
            printf("%d", n++ % 2);
        }
        puts("");
    }
}
// Enter a Number:
// 5
// 10101
// 01010
// 10101
// 01010
// 10101

// 10
void main()
{
    int row, column, input;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        for (column = 1; column <= input - row; column++)
        {
            printf("_");
        }
        for (int column = 1; column <= row; column++)
        {
            printf("*");
        }
        puts("");
    }
}
// Enter a Number:
// 5
// ____*
// ___**
// __***
// _****
// *****

// 11
void main()
{
    int row, column, input;
    puts("Enter a Number:");
    scanf("%d", &input);
    for (int row = 1; row <= input; row++)
    {
        for (column = 1; column <= input - row; column++)
        {
            printf("_");
        }
        for (int column = 1; column <= (2 * row) - 1; column++)
        {
            printf("*");
        }
        puts("");
    }
}
// Enter a Number :
//  5
//  ____*
//  ___***
//  __*****
//  _*******
//  *********

// 12
void main()
{
    int row, column, input;
    puts("Enter a Number:");
    scanf("%d", &input);
    if (input % 2 != 0)
    {
        input = input / 2 + 1;
        for (int row = 1; row <= input; row++)
        {
            for (column = 1; column <= input - row; column++)
            {
                printf("_");
            }
            for (int column = 1; column <= (2 * row) - 1; column++)
            {
                printf("*");
            }
            puts("");
        }
        for (int row = input - 1; row >= 1; row--)
        {
            for (column = 1; column <= input - row; column++)
            {
                printf("_");
            }
            for (int column = 1; column <= (2 * row) - 1; column++)
            {
                printf("*");
            }
            puts("");
        }
    }
    else
    {
        puts("Enter an Even Input");
    }
}
// Enter a Number:
//  9
//  ____*
//  ___***
//  __*****
//  _*******
//  *********
//  _*******
//  __*****
//  ___***
//  ____*

// 13
int main()
{
    int row, column, input, k;
    scanf("%d", &input);
    for (row = 1; row <= input; row++)
    {
        for (column = 1; column <= input; column++)
        {
            if (column <= row)
            {
                printf("%d", column);
            }
            else
            {
                printf(" ");
            }
        }
        for (column = input - 1; column >= 1; column--)
        {
            if (column <= row)
            {
                printf("%d", column);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
// 5
// 1       1
// 12     21
// 123   321
// 1234 4321
// 123454321

// 14
void main()
{
    int row, column, input;
    scanf("%d", &input);
    if (input % 2 != 0)
    {
        for (row = 1; row <= input; row++)
        {
            for (column = 1; column <= input; column++)
            {
                if (column == 1 || column == input || row % 2 != 0)
                {
                    printf("*");
                }
                else
                {
                    printf("_");
                }
            }
            puts("");
        }
    }
    else
        puts("Enter Odd Input");
}

// 5
// *****
// *___*
// *****
// *___*
// *****

// 15
void main()
{
    int row, column, input;
    scanf("%d", &input);
    if (input % 2 != 0)
    {
        for (row = 1; row <= input; row++)
        {
            for (column = 1; column <= input; column++)
            {
                if (row == 1 || row == input || row + column == input + 1)
                {
                    printf("Z");
                }
                else
                {
                    printf(" ");
                }
            }
            puts("");
        }
    }
    else
        puts("Enter Odd Input");
}
// 5
// ZZZZZ
//    Z
//   Z
//  Z
// ZZZZZ

// 16
void main()
{
    int row, column, input;
    scanf("%d", &input);
    if (input % 2 != 0)
    {
        for (row = 1; row <= input; row++)
        {
            for (column = 1; column <= input; column++)
            {
                if (row == column || row + column == input + 1)
                {
                    printf("*");
                }
                else
                {
                    printf("_");
                }
            }
            puts("");
        }
    }
    else
        puts("Enter Odd Input");
}
// 7
// *_____*
// _*___*_
// __*_*__
// ___*___
// __*_*__
// _*___*_
// *_____*

// 17
void main()
{
    int row, column, input;
    scanf("%d", &input);
    if (input % 2 != 0)
    {
        for (row = 1; row <= input; row++)
        {

            for (column = 1; column <= input; column++)
            {
                if (row == input / 2 + 1 || column == input / 2 + 1 || (row >= input / 2 && row - column == input / 2) || (row <= input / 2 && column - row == input / 2) || (row <= input / 2 && row + column == input / 2 + 2) || (row >= input / 2 && row + column == (input / 2 + 1) + input))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        puts("Enter Odd Input");
    }
}
// 9
//         *
//       * * *
//     *   *   *
//   *     *     *
// * * * * * * * * *
//   *     *     *
//     *   *   *
//       * * *
//         *

// 18
void main()
{
    int row, column, input;
    scanf("%d", &input);
    if (input % 2 != 0)
    {
        for (row = 1; row <= input; row++)
        {

            for (column = 1; column <= input; column++)
            {
                if (row == input / 2 + 1 || column == input / 2 + 1 || (row >= input / 2 && row - column == input / 2) || (row <= input / 2 && column - row == input / 2) || (row <= input / 2 && row + column == input / 2 + 2) || (row >= input / 2 && row + column == (input / 2 + 1) + input))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        puts("Enter Odd Input");
    }
}
// 9
//         *
//       * * *
//     *   *   *
//   *     *     *
// * * * * * * * * *
//   *     *     *
//     *   *   *
//       * * *
//         *

// 19
void main()
{
    int row, column, input;
    scanf("%d", &input);
    if (input % 2 != 0)
    {
        for (row = 1; row <= input; row++)
        {
            for (column = 1; column <= input; column++)
            {
                if (row == input / 2 + 1 || column == 1 || column == input)
                {
                    printf("H");
                }
                else
                {
                    printf(" ");
                }
            }
            puts("");
        }
    }
    else
        puts("Enter Odd Input");
}
//  7
//  H     H
//  H     H
//  H     H
//  HHHHHHH
//  H     H
//  H     H
//  H     H
