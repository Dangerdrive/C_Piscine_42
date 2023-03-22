/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:47:24 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/19 21:48:02 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;
	int	i;

	if (nb < 0)
		return (0);
	fat = 1;
	i = 1;
	while (i <= nb)
	{
		fat *= i;
		i++;
	}
	return (fat);
}
