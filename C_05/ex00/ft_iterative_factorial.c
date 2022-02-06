int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	if (result < 2147483647)
		return (result);
	return (0);
}
