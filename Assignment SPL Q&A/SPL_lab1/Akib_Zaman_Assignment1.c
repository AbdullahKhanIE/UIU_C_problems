#include <stdio.h>
#include <math.h>

// //1
// int main()
// {
//     int num, temp, first_digit, last_digit, sum_factor = 0, i = 1;
//     scanf("%d", &num);
//     temp = num;
//     last_digit = temp % 10;
//     while (temp != 0)
//     {
//         first_digit = temp % 10;
//         temp = temp / 10;
//     }
//     // printf("F%d\nLast%d\n", first_digit, last_digit);
//     for (i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             // printf("%d\n", i);
//             sum_factor += i;
//         }
//     }
//     // printf("%d\n",count);
//     if ((first_digit + last_digit < 7) && (sum_factor < 2 * num))
//     {
//         printf("Pixie\n");
//     }
//     else
//     {
//         printf("Not Pixie");
//     }
//     return 0;
// }
// // 495
// // Not Pixie

// // 301
// // Pixie

// // 2
// int main()
// {
//     int row, column, input, n = 0;
//     scanf("%d", &input);
//     for (row = 1; row <= input; row++)
//     {
//         // spaces
//         for (column = 1; column <= input - row; column++)
//         {
//             printf(" ");
//         }
//         for (column = 1; column <= row; column++)
//         {
//             printf("%d", ++n);
//         }
//         for (column = 1; column <= row - 1; column++)
//         {
//             printf("%d", --n);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // 5
// //     1
// //    232
// //   34543
// //  4567654
// // 567898765

// // 3
// Not asked in the question BTW
// // int main()
// // {
// //     int num, bin = 0, binary = 0, one = 0;
// //     scanf("%d", &num);
// //     while (num != 0)
// //     {
// //         if (num % 2 == 1)
// //         {
// //             ++one;
// //         }
// //         binary = binary * 10 + num % 2;
// //         num /= 2;
// //     }
// //     printf("%d | %d\n", binary, one);
// //     return 0;
// // }

// int main()
// {
//     int num = 0, bin, one = 0, power = 0;
//     ;
//     scanf("%d", &bin);
//     while (bin != 0)
//     {
//         if (bin % 10 == 1)
//         {
//             ++one;
//         }
//         num = num + bin % 10 * pow(2, power);
//         power++;
//         bin /= 10;
//     }
//     printf("%d | %d\n", num, one);
//     return 0;
// }
// // 10011001
// // 153 | 4

// 4
// int main()
// {
//     int start, end;
//     scanf("%d%d", &start, &end);
//     for (int i = start; i <= end; i++)
//     {
//         int first_digit, last_digit, reversed = 0, digit_sum = 0;
//         last_digit = i % 10;
//         int temp = i;
//         while (temp != 0)
//         {
//             first_digit = temp % 10;
//             digit_sum += (temp % 10);
//             reversed = reversed * 10 + (temp % 10);
//             temp /= 10;
//         }
//         if (digit_sum * digit_sum % 8 == 0)
//         {
//             digit_sum = 1;
//         }
//         if (first_digit == last_digit && i != reversed && digit_sum == 1)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }
// // 1000 1241
// // 1021 1061 1151 1191 1201 1241

// // 1345 1641
// // 1371 1421 1461 1511 1591 1601 1641

// //5
// int main()
// {
//     int input, row, column, n=0;
//     scanf("%d", &input);
//     for (row = 1; row <= input; row++)
//     {
//         for(column=1; column<= row; column++)
//         {
//             printf("%d",n);
//         }

//         printf("\n");

//     }

//     return 0;
// }

// 6
// int main()
// {
//     int input, factorial = 1;
//     scanf("%d", &input);
//     printf("%d! = ", input);
//     for (int i = input; i >= 1; i--)
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
// // 5
// // 5! = 5 X 4 X 3 X 2 X 1 = 120

// // 3
// // 3! = 3 X 2 X 1 = 6

// // 7
// int main()
// {
//     int num1, num2, min, max, coprime = 1;
//     scanf("%d%d", &num1, &num2);
//     if (num1 == num2 && num1 > 1)
//     {
//         puts("YES");
//         return 0;
//     }
//     else if(num1 < num2)
//     {
//         max = num2;
//         min = num1;
//     }
//     else
//     {
//         max = num1;
//         min = num2;
//     }
//     for (int i = 2; i <= min; i++)
//     {
//         if (max % i == 0 && min % i == 0)
//         {
//             coprime = 0;
//             break;
//         }
//     }
//     if (coprime == 1)
//     {
//         puts("YES");
//     }
//     else
//     {
//         puts("NO");
//     }
//     return 0;
// }
// // 14 31
// // YES

// // 31 14
// // YES

// // 35 91
// // NO

// // 2 1
// // YES

//