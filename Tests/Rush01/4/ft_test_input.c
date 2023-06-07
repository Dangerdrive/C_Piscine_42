/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:12:52 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/12 22:05:39 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	print_error(void)
{
		write(1, "Invalid clues, use a valid clues\n", 31);
	_exit(1);
}

void	print_error1(void)
{
	write(1, "Usage: ./a.out <clues>\n", 23);
	_exit(1);
}

void	verify_clues(int arg, char *str, int clues[16])
{
	if (arg != 2)
	{
		print_error1();
	}
	
	int clues_len = 0; 
	while (str[clues_len] != '\0')
	{
		clues_len++;
	}
	if (clues_len != 31)
	{
		print_error();
	}
	while (i < 31)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			clues[i/2] = str[i] - '0';
			i += 2;
		}
		else if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			print_error();
		}
	}
	int sum = 0;
	i = 0;
	while (i < 16)
	{
		if (clues[i] < 1 || clues[i] > 4)
		{
			print_error();
		}
		sum += clues[i];
		i++;
	}
	if (sum > 40 || sum <= 16)
	{
		print_error();
	}
	i = 0;
	int	sum_opp;
	while (i < 4)
	{
		sum_opp = clues[i] + clues[i + 4];
		if (sum_opp < 3 || sum_opp > 5)
		{
			print_error();
		}
	i++;
	}
	i = 8;
	while (i < 12)
	{
	sum_opp = clues[i] + clues[i + 4];
		if (sum_opp < 3 || sum_opp > 5)
		{
			print_error();
		}
	i++;
	}
	i = 0;
	while (i < 4)
	{
		if (clues[i] + clues[i + 4] > clues[i + 1] + clues[i + 5])
		{
			print_error();
		}
	i++;
	}
	i = 8;
	while (i < 12)
	{
		if (clues[i] + clues[i + 4] > clues[i + 1] + clues[i + 5])
		{
			print_error();
		}
	}
	i++;
}

void receber_valores(int clues[16])
{
	int	colup[4];
	int	coldown[4];
	int	rowleft[4];
	int rowright[4];
	int i = 0;

	while (i < 4)
	{
	colup[i] = clues[i];
	i++;
	}
	i = 4;
	while (i < 8)
	{
	coldown[i - 4] = clues[i];
	i++;
	}
	i = 8;
	while (i < 12)
	{
	rowleft[i - 8] = clues[i];
	i++;
	}
	i = 12;
	while (i < 16)
	{
	rowright[i - 12] = clues[i];
	i++;
	}
}
