#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char			s1[]= "tear";
	char			s2[]= "telefone";
	unsigned int	number;

	number = 3;
	printf("%d\n", ft_strncmp(s1, s2, number));
	printf("%d\n", strncmp(s1, s2, number));
	return (0);
}
