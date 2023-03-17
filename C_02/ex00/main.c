#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "teste\n";
	printf("src: %s\n", src);
	char dest[6];

	ft_strcpy(dest, src);
	printf("dest: %s\n", dest);
}