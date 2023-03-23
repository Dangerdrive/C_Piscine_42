#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char src[] = "ultimos dias de piscina";
	char to_find[] = "dia";
	printf("resultado de strstr: %s\n", strstr(src, to_find));
	printf("resultado de ft_strstr: %s\n", ft_strstr(src, to_find));
	return (0);
}
