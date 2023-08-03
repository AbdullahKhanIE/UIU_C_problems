main()
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

// //3
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

// //4
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

// // 5
// int main()
// {
//     int n, row, column, state = 0, num = 1;
//     scanf("%d", &n);
//     if (n % 2 != 0)
//     {
//         //first part
//         for (row = 1; row <= n / 2 + 1; row++)
//         {
//             for (column = 1; column <= row; column++)
//             {
//                 if (state == 0)
//                 {
//                     printf("%d", num);
//                     ++num;
//                     if (num > n)
//                     {
//                         num = num - 2;
//                         state = 1;
//                     }
//                 }
//                 else
//                 {
//                     printf("%d", num);
//                     --num;
//                     if (num < 1)
//                     {
//                         num = num + 2;
//                         state = 0;
//                     }
//                 }
//             }
//             for (column = 1; column <= n / 2 + 1 - row; column++)
//             {
//                 printf("$");
//             }
//             printf("\n");
//         }
//         //second part
//         for (row = n / 2; row >= 1; row--)
//         {
//             for (column = 1; column <= row; column++)
//             {
//                 if (state == 0)
//                 {
//                     printf("%d", num);
//                     ++num;
//                     if (num > n)
//                     {
//                         num = num - 2;
//                         state = 1;
//                     }
//                 }
//                 else
//                 {
//                     printf("%d", num);
//                     --num;
//                     if (num < 1)
//                     {
//                         num = num + 2;
//                         state = 0;
//                     }
//                 }
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }
// // 9

// // 1$$$$
// // 23$$$
// // 456$$
// // 7898$
// // 76543
// // 2123
// // 456
// // 78
// // 9

// //6
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
//     int num1, num2, min, max, co_prime = 1;
//     scanf("%d%d", &num1, &num2);
//     if (num1 == num2 && num1 > 1)
//     {
//         puts("YES");
//         return 0;
//     }
//     else if (num1 < num2)
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
//             co_prime = 0;
//             break;
//         }
//     }
//     if (co_prime == 1)
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

// // 8
// int main()
// {
//     int n, count = 0;
//     float sum = 0;
//     scanf("%d", &n);
//     float array[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%f", &array[i]);
//         sum += array[i];
//     }
//     float avg = sum / n;
//     for (int i = 0; i < n; i++)
//     {
//         if (array[i] > avg)
//         {
//             count++;
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }
// // 5
// // 1 2 3 4 5
// // 2

// // 9
// int main()
// {
//     int input, even = 0, odd = 0;
//     // scanf("%d", &input);
//     input = 6;
//     if (input % 2 == 0)
//     {
//         int array[input];
//         int array_even[input / 2];
//         int array_odd[input / 2];
//         for (int i = 0; i < input; i++)
//         {
//             scanf("%d", &array[i]);
//             if (array[i] % 2 == 0)
//             {
//                 array_even[even] = array[i];
//                 even++;
//             }
//             else
//             {
//                 array_odd[odd] = array[i];
//                 odd++;
//             }
//         }
//         even = 0, odd = 0;
//         for (int i = 0; i < input; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 printf("%d ", array_even[even]);
//                 even++;
//             }
//             else
//             {
//                 printf("%d ", array_odd[odd]);
//                 odd++;
//             }
//         }
//     }
//     return 0;
// }
// // 6
// // 6 8 4 3 5 7
// // 6 3 8 5 4 7

// // 10
// int main()
// {
//     int input, temp;
//     //scanf("%d", &input); 
//     input = 4;
//     int array[input];
//     for (int i = 0; i < input; i++)
//     {
//         scanf("%d", &array[i]);
//         if (array[i] >= 0 && array[i] < input)
//         {
//         }
//         else
//         {
//             puts("Invalid Input");
//             return 0;
//         }
//     }
//     for (int i = 0; i < input; i++)
//     {
//         for (int j = i + 1; j < input; j++)
//         {
//             if (array[i] >= array[j])
//             {
//                 temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < input; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     return 0;
// }
// // // 4
// // // 3 0 2 1

// // // 0 1 2 3
