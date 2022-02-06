#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(*(str+i));
        // ya da
        //write(1,&(str[i]),1);
        
        i++;
    }
}

int main()
{
    char a[8] = "Merhaba"; //char isim[8] = "MErhaba";
    char *str = a;
    ft_putstr(str);
}
