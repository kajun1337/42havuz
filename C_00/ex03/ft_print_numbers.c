#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char nmb = 48;
    while (nmb<='9')
    {
        ft_putchar(nmb);
        nmb++;
    }
    
}

int main()
{
    ft_print_numbers();
    return 0;
}