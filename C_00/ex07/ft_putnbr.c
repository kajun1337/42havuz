#include <unistd.h>
#include <stdio.h>
#include <conio.h>
void                 ft_putchar(char c)
{
    write(1, &c, 1);
}
/*
 * f(8452) =>kontrol; f(845); 2 yi yaz
 * f(845) => kontrol; f(84); 5 i yaz
 * f(84) => kontrol; f(8); 4 u yaz
 * f(8) => kontrol; 8 i yaz

*/

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
    if (nb < 10)
    {
        ft_putchar(nb + 48);
        return ;
    }
    else
         ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + 48);
}

int main()
{
    ft_putnbr(-5);
    getch();
}
