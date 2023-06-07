
int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	return (sign * result);
}
/* The function ft_atoi takes a string str as input and converts it into an integer.

The function starts by initializing three integer variables, i, sign, and result, to 0.
 i is used to keep track of the current index in the string,
  sign is used to keep track of whether the number is positive or negative,
   and result is used to store the final integer value.

Next, the function uses a while loop to skip over any leading whitespace characters
 by checking the ASCII value of the character. 
 ASCII code 32 corresponds to a space character, 
 and codes 9 through 13 correspond to various whitespace characters (tab, newline, etc.).

After skipping over any whitespace,
 the function uses another while loop to check for a leading plus or minus sign.
  If a minus sign is found, the sign variable is set to -1, 
  which will be used later to make the final value negative. 
  The function then moves to the next character in the string.

Finally, the function uses a final while loop to read in the digits of the number.
 Each digit is converted from a character to its numerical value by subtracting the ASCII code for '0'.
  The result is then multiplied by 10 and added to the value of the next digit. 
  This continues until a non-digit character is encountered.

The function then multiplies the final result by the sign value and returns the integer value.
*/