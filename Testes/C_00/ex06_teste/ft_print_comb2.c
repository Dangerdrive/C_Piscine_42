/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:32:22 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/09 11:56:48 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_2_num(int i, int j, int k, int l);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_2dig(int i, int j)
{
	ft_putchar(i + '0');
	ft_putchar(j + '0');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = -1;
	while (i++, i <= 9)
	{
		j = -1;
		while (j++, j <= 9)
		{
			k = -1;
			while (k++, k <= 9)
			{
				l = j + 1;
				while (l <= 9)
				{
					ft_print_2_num(i, j, k, l);
					l++;
				}
			}
		}
	}
}

void	ft_print_2_num(int i, int j, int k, int l)
{
	if (i != k || j != l)
	{
		ft_print_2dig(i, j);
		ft_putchar(' ');
		ft_print_2dig(k, l);
		if (!(i == 9 && j == 8 && k == 9 && l == 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
