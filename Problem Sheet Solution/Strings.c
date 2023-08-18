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

// 10
int main()
{
    char str[N];
    fgets(str, N, stdin);
    int len = strlen(str) - 1;
    for (int i = 0, j = len; i < len; i++, j--)
    {
        if (str[i] != str[j-1])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
// madam
// Yes

// 11
int main()
{
    char str[N];
    int sum = 0;
    fgets(str, N, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '1' && str[i] <= '9')
        {
            sum += str[i] - '0';
        }
    }
    printf("%d\n", sum);
    return 0;
}
// ""abc 123 7&*&*""
// 13

// 12
int main()
{
    char str1[N], str2[N], maxalpha[26];
    fgets(str1, N, stdin);
    fgets(str2, N, stdin);
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';
    int i, j, count = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 < len2)
    {
        return 0;
    }
    for (i = 0; i <= len1 - len2; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (str1[i + j] != str2[j])
            {
                break;
            }
            if ((j == len2 - 1 && str1[i + j + 1] == ' ' && str1[i - 1] == ' ') || (j == len2 - 1 && str1[i + j + 1] == ' ' && i == 0) || (j == len2 - 1 && str1[i - 1] == ' ' && i + j + 1 == len1))
            {
                ++count;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
// I liked the story about the sad giant
// the
// 2

// 13
int main()
{
    char str[N];
    fgets(str, N, stdin);
    int x = strlen(str);
    str[x - 1] = '\0';
    int i, j, k;
    for (i = 0; i < x; i++)
    {
        for (j = i + 1; j < x; j++)
        {
            if (str[i] == str[j])
            {
                for (k = j; k < x; k++)
                {
                    str[k] = str[k + 1];
                }
            }
        }
    }
    printf("%s\n", str);
    return 0;
}
// My name is Andy
// My nameisAd

// 14
int main()
{
    char str[N], maxalpha[26];
    fgets(str, N, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        maxalpha[i] = 0;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            int x = str[i] - 65;
            maxalpha[x] += 1;
        }
    }
    int max = maxalpha[0], count = 0;
    for (int i = 1; i < 26; i++)
    {
        if (max < maxalpha[i])
        {
            max = maxalpha[i];
            count = i;
        }
    }
    printf("%c\n", count+65);
    return 0;
}
// Welcome to CSE
// E

// 15