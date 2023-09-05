#include <stdio.h>
#define N 100

// 1
void printfunc();
int main()
{
    printfunc();
    return 0;
}
void printfunc()
{
    printf("This is a function\n");
}
// This is a function

// 2
void print_return(char x);
int main()
{
    char x;
    scanf(" %c", &x);
    print_return(x);
    return 0;
}
void print_return(char x)
{
    printf("Value received from main: %c\n", x);
}
// 3
// Value received from main: 3

// 3
void even_odd(int n);
int main()
{
    int a;
    scanf("%d", &a);
    even_odd(a);
    return 0;
}
void even_odd(int n)
{
    if (n % 2 == 0)
    {
        puts("Even");
        return;
    }
    else
    {
        puts("Odd");
        return;
    }
}
// 67
// Odd

// 4
void which_state(int n);
int main()
{
    int input;
    scanf("%d", &input);
    which_state(input);
    return 0;
}
void which_state(int n)
{
    if (n == 0)
    {
        puts("Zero");
    }
    else if (n < 0)
    {
        puts("Negative");
    }
    else
    {
        puts("Positive");
    }
}
// 0
// Zero
// 3
// Positive
// -3
// Negative

// 5
void compare(int a, int b);
int main()
{
    int input1, input2;
    scanf("%d%d", &input1, &input2);
    compare(input1, input2);
    return 0;
}
void compare(int a, int b)
{
    if (a == b)
    {
        printf("%d is equal to %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is smaller than %d\n", a, b);
    }
    else
    {
        printf("%d is greater than %d\n", a, b);
    }
}
// 5 4
// 5 is greater than 4

// 6
int make_sum(int n);
int main()
{
    int input;
    scanf("%d", &input);
    int x = make_sum(input);
    printf("Sum in Main %d\n", x);
    return 0;
}
int make_sum(int n)
{
    int sum = 0, in;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &in);
        sum += in;
    }
    printf("Sum in Function %d\n", sum);
    return sum;
}
// 3
// 80 33 27
// Sum in Function 140
// Sum in Main 140

// 8
void rev(int array[], int n);
int main()
{
    int array[N];
    int input;
    scanf("%d", &input);
    rev(array, input);
    return 0;
}
void rev(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    puts("");
}
// // 5
// // 10 9 8 7 5
// // 5 7 8 9 10

// 9
int fact(int input);
int main()
{
    int input;
    scanf("%d", &input);
    printf("%d\n", fact(input));
    return 0;
}
int fact(int input)
{
    int fact = 1;
    for (int i = input; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}
// 5
// 120

// 10
int power(int x, int y);
int main()
{
    int input1, input2;
    scanf("%d %d", &input1, &input2);
    if (input1 >= 0 && input2 >= 0)
    {
        int pow = power(input1, input2);
        printf("%d to the power %d is %d\n", input1, input2, pow);
    }
    else
    {
        puts("Invalid Input");
    }
    return 0;
}
int power(int x, int y)
{
    int exponent = 1;
    for (int i = 1; i <= y; i++)
    {
        exponent *= x;
    }
    return exponent;
}
// 3 4
// 3 to the power 4 is 81

// 11
int str_len(char str[], int n);
int main()
{
    char str[N];
    int x = str_len(str, N);
    printf("%d\n", x);
    return 0;
}
int str_len(char str[], int n)
{
    fgets(str, n, stdin);
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len - 1;
}
// I love my country
// 17

// 12
void swap2(int a, int b);
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    swap2(a, b);
    printf("Value in main: %d %d\n", a, b);
    return 0;
}
void swap2(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Value in func: %d %d\n", a, b);
}
// 5 10
// Value in func: 10 5
// Value in main: 5 10

// 13
int main()
{
  //Dont know the solution yet.
    return 0;
}

// 14
void print_even(int array[], int n);
int main()
{
    int array[N];
    int n = 0;
    scanf(" %d", &n);
    print_even(array, n);
    return 0;
}
void print_even(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0 && array[i] != 0)
        {
            printf("%d ", array[i]);
        }
        else
        {
            continue;
        }
    }
    puts("");
}
// 5
// 24 77 117 -512 1024
// 24 -512 1024

// 15
int Min(int array[], int n);
int main()
{
    int str[N];
    int input;
    scanf("%d", &input);
    printf("Minimum Value: %d\n", Min(str, input));
    return 0;
}
int Min(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}
// 5
// 157 -28 -37 26 10
// Minimum Value: -37

// 16
void multiply2(int array[], int n);
int main()
{
    int str[N];
    int input;
    scanf("%d", &input);
    multiply2(str, input);
    return 0;
}
void multiply2(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i] * 2);
    }
    puts("");
}
// // 5
// // 157 -28 -37 26 10
// // 314 -56 -74 52 20

// 17
void sorting(int array[], int n);
int main()
{
    int str[N];
    int input;
    scanf("%d", &input);
    sorting(str, input);
    return 0;
}
void sorting(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    puts("");
}
// 5
// 10 22 -5 117 0
// -5 0 10 22 117

// 18
int isPrime(int n);
int main()
{
    int input;
    scanf("%d", &input);
    if (isPrime(input) == 1)
    {
        puts("Prime");
    }
    else
    {
        puts("Not Prime");
    }
    return 0;
}
int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 3; i < n; i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
// 1
// Not Prime
// 2
// Prime
// 11
// Prime
// 39
// Not Prime
// 101
// Prime

// 19
int isPrime(int n);
void GeneratePrime(int input);
int main()
{
    int input, prime, count = 0;
    scanf("%d", &input);
    printf("Prime less than %d: ", input);
    GeneratePrime(input);
    return 0;
}
int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2)
    {
        return n;
    }
    else if (n % 2 == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 3; i < n; i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return n;
    }
}
void GeneratePrime(int input)
{
    int prime;
    for (int i = 2; i < input; i++)
    {
        prime = isPrime(i);
        if (prime != 0)
        {
            printf("%d ", prime);
        }
    }
}
// 10
// Prime less than 10: 2 3 5 7

// 20
int isPrime(int n);
int GenNthPrime(int input);
int main()
{
    int input, prime, count = 0;
    scanf("%d", &input);
    printf("%d\n", GenNthPrime(input));
    return 0;
}
int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2)
    {
        return n;
    }
    else if (n % 2 == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 3; i < n; i += 2)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return n;
    }
}
int GenNthPrime(int input)
{
    int prime, count = 0;
    for (int i = 2; count <= input; i++)
    {
        prime = isPrime(i);
        if (prime != 0)
        {
            count++;
            if (count == input)
            {
                return i;
            }
        }
    }
}
// 40
// 173

