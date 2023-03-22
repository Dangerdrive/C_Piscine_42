/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:31:42 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/19 18:56:27 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];

	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[*str / 16];
			hex[2] = "0123456789abcdef"[*str % 16];
			write(1, hex, 3);
		}
		else
			write(1, str, 1);
		str++;
	}
}
