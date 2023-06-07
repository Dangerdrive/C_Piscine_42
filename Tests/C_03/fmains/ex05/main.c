#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

size_t strlcat(char *dst, const char *src, size_t size) {
    size_t dst_len = strlen(dst);
    size_t src_len = strlen(src);

    if (dst_len + 1 >= size) return src_len + size;
    
    size_t copied = dst_len;
    while (*src && copied < size - 1) {
        dst[copied++] = *src++;
    }
    dst[copied] = '\0';

    return dst_len + src_len;
}

int	main(void)
{
	char	dest[20] = "Hello, ";
	char	src[] = "World! I'm fine";
	int		size;
	int	result;
	char	dest2[20] = "Hello, ";
	char	src2[] = "World! I'm fine";
	int		size2;
	int	result2;

	size = 10;
	size2 = 10;
	result = ft_strlcat(dest, src, size);
	printf("The concatenated string is: %s\n", dest);
	printf("The length of the resulting string is: %d\n", result);

	result2 = strlcat(dest2, src2, size2);
	printf("The concatenated string is: %s\n", dest);
	printf("The length of the resulting string is: %d\n", result2);
	return (0);
}