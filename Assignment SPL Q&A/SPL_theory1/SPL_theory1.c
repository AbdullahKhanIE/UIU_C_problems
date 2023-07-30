#include <stdio.h>
#define N 1000
int main()
{
    int salary[N];
    int n = 0, new_salary = 0, search = -1, found = 0;
    char option;
    while (1)
    {
        printf("===================== Office Pay Roll System =======================\n");
        printf("Enter ‘r’ to take salary of all employees.\n");
        printf("Enter ‘s’ to search a salary amount.\n");
        printf("Enter ‘t’ to display salary of all employees in reverse index order.\n");
        printf("Enter ‘q’ to quit/exit.\n");
        printf("====================================================================\n");
        scanf(" %c", &option);
        switch (option)
        {
        case 'r':
            printf("\nEnter Salary Amount: ");
            scanf("%d", &new_salary);
            if (new_salary < 1)
            {
                printf("Invalid Salary\n");
            }
            else
            {
                salary[n] = new_salary;
                n++;
            }
            break;
        case 't':
            if (n > 0)
            {
                for (int i = n - 1; i >= 0; i--)
                {
                    printf("\nIndex %d = %d\n", i + 1, salary[i]);
                }
            }
            else
            {
                printf("Index Is not Populated\n");
            }
            break;
        case 's':
            scanf("%d", &search);
            if (n > 0)
            {
                for (int j = 0; j <= n - 1; j++)
                {
                    if (salary[j] == search)
                    {
                        printf("\nIndex %d = %d\n", j + 1, salary[j]);
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Not Found\n");
                }
                found = 0;
            }
            else
            {
                printf("Index Is not Populated\n");
            }
            break;
        case 'q':
            return 0;
            break;
        default:
            printf("Invalid Input\n");
            break;
        }
    }
    return 0;
}