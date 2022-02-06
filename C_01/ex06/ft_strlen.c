#include <stdio.h>

int ft_strlen(char *str)
{
    int length = 0;
    while (str[length]!='\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char string[8] = "Merhabaa";
    char *str = string;
    printf("%d",ft_strlen(str));
}
