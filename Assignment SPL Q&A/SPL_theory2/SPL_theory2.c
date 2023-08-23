#include <stdio.h>
#include <string.h>
#define N 100
struct Employee
{
    char name[N];
    char Gender;
    float salary;
};
int takeEmployeesInfoFromKeyboard(struct Employee employees[], int n);
void searchAnEmployee(struct Employee employees[], int n);
void displayAllEmployeesInfoReverse(struct Employee employees[], int n);
void main()
{
    struct Employee employees[N];
    int n = 0;
    char option;
    while (1)
    {
        printf("============================= Office Pay Roll System ===========================\n");
        printf("Enter 'r' to take information of one employee.\n");
        printf("Enter 's' to search an employee by name\n");
        printf("Enter 't' to display the information of all the employees in reverse index order\n");
        printf("Enter 'q' to quit/exit.\n");
        printf("Enter your choice: ");
        scanf(" %c", &option);
        switch (option)
        {
        case 'r':
            n = takeEmployeesInfoFromKeyboard(employees, n);
            break;
        case 't':
            displayAllEmployeesInfoReverse(employees, n);
            break;
        case 's':
            searchAnEmployee(employees, n);
            break;
        case 'q':
            return;
            break;
        default:
            printf("\nInvalid Input\n\n");
            break;
        }
    }
}

int takeEmployeesInfoFromKeyboard(struct Employee employees[], int n)
{
    printf("Name: ");
    getchar();
    fgets(employees[n].name, N, stdin);
    employees[n].name[strlen(employees[n].name) - 1] = '\0';
    printf("Gender: ");
    scanf(" %c", &employees[n].Gender);
    printf("Salary: ");
    scanf(" %f", &employees[n].salary);
    n++;
    return n;
}
void displayAllEmployeesInfoReverse(struct Employee employees[], int n)
{

    if (n > 0)
    {
        printf("Employee Name - Employee Gender - Salary\n");
        for (int i = n - 1; i >= 0; i--)
        {
            printf("\n%s    -    %c    -    %f\n", employees[i].name, employees[i].Gender, employees[i].salary);
        }
    }
    else
    {
        printf("Index Is not Populated\n");
    }
}
void searchAnEmployee(struct Employee employees[], int n)
{
    if (n > 0)
    {
        int found = 0;
        char search[N];
        getchar();
        fgets(search, N, stdin);
        search[strlen(search) - 1] = '\0';
        for (int i = 0; i < n; i++)
        {
            if (strcmp(search, employees[i].name) == 0)
            {
                printf("\n%s  -  %c  -  %f  \n", employees[i].name, employees[i].Gender, employees[i].salary);
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("\nNot Found\n");
        }
        found = 0;
    }
    else
    {
        printf("Index Is not Populated\n");
    }
}
