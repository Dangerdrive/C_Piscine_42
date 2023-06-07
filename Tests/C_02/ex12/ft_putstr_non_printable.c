/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:31:42 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/19 18:32:23 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_memory(char *str)
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

int	main(void)
{
	ft_print_memory("Coucou\ntu vas\t bien ?");
}
