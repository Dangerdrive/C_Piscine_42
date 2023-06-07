#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest1[100] = "testando ";
	char src1[] = "concatenar...";

	char dest2[100] = "testando ";
	char src2[] = "concatenar...";

	printf("resultado de ft_strcat: %s\n", ft_strcat(dest1, src1));
	printf("resultado de strcat: %s\n", strcat(dest2, src2));
	return (0);
}