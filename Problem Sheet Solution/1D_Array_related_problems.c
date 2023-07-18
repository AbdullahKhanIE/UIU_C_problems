#include <stdio.h>
#define M 500

// 1
int main()
{
    int arr[M];
    int i, input;
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = input - 1; i >= 0; i--)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}

//  5
//  1 2 3 4 5
//  5  4  3  2  1

// 2
int main()
{
    int arr[M];
    int i, input, sum = 0;
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    return 0;
}

//  5
//  1 2 3 4 5
//  Sum: 15

// 3
int main()
{
    int arr[M];
    int i, input, sum = 0;
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}

// 5
// 1 2 3 4 5
// Sum: 6

// 4
int main()
{
    int arr[M];
    int i, input, sum = 0;
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
        if (i % 2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}

// 5
// 1 2 3 4 5
// Sum: 9

// 5
int main()
{
    int arr[M];
    int i, input, sum = 0;
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = input - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    puts("");
    return 0;
}

// 5
// 1 2 3 4 5
// 5 4 3 2 1

// 6
int main()
{
    int arr[M];
    int i, input, sum = 0, max, min, trackmax, trackmin;
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (i = 0; i < input; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            trackmax = i + 1;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            trackmin = i + 1;
        }
    }
    printf("Max: %d, Index: %d\nMin: %d, Index: %d\n", max, trackmax, min, trackmin);
    puts("");
    return 0;
}

// 6
// 2 8 3 9 0 1
// Max: 9, Index: 4
// Min: 0, Index: 5

// 7
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    char array[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &array[i]);
        if (array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U')
        {
            count++;
        }
    }
    printf("Count: %d\n", count);
    return 0;
}

//  29
//  UNITEDINTERNATIONALUNIVERSITY
//  Count: 13

// 8
int main()
{
    int n = 0, sear = 0, count = 0;
    scanf("%d", &n);
    int array[n];
    int search[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &array[i]);
    }
    puts("Search:");
    scanf("%d", &sear);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == sear)
        {
            search[count] = i;
            count++;
        }
    }
    if (count > 0)
    {
        printf("FOUND at index position: ");
        for (int i = 0; i < count; i++)
        {
            printf("%d ", search[i]);
        }
    }
    else
    {
        printf("Not Found");
    }
    printf("\n");
    return 0;
}

// 8
// 7 8 1 3 2 6 4 3
// Search:
// 3
// FOUND at index position: 3 7

// 9
int main()
{
    int n = 0;
    scanf("%d", &n);
    int r = n;
    int arrA[n];
    int arrB[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arrA[i]);
        arrB[r - 1] = arrA[i];
        r--;
    }
    printf("Array A: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrA[i]);
    }
    printf("\n");
    printf("Array B: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrB[i]);
    }
    printf("\n");
    return 0;
}

// 8
// 7 8 1 3 2 6 4 3
// Array A: 7 8 1 3 2 6 4 3
// Array B: 3 4 6 2 3 1 8 7

// 10
int main()
{
    int m, n;
    int arrayA[1000];
    int arrayB[1000];
    int arrayX[1000];
    puts("Array A Size:");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arrayA[i]);
        arrayX[i] = arrayA[i];
    }
    puts("Array B Size:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arrayB[i]);
        arrayA[i] = arrayB[i];
    }
    printf("Array A: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrayA[i]);
    }
    printf("\n");
    printf("Array B: ");
    for (int i = 0; i < m; i++)
    {
        arrayB[i] = arrayX[i];
        printf("%d ", arrayB[i]);
    }
    printf("\n");
    return 0;
}

// Array A Size:
// 8
// 7 8 1 3 2 6 4 3
// Array B Size:
// 3
// 3 2 1
// Array A: 3 2 1
// Array B: 7 8 1 3 2 6 4 3

// 11
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = 0;
        scanf("%d", &array[i]);
        if (array[i] % 3 == 0)
        {
            array[i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

// 8
// 7 8 1 3 2 6 4 3
// 7 8 1 -1 2 -1 4 -1

// //12
