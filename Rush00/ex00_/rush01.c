/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izanoni <izanoni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:04:08 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/05 22:22:46 by izanoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_l;
	int	y_c;

	if (x < 1 || y < 1)
		return ;
	y_c = 1;
	while (y_c <= y)
	{
		x_l = 1;
		while (x_l <= x)
		{
			if ((x_l == 1 && y_c == 1) || (x_l == y && y_c == x && y_c != 1
					&& x_l != 1))
				ft_putchar('/');
			else if ((x_l == 1 && y_c == y) || (x_l == x && y_c == 1))
				ft_putchar('\\');
			else if (y_c == 1 || y_c == x || x_l == y || x_l == 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			x_l++;
		}
		ft_putchar('\n');
		y_c++;
	}
}
