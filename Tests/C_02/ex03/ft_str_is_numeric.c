/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:47:28 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/18 14:47:34 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

// Create a function that returns 1 if the string given as a parameter contains only
// alphabetical characters, and 0 if it contains any other character.
// • Here’s how it should be prototyped :
// int ft_str_is_numeric(char *str);
// • It should return 1 if str is empty

#include <stdio.h>

int	main()
{
	printf("%d",ft_str_is_numeric("5"));
}
