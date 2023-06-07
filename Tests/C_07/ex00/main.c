#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main()
{
	char	*str = "Hello, world!";
	char	*dup_str = strdup(str);

	printf("Original string: %s\n", str);
	printf("str dup Duplicate string: %s\n", dup_str);
	printf("my function Duplicate string: %s\n", (ft_strdup(str)));
	free(dup_str);
	return (0);
}
