/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:46:10 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/21 15:50:12 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (*str++)
		len++;
	return len;
}

int	is_valid_base(char *base)
{
	int i, j;
	int base_len = ft_strlen(base);

	if (base_len < 2)
		return 0;
	for (i = 0; i < base_len; i++)
	{
		if (base[i] == '+' || base[i] == '-')
			return 0;
		for (j = i + 1; j < base_len; j++)
		{
			if (base[i] == base[j])
				return 0;
		}
	}
	return 1;
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_len = ft_strlen(base);
    if (!is_valid_base(base))
        return;
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= base_len)
    {
        ft_putnbr_base(nbr / base_len, base);
    }
    ft_putchar(base[nbr % base_len]);
}


The is_valid_base function checks if the given base argument is valid or not. It checks whether the length of the base is at least 2, whether it contains any duplicates, and whether it contains any plus or minus signs. If any of these conditions are not met, it returns 0 indicating that the argument is invalid.

The ft_putnbr_base function first checks whether the base argument is valid or not using the is_valid_base function. If it is invalid, it returns without doing anything. Otherwise, it first handles the sign of the number by printing a minus sign and making the number positive if it is negative.

Then, it recursively divides the number by the base to print each digit of the number in the correct order. Finally, it prints the last digit of the number using the base system symbols.
