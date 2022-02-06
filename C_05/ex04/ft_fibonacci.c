#include<stdio.h>
/*
 * f(5) => f(4) + f(3) 
 *
 * f(4) + f(3) + f(2) => f(3) + f(2) + f(2) + f(1) + f(1) + f(0) 
 *
 * f(3) + f(2) + f(2) + f(1)  => f(2) + f(1) + f(1) + f(0) + f(1) + f(0) + f(0) + f(-1)
 *
 *  0 + 0 + 0 + 1 + 1 + f(1) + f(0) = 2 + 0 + 1 = 3  0 1 1 2 3   
 * */

int	ft_fibonacci(int index)
{
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
    printf("%d",ft_fibonacci(10));
}