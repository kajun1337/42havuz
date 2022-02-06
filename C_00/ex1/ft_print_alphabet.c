#include <stdio.h>
#include<unistd.h>
void ft_putchar()
{
    char c;
    c = 'a';

    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
}

int main(void)
{

    printf(" ilk bura yazacak");
    ft_putchar();
    return 0;
}
