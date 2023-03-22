/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:51:27 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/20 18:18:28 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		j = i - 1;
		if ((str[j] < 48) || (str[j] > 57 && str[j] < 65) || (str[j] == '_'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				*(str + i) -= 32;
		}
		if (str[j] > 47)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				*(str + i) += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// char	*ft_strcapitalize(char *str);

// int	main(void)
// {
// 	char	phrase[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

// 	printf("Before: %s\n", phrase);
// 	ft_strcapitalize(phrase);
// 	printf("After: %s\n", phrase);
// }
