#include <stdio.h>
#include <string.h>
#define N 100

//1
struct students
{
    char name[N];
    char ID[N];
    float cgpa;
};
int main()
{
    struct students student[N];
    fgets(student[0].name, N, stdin);
    student[0].name[strlen(student[0].name) - 1] = '\0';
    fgets(student[0].ID, N, stdin);
    student[0].ID[strlen(student[0].ID) - 1] = '\0';
    scanf("%f", &student[0].cgpa);
    return 0;
}

//2
struct students
{
    char name[N];
    char ID[N];
    float cgpa;
};
int main()
{
    struct students student[N];
    fgets(student[0].name, N, stdin);
    student[0].name[strlen(student[0].name) - 1] = '\0';
    strcpy(student[0].name,"Abdullah");
    fgets(student[0].ID, N, stdin);
    student[0].ID[strlen(student[0].ID) - 1] = '\0';
    strcpy(student[0].ID,"1234");
    scanf("%f", &student[0].cgpa);
    student[0].cgpa=1;
    return 0;
}

//3
struct students
{
    char name[N];
    char ID[N];
    float cgpa;
};
int main()
{
    struct students student[N];
    fgets(student[0].name, N, stdin);
    student[0].name[strlen(student[0].name) - 1] = '\0';
    fgets(student[0].ID, N, stdin);
    student[0].ID[strlen(student[0].ID) - 1] = '\0';
    scanf("%f", &student[0].cgpa);
    return 0;
}

//4
struct students
{
    char name[N];
    char ID[N];
    float cgpa;
};
int main()
{
    struct students student[N];
    fgets(student[0].name, N, stdin);
    student[0].name[strlen(student[0].name) - 1] = '\0';
    fgets(student[0].ID, N, stdin);
    student[0].ID[strlen(student[0].ID) - 1] = '\0';
    scanf("%f", &student[0].cgpa);
    return 0;
}

// 5
struct students
{
    char name[N];
    char ID[N];
    float cgpa;
};
int main()
{
    struct students student[N];
    fgets(student[0].name, N, stdin);
    student[0].name[strlen(student[0].name) - 1] = '\0';
    fgets(student[0].ID, N, stdin);
    student[0].ID[strlen(student[0].ID) - 1] = '\0';
    scanf("%f", &student[0].cgpa);
    printf("Name: %s\nID: %s\nCGPA: %.2f\n", student[0].name, student[0].ID, student[0].cgpa);
    return 0;
}

// Abdullah Khan
// 0112310075
// 4.00
// Name: Abdullah Khan
// ID: 0112310075
// CGPA: 4.00
