/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:51:14 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/23 16:31:42 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str) //ft_putstr pra escrever uma string.
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv) //argc retorna o numero de argumentos. O primeiro argumento é o próprio nome do programa.
//o segundo argumento é o que vc colocar na frente, uma palavra uma string, etc.
//E assim por diante. Se vc colocar outra coisa na frente disso, seja palavra ou string será o 3o. e por ai vai.
{
	if (argc != 0) // eu coloquei essa linha só pra usar o argc e não dar erro de varíavel não utilizada. 
	{//Pq o argc sempre vai ser diferente de 0, pq sempre vai ter ao menos o nome do programa e aí já é 1 pelo menos.
		ft_putstr(argv[0]);// aqui eu rodo nossa função de escrever string com o argv[0]. A posição 0 no argv aponta pro próprio nome do programa.
		ft_putstr("\n");
	}
}
