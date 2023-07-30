#include <stdio.h>

int main()
{
    int row, column, input;
    printf("Enter The Number of Row: \n");
    scanf("%d", &input);
    if (input % 2 == 1)
    {
        for (row = 1; row <= input; row++)
        {
            for (column = 1; column <= input; column++)
            {
                if (row == 1 || row == input / 2 + 1 || row == input || column == 1)
                {
                    printf("E");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input.\nEnter an Odd Number.\n");
    }
    return 0;
}

// Enter The Number of Row: 
// 5
// EEEEE
// E
// EEEEE
// E
// EEEEE