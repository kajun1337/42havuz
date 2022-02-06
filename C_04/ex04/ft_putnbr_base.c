#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *base)
{
    int c;
    c = 0;
    while (base[c] != '\0')
    {
        c++;
    }
    return c;
}

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
void ft_putnbr_base(int nbr, char *base)
{
    int arr[ft_nbr_array(nbr)];
    int i = 0;
    while (i < ft_nbr_array(nbr)) // {2,4}
    {
        arr[i] = nbr % 10;
        nbr /= 10;
        i++;
    }
    if (ft_strlen(base) == 2)
    {
        while ()
        {
            /* code */
        }
        
    }
}

int main()
{
    char base[] = "01";
}