#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
// girdigim sayinin basamak sayisini bulma
int ft_nbr_array(int nb)
{
    if (nb < 0)
    {
        nb = nb * (-1);
    }

    int b1 = 1;
    while (!(nb < 10))
    {

        nb /= 10;
        b1++;
    }
    return b1;
}

void ft_print(int arr[], int max)
{
    while ((max - 1) >= 0)
    {
        ft_putchar(arr[max - 1] + 48);
        max--;
    }
}

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
        ft_putchar('-');
        nb = nb * -1;
    }

    int max = ft_nbr_array(nb);
    int arr[max]; //arr[2]
    int i = 0;
    while (i < max)
    {
        arr[i] = nb % 10;
        nb /= 10;
        i++;
    }
    ft_print(arr, max);
}

int main()
{
    ft_putnbr(12450);
}