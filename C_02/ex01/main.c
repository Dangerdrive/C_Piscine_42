#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char *dest_test;
	ft_strncpy(dest_test, "testando", 5);
	printf("%s\n", dest_test);
}