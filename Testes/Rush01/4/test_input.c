/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:12:52 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/17 14:11:18 by fde-alen         ###   ########.fr       */
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

void	verify_clues(int arg, char *str)
{
	int	sum;
	int	clues_len;
	int	sum_opp;
	int	clues[16];
	int	i;

	if (arg != 2)
	{
		print_error1();
	}
	clues_len = 0;
	while (str[clues_len] != '\0')
	{
		clues_len++;
	}
	if (clues_len != 31)
	{
		print_error();
	}
	i = 0;
	while (i < 31)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			clues[i/ 2] = str[i] - '0';
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
	sum = 0;
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
	i++;
}

void receber_valores(int clues[16]) clone










clone











{
  int colup[4];
  int coldown[4];
  int rowleft[4];
  int rowright[4];
  
  int i = 0;
  while (i < 4) {
    colup[i] = clues[i];
    i++;
  }
  i = 4;
  while (i < 8) {
    coldown[i - 4] = clues[i];
    i++;
  }
  i = 8;
  while (i < 12) {
    rowleft[i - 8] = clues[i];
    i++;
  }
  i = 12;
  while (i < 16) {
    rowright[i - 12] = clues[i];
    i++;
  }
}
/*void	ft_print_matrix(int *matrix[])
{
	int i = -1;
	while (i++ < 3)
	{
		int j = -1;
		while (j++ < 3)
		{
			ft_putchar(&(matrix[i][j]) + '0');
			if (j < 3)
			{
				ft_putchar(' ');
			}
		}
		ft_putchar('\n');
		}
} */

int main(int argc, char** argv)
{
	verify_clues(argc, argv[1]);
	write(1, "Valid clues!\n", 12);
/*   
 	int matrix[4][4] =
	{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};

	int i = -1;
	while (i++ < 3)
	{
		int j = -1;
		while (j++ < 3)
		{
			ft_putchar(result[i][j] + '0');
			if (j < 3)
			{
				ft_putchar(' ');
			}
		}
		ft_putchar('\n');
		}
		*/
/*	
void	ft_print_matrix(int *matrix[]);
*/   
	return 0;
}
