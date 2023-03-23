#include <stdio.h>
#include <bsd/string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[] = "testando ";
	char src[] = "concatenar...";
	unsigned int nb;

	char dest2[] = "teste ";
	char src2[] = "dois...";
	nb = 4;
	printf("resultado: %s\n", ft_strncat(dest, src, nb));
	printf("resultado: %s\n", strncat(dest2, src2, nb));

	return (0);
}