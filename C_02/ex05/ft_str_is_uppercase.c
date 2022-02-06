#include<stdio.h>

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        // 97
        if (str[i] < 65 || str[i] > 90)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    char string[] = "ADASDKAS";
    char *str = string;
    printf("%d", ft_str_is_uppercase(str));
}
