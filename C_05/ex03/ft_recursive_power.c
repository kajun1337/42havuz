#include<stdio.h>


/*
 *	f(4,3) => f(4,2) * 4
 *	f(4,2) => f(4,1) * 4
 *	f(4,1) => f(4,0) * 4
 *	f(4,0) => return 1 
 *      
 *
 * */



int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

int main()
{
    printf("%d",ft_recursive_power(5,-5));
}