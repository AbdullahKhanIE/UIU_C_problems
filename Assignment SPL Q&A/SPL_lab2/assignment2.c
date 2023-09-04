#include <stdio.h>
#include <string.h>
#define N 100

// //1
// int main()
// {
//     float sum = 0, avg;
//     char name[N];
//     printf("Enter student name: ");
//     fgets(name, N, stdin);
//     int len = strlen(name) - 1;
//     name[len] = '\0';
//     float number[5];
//     printf("Enter five exam marks: ");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("  %f", &number[i]);
//         sum += number[i];
//     }
//     avg = sum / 5;
//     int space = 0;
//     for (int i = len - 1; i >= 0; i--)
//     {
//         if (name[i] != ' ')
//         {
//             space++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     printf("The Last name is: ");
//     for (int i = len - space; i < len; i++)
//     {
//         printf("%c", name[i]);
//     }
//     puts("");
//     printf("Average marks is: %.1f\n", avg);
//     return 0;
// }
// // Enter student name: asd khan
// // Enter five exam marks: 1 2 3 4 10

// // The Last name is: khan
// // Average marks is: 4.0

// // 2
// struct date
// {
//     int year;
//     int month;
//     int day;
// };
// int isLeapYear(int year);
// int main()
// {
//     struct date dates[5];
//     FILE *inputFile;
//     inputFile = fopen("sol2.txt", "r");
//     if (inputFile == NULL)
//     {
//         printf("Error opening input file.\n");
//         return 1;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         fscanf(inputFile, "%d/%d/%d ", &dates[i].day, &dates[i].month, &dates[i].year);
//     }

//     printf("Stored Dates:\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d/%d/%d\n", dates[i].day, dates[i].month, dates[i].year);
//     }

//     printf("\nLeap Year Dates:\n");
//     for (int i = 0; i < 5; i++)
//     {
//         if (isLeapYear(dates[i].year) == 1)
//         {
//             printf("%02d/%02d/%04d\n", dates[i].day, dates[i].month, dates[i].year);
//         }
//     }
//     fclose(inputFile);
//     return 0;
// }
// int isLeapYear(int year)
// {
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//     {
//         return 1;
//     }
//     return 0;
// }
// // Stored Dates:
// // 5/12/2024
// // 5/12/2023
// // 5/12/2023
// // 5/12/2023
// // 5/12/2000
// // Leap Year Dates:
// // 05/12/2024
// // 05/12/2000

// // 3
// int is_prime(int x);
// int power_of_2(int x);
// int is_mersenne(int x);
// int main()
// {
//     int x;
//     scanf("%d", &x);
//     if (is_mersenne(x) != 0)
//     {
//         puts("Yes");
//     }
//     else
//     {
//         puts("No");
//     }
//     return 0;
// }

// int is_prime(int x)
// {
//     if (x < 2)
//     {
//         return 0;
//     }
//     else if (x == 2)
//     {
//         return 1;
//     }
//     else if (x % 2 == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         for (int i = 3; i < x; i += 2)
//         {
//             if (x % i == 0)
//             {
//                 return 0;
//             }
//         }
//         return 1;
//     }
// }

// int power_of_2(int x)
// {
//     if (x == 1)
//     {
//         return 1;
//     }
//     else if (x % 2 != 0 || x == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return power_of_2(x / 2);
//     }
// }

// int is_mersenne(int x)
// {
//     if (is_prime(x) == 1 && power_of_2(x + 1) == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// // 131071
// // Yes

// // 71
// // No

// // 4

// struct card
// {
//     char name[60];
//     int stage;
//     int HP;
// };

// int main()
// {
//     struct card pokemon[N];
//     int n, price = 0;

//     scanf("%d", &n);
//     getchar();

//     for (int i = 0; i < n; i++)
//     {
//         fgets(pokemon[i].name, sizeof(pokemon[i].name), stdin);
//         int len = strlen(pokemon[i].name);
//         price += 50;
//         if (len > 0 && pokemon[i].name[len - 1] == '\n')
//         {
//             pokemon[i].name[len - 1] = '\0';
//             len--;
//         }

//         if (len > 0 && pokemon[i].name[len - 1] == 'X')
//         {
//             price += 200;
//         }

//         scanf("%d", &pokemon[i].stage);

//         switch (pokemon[i].stage)
//         {
//         case 0:
//             price += 0;
//             break;
//         case 1:
//             price += 30;
//             break;
//         case 2:
//             price += 80;
//             break;
//         default:
//             break;
//         }

//         scanf("%d", &pokemon[i].HP);
//         price += pokemon[i].HP;

//         getchar();
//     }

//     printf("%d\n", price);
//     return 0;
// }

