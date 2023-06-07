#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size = sizeof(arr) / sizeof(int);
	int	i = 0;

	printf("array original: ");
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(arr, size);
	printf("reverso: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
