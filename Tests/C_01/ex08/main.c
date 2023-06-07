#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	test_arr[] = {5, 2, 4, 1, 3};
	int	size;
	int	i;

	size = sizeof(test_arr) / sizeof(int);
	printf("array original: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", test_arr[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(test_arr, size);
	printf("array em ordem: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", test_arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
