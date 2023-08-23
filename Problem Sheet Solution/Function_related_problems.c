#include <stdio.h>
#define N 100

// //1
// void printfunc();
// int main()
// {
//     printfunc();
//     return 0;
// }
// void printfunc()
// {
//     printf("This is a function\n");
// }
// // This is a function

// // 2
// void printt();
// int main()
// {
//     char x;
//     scanf(" %c", &x);
//     printf("Value received from main: %c\n", x);
//     printt();
//     return 0;
// }
// void printt()
// {
//     char x;
//     scanf(" %c", &x);
//     printf("Value received from main: %c\n", x);
// }
// // 3 A
// // Value received from main: 3
// // Value received from main: A

// // 3
// int evenodd(int n);
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if (evenodd(a) == 0)
//     {
//         puts("Even");
//     }
//     else
//     {
//         puts("Odd");
//     }
//     return 0;
// }
// int evenodd(int n)
// {
//     if (n % 2 == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }
// // 69
// // Odd

// // 4
// void whichstate(int n);
// int main()
// {
//     int input;
//     scanf("%d", &input);
//     whichstate(input);
//     return 0;
// }
// void whichstate(int n)
// {
//     if (n == 0)
//     {
//         puts("Zero");
//     }
//     else if (n < 0)
//     {
//         puts("Negative");
//     }
//     else
//     {
//         puts("Positive");
//     }
// }
// // 0
// // Zero

// // 5
// void compare(int a, int b);
// int main()
// {
//     int input1, input2;
//     ;
//     scanf("%d%d", &input1, &input2);
//     compare(input1, input2);
//     return 0;
// }
// void compare(int a, int b)
// {
//     if (a == b)
//     {
//         printf("%d is equal to %d\n", a, b);
//     }
//     else if (a < b)
//     {
//         printf("%d is smaller than %d\n", a, b);
//     }
//     else
//     {
//         printf("%d is greater than %d\n", a, b);
//     }
// }
// // 5 4
// // 5 is greater than 4

// // 6
// int make_sum(int n);
// int main()
// {
//     int input;
//     scanf("%d", &input);
//     int x = make_sum(input);
//     printf("Sum in Main %d\n", x);
//     return 0;
// }
// int make_sum(int n)
// {
//     int sum = 0, in;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &in);
//         sum += in;
//     }
//     printf("Sum in Function %d\n", sum);
//     return sum;
// }
// // 3
// // 80 33 27
// // Sum in Function 140
// // Sum in Main 140

// // 7
// int makesum(int array[], int n);
// int main()
// {
//     int array[N];
//     int input;
//     scanf("%d", &input);
//     int x = makesum(array, input);
//     printf("Sum in Main %d\n", x);
//     return 0;
// }
// int makesum(int array[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &array[i]);
//         sum += array[i];
//     }
//     printf("Sum in Function %d\n", sum);
//     return sum;
// }
// // 3
// // 80 33 27
// // Sum in Function 140
// // Sum in Main 140

// // 8
// void rev(int array[], int n);
// int main()
// {
//     int array[N];
//     int input;
//     scanf("%d", &input);
//     rev(array, input);
//     return 0;
// }
// void rev(int array[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &array[i]);
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         printf("%d ", array[i]);
//     }
//     puts("");
// }
// // 5
// // 10 9 8 7 5
// // 5 7 8 9 10

// // 9
// int fact(int input);
// int main()
// {
//     int input;
//     scanf("%d", &input);
//     printf("%d\n", fact(input));
//     return 0;
// }
// int fact(int input)
// {
//     int fact = 1;
//     for (int i = input; i > 0; i--)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// // 5
// // 120

// // 10
// int power(int x, int y);
// int main()
// {
//     int input1, input2;
//     scanf("%d %d", &input1, &input2);
//     if (input1 >= 0 && input2 >= 0)
//     {
//         int pow = power(input1, input2);
//         printf("%d to the power %d is %d\n", input1, input2, pow);
//     }
//     else
//     {
//         puts("Invalid Input");
//     }
//     return 0;
// }
// int power(int x, int y)
// {
//     int exponent = 1;
//     for (int i = 1; i <= y; i++)
//     {
//         exponent *= x;
//     }
//     return exponent;
// }
// // 3 4
// // 3 to the power 4 is 81

// // 11
// int strln(char str[], int n);
// int main()
// {
//     char str[N];
//     int x = strln(str, N);
//     printf("%d\n", x);
//     return 0;
// }
// int strln(char str[], int n)
// {
//     fgets(str, n, stdin);
//     int len = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         len++;
//     }
//     return len - 1;
// }

// // I love my country
// // 17

// // 12
// void swap2(int a, int b);
// int main()
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     swap2(a, b);
//     printf("Value in main: %d %d\n", a, b);
//     return 0;
// }
// void swap2(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("Value in func: %d %d\n", a, b);
// }
// // 5 10
// // Value in func: 10 5
// // Value in main: 5 10

// // 13
// int main()
// {
//     return 0;
// }

// // 14
// void scaneven(int array[], int n);
// int main()
// {
//     int str[5];
//     scaneven(str, 5);
//     return 0;
// }
// void scaneven(int array[], int n)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &array[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         if (array[i] % 2 == 0)
//         {
//             printf("%d ", array[i]);
//         }
//     }
// }
// // 24 77 117 -512 1024
// // 24 -512 1024

// // 15
// int scaneven(int array[], int n);
// int main()
// {
//     int str[5];
//     int x = scaneven(str, 5);
//     printf("Minimum Value: %d\n", x);
//     return 0;
// }
// int scaneven(int array[], int n)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &array[i]);
//     }
//     int min = array[0];
//     for (int i = i; i < 5; i++)
//     {
//         if (array[i] > min)
//         {
//             min = array[i];
//         }
//     }
//     return min;
// }