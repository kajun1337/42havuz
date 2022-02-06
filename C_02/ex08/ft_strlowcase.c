#include <stdio.h>

#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] + 32;
        i++;
    }
    return str;
}

int main()
{
    char string[] = "BASDASDSGAVASAS";
    char *str = string;
    printf("%s", ft_strlowcase(str));
}
