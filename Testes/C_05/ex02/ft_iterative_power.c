int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	if (power < 0)// Power lower than 0 returns 0
	{
		return (0);
	}
	else if (nb == 0 && power == 0)// 0 power 0 returns( 1)
	{
		return (1);
	}
	else
	{
		i = 1;
		while (i <= power)
		{
			result *= nb;// Multiply result by nb for each power
			i++;
		}
		return (result);
	}
}
