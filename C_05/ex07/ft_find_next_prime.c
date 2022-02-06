/*
	f(8) => check; f(9)
	f(9) => check; f(10);
	f(10) => check; f(11);
	f(11) => check; dondur

*/

#include<stdio.h>
int	ft_is_prime(int nb)
{
	int	kontrol;
	int	i;

	kontrol = 0;
	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			kontrol += i;
		i++;
	}
	if (kontrol == nb)
		return (1);
	else
		return (0);
}

int ft_find_next_prime(int nb)
{  
    if (ft_is_prime(nb) == 1)
        return (nb);
	else
		return ft_find_next_prime(nb + 1);
}		
int main()
{
    printf("%d",ft_find_next_prime(14));
}