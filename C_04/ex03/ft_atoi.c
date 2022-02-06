#include <stdio.h>

int ft_first_index(char *str)
{
    int c;
    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] >= 48 && str[c] <= 57)
        {
            return c;
        }
        c++;
    }
}

int ft_last_index(char *str) // ---+--+1234ab-------567 first c = 11
{
    int c;
    c = ft_first_index(str) + 1;
    while (str[c] >= 48 && str[c] <= 57) // c =13
    {
        c++;
    }
    return c - 1;
}

int ft_is_odd_even(char *str)
{
    int c;
    int first;
    int count;
    c = 0;
    count = 0;
    first = ft_first_index(str);
    while (str[c] != str[first])
    {
        if (str[c] == '-')
        {
            count++;
        }
        c++;
    }
    return count;
}

int ft_atoi(char *str)
{
    int c;
    int result;
    int nb;
    int index;
    c = 0;
    nb = 0;
    index = ft_first_index(str);
    while (index <= ft_last_index(str)) // 8 9 10 11
    {
        nb += str[index] - 48; // 1234
        if (index != ft_last_index(str))
        {
            nb *= 10;
        }
        index++;
    }
    if (ft_is_odd_even(str) % 2 == 1)
    {
        nb *= -1;
    }
    return nb;
}

int main()
{
    char str[] = " -+----+1223354ab-------567";
    printf("%d", ft_atoi(str));
}
