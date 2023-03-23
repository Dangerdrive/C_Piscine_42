int ft_iterative_power(int nb, int power)
{
    int result = 1;
    if (power < 0) // Power lower than 0 returns 0
    {
        return 0;
    }
    else if (nb == 0 && power == 0) // 0 power 0 returns 1
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= power; i++)
        {
            result *= nb; // Multiply result by nb for each power
        }
        return result;
    }
}