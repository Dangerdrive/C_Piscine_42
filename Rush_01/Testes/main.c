/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:12:52 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/12 22:39:33 by fde-alen         ###   ########.fr       */
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

// Function to verify the number of arguments passed to the program
void verify_arguments(int arg)
{
	if (arg != 2)
	{
		print_error1();
	}
}

// Function to verify the length and format of the input string
void verify_input(char *str)
{
	int	clues_len;
	int	i;
	int	clues[16];

	clues_len = 0;
	i = 0;
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
			clues[i / 2] = str[i] - '0';
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
}

// Function to verify the sum of clues
void	verify_sum(int *clues) {
	int	sum = 0;
	int	i = 0;

	while (i < 16) {
		if (clues[i] < 1 || clues[i] > 4) {
			print_error();
		}
		sum += clues[i];
		i++;
	}
	if (sum > 40 || sum <= 16)
	{
		print_error();
	}
}

// Function to verify the opposite clues
void	verify_opposite_clues(int *clues, int start, int end)
{
	int	sum_opp;
	int	i;

	sum_opp = 0;
	i = start;
	while (i < end)
	{	
		sum_opp = clues[i] + clues[i + 4];
		if (sum_opp < 3 || sum_opp > 5)
		{
			print_error();
		}
		i++;
	}
}

// Main function to verify clues
void	verify_clues(int arg, char *str)
{
	verify_arguments(arg);
	verify_input(str);
	verify_sum(clues);
	verify_opposite_clues(clues, 0, 4);
	verify_opposite_clues(clues, 8, 12);
	verify_opposite_clues(clues, 4, 8);
	verify_opposite_clues(clues, 12, 16);
}
int	main(int argc, char **argv)
{
	int	matrix[4][4];
	int	i;
	int	j;

	verify_clues(argc, argv[1]);
	write(1, "Valid clues!\n", 12);
}
