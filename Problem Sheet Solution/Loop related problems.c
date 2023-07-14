// http://lms.uiu.ac.bd/pluginfile.php/119363/mod_resource/content/1/04.%20Loop_related_problems.pdf
#include <stdio.h>
#include <math.h>
// 1
//  int main()
//  {
//      int input;
//      scanf("%d", &input);
//      for(int i=1; i<=input; i++)
//      {
//          printf("%d", i);
//          if(i < input)
//          {
//              printf(", ");
//          }
//      }
//      return 0;
//  }

// 11
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11

// 2
//  int main()
//  {
//      int input, n=1;
//      scanf("%d", &input);
//      for(int i=1; i<=input; i++)
//      {
//          printf("%d", n);
//          n = n+2;
//          if(i < input)
//          {
//              printf(", ");
//          }
//      }
//      return 0;
//  }
//  5
//  1, 3, 5, 7, 9

// 3
//  int main()
//  {
//      int input;
//      scanf("%d", &input);
//      for(int i=1; i<=input; i++)
//      {
//          printf("%d", i%2);
//          if(i < input)
//          {
//              printf(", ");
//          }
//      }
//      return 0;
//  }
//  3
//  1, 0, 1

// 4
//  int main()
//  {
//      int input;
//      float n, sum=0, average;
//      scanf("%d", &input);
//      for(int i=1; i<=input; i++)
//      {
//          scanf("%f", &n);
//          sum += n;
//      }
//      average = sum/input;
//      printf("Average %d inputs: = %f\n", input, average);
//      return 0;
//  }
//  2
//  22.4
//  11.1
//  Average 2 inputs: = 16.750000

// 5
// int main()
// {
//     int inputx, inputy;
//     scanf("%d", &inputx);
//     scanf("%d", &inputy);
//     if (inputx == inputy)
//     {
//         printf("Reached!\n");
//     }
//     else
//     {
//         while (inputx >= inputy)
//         {
//             printf("%d ", inputx * inputx);
//             inputx--;
//             if (inputx == inputy)
//             {
//                 printf("Reached \n");
//             }
//         }
//         while (inputy >= inputx)
//         {
//             printf("%d ", inputx * inputx);
//             inputx++;
//             if (inputx == inputy)
//             {
//                 printf("Reached \n");
//             }
//         }
//     }

//     return 0;
// }

// 10 15
// 100 121 144 169 196 Reached

// 6

// int main()
// {
//     int i, input, guess, tries;
//     printf("Enter the number:\n");
//     scanf("%d", &input);
//     printf("Enter How Many Try:\n");
//     scanf("%d", &tries);
//     for(i=tries; i>0; i--)
//     {
//         printf("Guess the number:\n");
//         scanf("%d", &guess);
//         if(input == guess)
//         {
//             printf("Right, Player-2 wins!\n");
//             break;
//         }
//         else
//         {
//             printf("Wrong, %d Choice(s) Left!\n", i-1);
//         }
//     }
//     if (input!=guess)
//     {
//         printf("Player-1 wins!\n");
//     }

//     return 0;
// }
// Enter the number:
// 20
// Enter How Many Try:
// 3
// Guess the number:
// 12
// Wrong, 2 Choice(s) Left!
// Guess the number:
// 8
// Wrong, 1 Choice(s) Left!
// Guess the number:
// 5
// Wrong, 0 Choice(s) Left!
// Player-1 wins!

// 7

// int main()
// {
//     char input;
//     char chA = 'A';
//     for (int i = 1; i; i++)
//     {
//         scanf(" %c", &input);
//         if(input == chA)
//         {
//             break;
//         }
//         else
//         {
//             printf("Input %d: %c\n", i, input);
//         }
//     }
//     return 0;
// }
// 1
// Input 1: 1
// 7
// Input 2: 7
// k
// Input 3: k
// a
// Input 4: a
// A

// 8
//  int main()
//  {
//      int temp, input, r, sum=0;
//      scanf("%d", &input);
//      temp = input;
//      while(temp!= 0)
//      {
//          r = temp%10;
//          sum = sum * 10 + r;
//          temp = temp / 10;
//      }
//      printf("%d\n", sum);
//      return 0;
//  }
//  45634
//  43654

// 10
// int main()
// {
//     int input, sum = 0, n = 1;
//     puts("Enter the number:");
//     scanf("%d", &input);
//     for (int i = 1; i <= input; i++)
//     {
//         {

//             if (i % 2 != 0)
//             {
//                 n = i;
//                 printf("%d ", n);
//                 if (i > 0 && i < input)
//                 {
//                     printf(",");
//                 }
//             }

