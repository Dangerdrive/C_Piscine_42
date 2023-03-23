#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main()
{
    int nb = 2;
    int power = 5;
    int result = ft_iterative_power(nb, power);
    printf("%d raised to the power of %d is %d\n", nb, power, result);

    nb = 0;
    power = 0;
    result = ft_iterative_power(nb, power);
    printf("%d raised to the power of %d is %d\n", nb, power, result);

    nb = -3;
    power = 4;
    result = ft_iterative_power(nb, power);
    printf("%d raised to the power of %d is %d\n", nb, power, result);

    nb = 4;
    power = -2;
    result = ft_iterative_power(nb, power);
    printf("%d raised to the power of %d is %d\n", nb, power, result);

    return 0;
}