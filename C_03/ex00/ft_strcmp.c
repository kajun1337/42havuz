#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int count1;
    int count2;
    count1 = 0;
    count2 = 0;
    while (s1[count1] != '\0')
    {
        count1++;
    }
    while (s2[count2] != '\0')
    {
        count2++;
    }
    if (count1 > count2)
    {
        return 1;
    }
    else if (count1 < count2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str1[] = "Helldas";
    char str2[] = "Hello";
    char *s1 = str1;
    char *s2 = str2;
    printf("%d", ft_strcmp(s1, s2));
}