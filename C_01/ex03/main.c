#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	tdiv;
	int	tmod;

	ft_div_mod(19, 8, &tdiv, &tmod);
	printf("div = %d\nmod = %d\n", tdiv, tmod);
}