// // 4
// // Charizard
// // 2
// // 120
// // Pikachu
// // 0
// // 40
// // ShayminEX
// // 0
// // 110
// // Lucario
// // 1
// // 90

// // 870

// // 5
// struct students
// {
//     char name[N];
//     char ID[N];
//     float cgpa;
// };
// int main()
// {
//     struct students student[N];
//     int n;
//     scanf("%d", &n);
//     getchar();
//     for (size_t i = 0; i < n; i++)
//     {
//         fgets(student[i].name, N, stdin);
//         student[i].name[strlen(student[i].name) - 1] = '\0';

//         fgets(student[i].ID, N, stdin);
//         student[i].ID[strlen(student[i].ID) - 1] = '\0';

//         scanf(" %f", &student[i].cgpa);
//         getchar();
//         if (student[i].cgpa < 0 || student[i].cgpa > 4)
//         {
//             return 1;
//         }
//     }
//     float max = student[0].cgpa;
//     int max_i = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (max < student[i].cgpa)
//         {
//             max = student[i].cgpa;
//             max_i = i;
//         }
//     }
//     printf("%s\n%s\n%.2f\n", student[max_i].name, student[max_i].ID, student[max_i].cgpa);
//     return 0;
// }
// // 3
// // AKIE
// // 101
// // 3.0

// // Akib
// // 102
// // 3.4

// // Sao
// // 104
// // 3.5

// // Sao
// // 104
// // 3.50

// 6
// int convBase(int num);
// int is_Prime(int x);
// int primeChecker(int a, int b);

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int conv_num = convBase(n);
//     int first_digit, last_digit;
//     last_digit = conv_num % 10;
//     int conv_sum;
//     while (conv_num > 0)
//     {
//         conv_sum += conv_num % 10;
//         if (conv_num / 10 == 0)
//         {
//             first_digit = conv_num;
//         }
//         conv_num /= 10;
//     }
//     int range = primeChecker(first_digit, last_digit);

//     if ((conv_sum % 5 == 0) || (range > 4))
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }
// int convBase(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         int x = num % 6;
//         return x + 10 * convBase(num / 6);
//     }
// }
// int is_prime(int x)
// {
//     if (x < 2)
//     {
//         return 0;
//     }
//     else if (x == 2)
//     {
//         return 1;
//     }
//     else if (x % 2 == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         for (int i = 3; i < x; i += 2)
//         {
//             if (x % i == 0)
//             {
//                 return 0;
//             }
//         }
//         return 1;
//     }
// }
// int primeChecker(int a, int b)
// {
//     int count = 0;
//     for (int i = 0; i <= a + b; i++)
//     {
//         if (is_prime(i) == 1)
//         {
//             count++;
//         }
//     }
//     return count;
// }
// // 103
// // NO
// // 35
// // YES

// // 7
// int DemogorgonNumber(int a);
// int checkerFunc1(int a);
// int primeChecker(int a);

// int main()
// {
//     int lower, upper;
//     scanf("%d %d", &lower, &upper);
//     for (int num = lower; num <= upper; num++)
//     {
//         if (DemogorgonNumber(num) == 1)
//         {
//             printf("%d ", num);
//         }
//     }
//     return 0;
// }

// int checkerFunc1(int a)
// {
//     int even_sum = 0, odd_sum = 0;

//     while (a > 0)
//     {
//         int digit = a % 10;
//         if (digit % 2 == 0)
//         {
//             even_sum += digit;
//         }
//         else
//         {
//             odd_sum += digit;
//         }
//         a /= 10;
//     }
//     if (odd_sum < even_sum)
//     {
//         return 1;
//     }
//     else
//     {
//         return -1;
//     }
// }

// int primeChecker(int a)
// {
//     if (a < 2)
//     {
//         return -1;
//     }
//     else if (a == 2)
//     {
//         return 1;
//     }
//     else if (a % 2 == 0)
//     {
//         return -1;
//     }
//     else
//     {
//         for (int i = 3; i < a; i += 2)
//         {
//             if (a % i == 0)
//             {
//                 return -1;
//             }
//         }
//         return 1;
//     }
// }

// int DemogorgonNumber(int a)
// {
//     if (primeChecker(a) == 1 && checkerFunc1(a) == 1)
//     {
//         return 1;
//     }
//     return -1;
// }
// // 130 430
// // 163 181 223 241 263 281 283 383 401 421
// // 1005 1250
// // 1061 1063 1163 1181

// // 8
// int fibonacci(int n);
// void print_char(int num);

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         int fibo = fibonacci(i);
//         printf("%d ", fibo);
//         if (i <= n - 2)
//         {
//             print_char(fibo);
//         }
//     }
//     return 0;
// }
// int fibonacci(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }
// void print_char(int num)
// {
//     if (num % 2 == 0)
//     {
//         printf("$ ");
//     }
//     else if (num == 0)
//     {
//         printf("& ");
//     }
//     else
//     {
//         printf("# ");
//     }
// }
// // 5
// // 0 $ 1 # 1 # 2 $ 3
// // 7
// // 0 $ 1 # 1 # 2 $ 3 # 5 # 8

