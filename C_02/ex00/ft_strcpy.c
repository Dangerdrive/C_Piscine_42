
char	*ft_strcpy(char *dest, char *src)
{
	char *copy;
	copy = dest;
	while (*src != '\0')
	{
		*copy = *src;
		src++;
		copy++;
	}
	*copy = '\0';
	return dest;
}