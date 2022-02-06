int	ft_iterative_power(int nb, int power)
{
	int	multiple;

	multiple = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 1)
	{
		nb *= multiple;
		power--;
	}
	return (nb);
}
