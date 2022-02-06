#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        // 97
        if (str[i] < 48 || str[i] > 57) 
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main()
{
    char string[] = "012345áéíóú àè";
    char *str = string;
    printf("%d", ft_str_is_numeric(str));
}
