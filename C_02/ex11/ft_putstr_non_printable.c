/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:31:42 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/22 20:44:55 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] == 127)
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[str[i] / 16];
			hex[2] = "0123456789abcdef"[str[i] % 16];
			write(1, hex, 3);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
