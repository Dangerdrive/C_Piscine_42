/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:36:25 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/14 19:51:57 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
char str[]
int i;
int rem;

i = 0;
if (num < 0) {
str[i++] = '-';
num = -num;
	}
	if (num == 0)
	{
	str[i++] = '0';
	}
	else
	{
		while (num != 0)
		{
			rem = num % 10;
		str[i++] = rem + '0';
		num = num / 10;
		}
	}
	str[i] = '\0';
	int j, len = i;
	for (j = 0; j < len / 2; j++) {
		char tmp = str[j];
		str[j] = str[len - j - 1];
		str[len - j - 1] = tmp;
	}
}

int main()
{
    int num = 12345;
    char str[20];
    int_to_str(num, str);
    printf("num = %d\nstr = %s\n", num, str);
    return 0;
}