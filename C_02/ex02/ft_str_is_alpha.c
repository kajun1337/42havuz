#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
        {
            j++;
        }
        if (str[i] == 32)
        {
            j--;
        }

        i++;
    }
    if (j != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    char string[] = "ABC abc áéíóú àèìòù âêîôû äëïöü";
    char *str = string;
    printf("%d", ft_str_is_alpha(str));
}
