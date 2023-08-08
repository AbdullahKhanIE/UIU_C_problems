#include <stdio.h>
#include <string.h>
#define N 100

// 1
int main()
{
    int count = 0;
    char str[N];
    fgets(str, N, stdin);
    printf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count - 1);
    return 0;
}
// My name is andy
// My name is andy
// 15

//2
int main()
{
    char str1[N], str2[N], str[N];
    fgets(str1, N, stdin);
    fgets(str2, N, stdin);
    int x = strlen(str1);
    for (int i = 0; str2[i] != '\0'; i++)
    {
        str1[i - 1 + x] = str2[i];
    }
    puts(str1);
    return 0;
}
// My Name Is
// Andy
// My Name Is Andy

// 3
int main()
{
    int vowel = 0;
    char str[N];
    fgets(str, N, stdin);
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'U' || str[i] == 'O')
        {
            vowel++;
        }
    }
    printf("%d\n", vowel);

    return 0;
}
// Are you READY yet?
// 7

// 4
int main()
{
    int space = 0;
    char str[N];
    fgets(str, N, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            space++;
        }
    }
    printf("%d\n", space + 1);

    return 0;
}
// Are you READY yet?
// 4

// 5
int main()
{
    int length = 0;
    char str[N];
    char arr[N];
    fgets(str, N, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    length = length - 2;
    // for (int i = length; i >= 0; i--)
    // {
    //     printf("%c", str[i]);
    // }
    for (int i = 0; i <= length; i++)
    {
        arr[length - i] = str[i];
    }
    arr[length + 1] = '\0';
    printf("%s", arr);
    return 0;
}
// "My name is Andy"
// "ydnA si eman yM"

// 6
int main()
{
    char str[N];
    fgets(str, N, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }
    printf("%s", str);
    return 0;
}
// “& I am 20 years old”
// "& I AM 20 YEARS OLD"

// 7
int main()
{
    char str[N];
    fgets(str, N, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
        else if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }
    printf("%s", str);
    return 0;
}
// “& I am 20 Years old”
// "& i AM 20 yEARS OLD"

// 8
int main()
{
    char temp;
    char str[N];
    fgets(str, N, stdin);
    int lim = strlen(str);
    for (int i = 0; i < lim - 1; i++)
    {
        for (int j = i + 1; j < lim - 1; j++)
        {
            if (str[j] < str[i])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    str[lim - 1] = '\0';
    printf("%s", str);
    return 0;
}
// “Abc 123 7&*&*”
//   ""&&**1237Abc

// 9
int main()
{
    char str[N];
    char search;
    fgets(str, N, stdin);
    scanf(" %c", &search);
    int count = 0;
    if (search >= 97 && search <= 122)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == search || str[i] == search - 32)
            {
                count++;
            }
        }
    }
    else if (search >= 65 && search <= 90)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == search || str[i] == search + 32)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
// WELCOME to CSE, everyone
// e
// 6