int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	result;
	int		base_len;

	base_len = ft_strlen(base);
	if (base_len <= 1 || ft_has_duplicates(base) || ft_has_sign_or_space(base))
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_index_of(str[i], base) != -1)
	{
		result = result * base_len + ft_index_of(str[i], base);
		i++;
	}
	return (sign * result);
}

The main difference between the ft_atoi and ft_atoi_base functions is that ft_atoi_base can convert a string to an integer in a specific base, while ft_atoi always converts a string to an integer assuming a base-10 representation.

The ft_atoi function skips leading whitespace characters, and then reads in a sequence of decimal digits, and returns the corresponding integer value. It can also handle leading plus or minus signs, which are used to specify the sign of the number.

On the other hand, the ft_atoi_base function works in a similar way, but it reads in the digits of the number using a specified base. It also performs additional checks to ensure that the base argument is valid and can be used to convert the string to an integer in that base.

If the base argument is invalid, or if the string contains characters that are not in the specified base, the function returns 0 indicating that the argument is invalid. Otherwise, the function returns the integer value of the string, converted to the specified base.







The function takes two arguments, str and base, where str is the string to be converted to an integer, and base is a string containing the allowed characters for the number in str. The function works by checking if the base argument is valid, and then proceeds to convert the string to an integer using the specified base.

The ft_strlen function is used to calculate the length of base. If the length of base is less than or equal to 1, or if base contains duplicate characters or any of the characters '+', '-', or whitespace, the function immediately returns 0 indicating that the argument is invalid.

After checking that the base argument is valid, the function continues to skip any leading whitespace characters using the ft_isspace function. Then, it checks for a leading plus or minus sign and updates the sign variable accordingly.

The function then proceeds to read in the digits of the number by repeatedly multiplying the current result by the base and adding the value of the current digit. The ft_index_of function is used to find the index of the current character in the base string, and if it returns -1, the function stops and returns the result.

Finally, the function multiplies the result by the sign value and returns the integer value.





