#include <stdio.h>

int main()
{
    int row, column, input;
    printf("Enter The Number of Row: \n");
    scanf("%d", &input);
        for (row = 1; row <= input; row++)
        {
            for (column = 1; column <= input; column++)
            {
                if (row == input || column == input || column == 1)
                {
                    if (row == input && column == 1 || row == input && column == input)
                    {
                        printf("  ");
                    }
                    else
                    {
                        printf("U ");
                    }
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    return 0;
}