//             else
//             {
//                 n = (-1) * i;
//                 printf("%d ", n);
//                 if (i > 1 && i < input)
//                 {
//                     printf(",");
//                 }
//             }
//         }

//         sum += n;
//     }

//     printf("= %d\n", sum);
//     return 0;
// }

// int main()
// {
//     int input, sum = 0, n = 1;
//     puts("Enter the number:");
//     scanf("%d", &input);
//     for (int i = 1; i <= input; i++)
//     {
//         {

//             if (i % 2 != 0)
//             {
//                 n = i;
//                 printf("%d", n);
//             }

//             else
//             {
//                 n = (-1) * i;
//                 printf("%d", n);
//             }
//         }
//         if(i<input)
//         {
//             printf(", ");
//         }

//         sum += n;
//     }

//     printf("\nSUM = %d\n", sum);
//     return 0;
// }
// Enter the number:
// 19
// 1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, 15, -16, 17, -18, 19
// SUM = 10

// 11
//  int main()
//  {
//      int input, result=1, sum = 0, i;
//      printf("Enter a number:\n");
//      scanf("%d", &input);
//      for ( i = 1; i <= input; i++)
//      {
//          printf("%d^%d.%d ", i, i, i+1);
//          result = i * i *(i+1);
//          sum += result;
//      }
//      printf("\n%d\n", sum);
//      return 0;
//  }
//  Enter a number:
//  7
//  1^1.2 2^2.3 3^3.4 4^4.5 5^5.6 6^6.7 7^7.8
//  924

// 12
// Fibonacci series
// 1 1 2 3 5 8 13 21 ...............
//  int main()
//  {
//      int input, sum = 0, first=0, second=0, fibonacci=0;
//      puts("Enter the number:");
//      scanf("%d", &input);
//      for (int i = 0; i < input; i++)
//      {
//          if(i<=1)
//          {
//              first=i;
//              second=fibonacci;
//              fibonacci = first+second;
//              printf("%d", fibonacci);
//          }
//          else
//          {
//              first=second;
//              second=fibonacci;
//              fibonacci = first+second;
//              printf("%d", fibonacci);
//          }
//          if(i< input-1)
//          {
//              printf(", ");
//          }
//      }
//      return 0;
//  }

// Enter the number:
// 7
// 0, 1, 1, 2, 3, 5, 8

// 13
// int main()
// {
//     int i, input, factorial = 1;
//     printf("Enter a number to calculate it's factorial:\n");
//     scanf("%d", &input);
//     printf("%d!= ", input);
//     for (i = input; i >= 1; i--)
//     {
//         factorial *= i;
//         printf("%d ", i);
//         if (i > 1)
//         {
//             printf("X ");
//         }
//     }
//     printf("= %d\n", factorial);
//     return 0;
// }
// Enter a number to calculate it's factorial:
// 5
// 5!= 5 X 4 X 3 X 2 X 1 = 120

// 9

// int main()
// {
//     int input, n = 0, sum = 0;
//     puts("How many Student:");
//     scanf("%d", &input);
//     for (int i = 1; i <= input; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             scanf("%d", &n);
//             sum += n;
//         }
//         printf("Student %d: %d\n", i, sum);
//         sum = 0;
//     }
//     return 0;
// }

// 14
// int main()
// {
//     int i, j, n, r, down = 1, up = 1;
//     printf("Enter two numbers to calculate their Combination:\n");
//     scanf("%d", &n);
//     scanf("%d", &r);
//     if (n >= r)
//     {
//         for (i = r; i > 0; i--)
//         {
//             down *= i;
//         }
//         for (j = n; j > n - r; j--)
//         {
//             up *= j;
//         }
//         printf("Combination of %d C %d:\n%d\n", n, r, up / down);
//     }
//     else
//     {
//         puts("Invalid Input");
//     }

//     return 0;
// }
// Enter two numbers to calculate their Combination:
// 10
// 3
// Combination of 10 C 3:
// 120

// 15

// int main()
// {
//     int x, y, exponent = 1;
//     puts("Enter the value of X and Y:");
//     scanf("%d", &x);
//     scanf("%d", &y);
//     if (x >= 0 && y >= 0)
//     {
//         for (int i = 1; i <= y; i++)
//         {
//             exponent *= x;
//         }
//         printf("Value of %d to the power %d:\n%d\n", x, y, exponent);
//         return 0;
//     }
//     else
//     {
//         puts("Invalid Input");
//     }
// }
// Enter the value of X and Y:
// 5
// 2
// Value of 5 to the power 2:
// 25

//16


