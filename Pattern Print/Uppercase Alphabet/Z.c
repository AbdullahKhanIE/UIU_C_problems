#include<stdio.h>

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
                if (row == 1 || row ==input || row+column==input+1)
                {
                    printf("Z ");
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
        printf("Invalid Input.\nEnter an Odd Number.\n");
    }
    return 0;
}

// Enter The Number of Row: 
// 5
// Z Z Z Z Z 
//       Z   
//     Z     
//   Z       
// Z Z Z Z Z 