// // 9
// struct Customer
// {
//     int id;
//     char name[100];
//     char birthday[11];
//     char house[12];
//     int purchases[3];
// };
// int checkSubstring(char *mString, char *sString);
// void gryffindor(struct Customer customers[], int n);
// void slytherin(struct Customer customers[], int n);

// int main()
// {
//     int n;
//     printf("Number of Customers: ");
//     scanf("%d", &n);

//     struct Customer customers[n];

//     for (int i = 0; i < n; i++)
//     {
//         printf("Customer %d:\n", i + 1);
//         customers[i].id = i + 1;
//         printf("Name: ");
//         fflush(stdin);
//         gets(customers[i].name);
//         printf("Birthday: ");
//         fflush(stdin);
//         gets(customers[i].birthday);
//         printf("House: ");
//         fflush(stdin);
//         gets(customers[i].house);
//         printf("Purchase: ");
//         scanf("%d %d %d", &customers[i].purchases[0], &customers[i].purchases[1], &customers[i].purchases[2]);
//     }
//     printf("List of Loyal Customers:\n");
//     gryffindor(customers, n);
//     slytherin(customers, n);
//     return 0;
// }
// int checkSubstring(char *mString, char *sString)
// {
//     return strstr(mString, sString) != NULL;
// }
// void gryffindor(struct Customer customers[], int n)
// {
//     int foundGry = 0, maxAvg = 0, m;
//     float avgPurchase;
//     for (int i = 0; i < n; i++)
//     {
//         if (strcmp(customers[i].house, "Gryffindor") == 0 && checkSubstring(customers[i].name, "est"))
//         {
//             foundGry = 1;
//             avgPurchase = (customers[i].purchases[0] + customers[i].purchases[1] + customers[i].purchases[2]) / 3.0;
//             if (avgPurchase > maxAvg)
//             {
//                 maxAvg = avgPurchase;
//                 m = i;
//             }
//         }
//     }
//     if (!foundGry)
//     {
//         printf("Gryffindor:\nNill\n");
//     }
//     else
//     {
//         printf("Gryffindor:\n%s | %s | %.2f\n", customers[m].name, customers[m].birthday, avgPurchase);
//     }
// }
// void slytherin(struct Customer customers[], int n)
// {
//     int foundSly = 0, maxAvg = 0, m;
//     float avgPurchase;
//     for (int i = 0; i < n; i++)
//     {
//         if (strcmp(customers[i].house, "Slytherin") == 0 && checkSubstring(customers[i].name, "rus"))
//         {
//             foundSly = 1;
//             avgPurchase = (customers[i].purchases[0] + customers[i].purchases[1] + customers[i].purchases[2]) / 3.0;
//             if (avgPurchase > maxAvg)
//             {
//                 maxAvg = avgPurchase;
//                 m = i;
//             }
//         }
//     }
//     if (!foundSly)
//     {
//         printf("Slytherin:\nNill\n");
//     }
//     else
//     {
//         printf("Slytherin:\n%s | %s | %.2f\n", customers[m].name, customers[m].birthday, avgPurchase);
//     }
// }

// // 10
// #include <stdio.h>
// #include <string.h>

// void role(const char *email);
// int teacher_count(const char *emails[], int count);

// int main()
// {
//     const char *emails[5];
//     char emailArray[5][100];

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%s", emailArray[i]);
//         emails[i] = emailArray[i];
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         role(emails[i]);
//     }

//     int teacherCount = teacher_count(emails, 5);
//     printf("%d\n", teacherCount);

//     return 0;
// }

// void role(const char *email)
// {
//     if (strstr(email, "@bscse") != NULL)
//     {
//         printf("Student\n");
//     }
//     else if (strstr(email, "@cse") != NULL)
//     {
//         printf("Teacher\n");
//     }
//     else
//     {
//         printf("\n");
//     }
// }

// int teacher_count(const char *emails[], int count)
// {
//     int teacher = 0;
//     for (int i = 0; i < count; i++)
//     {
//         if (strstr(emails[i], "@cse") != NULL)
//         {
//             teacher++;
//         }
//     }
//     return teacher;
// }
// // abc@bscse.uiu.ac.bd
// // ab@cse.uiu.ac.bd
// // a@cse.uiu.ac.bd
// // acc@bscse.uiu.ac.bd
// // abcd@bscse.uiu.ac.bd
// // Student
// // Teacher
// // Teacher
// // Student
// // Student
// // 2