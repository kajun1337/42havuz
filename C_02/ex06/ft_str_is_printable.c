#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        // 97
        if (str[i] < 32 || str[i] > 127)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    char string[] = "ADASDKAS\255";
    char *str = string;
    printf("%d", ft_str_is_printable(str));
}
