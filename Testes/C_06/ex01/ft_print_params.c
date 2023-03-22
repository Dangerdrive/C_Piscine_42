/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:20:24 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/22 16:37:44 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;//defini um contador i aqui, pra nossa iteração abaixo.

	i = 1;//comecei no 1 já, pq argv[0] é o próprio programa, e nesse caso eu quero só os outros parametros/argumentos. 
//argv[1] no caso já seria o primero argumento. Então se rodar o programa p.e. com ./a.out "teste", o argv[1] ="teste".
	while (i < argc)//aqui a gente vai iterar enquanto i for menor do que argc. 
	{//usando o exemplo anterior, argc = 2 (1=nome do programa/ 2=nome do 1o argumento, no caso "teste"
//então o ultimo argumento seria argv[1] (lembrem que a contagem começa no zero.). Então no caso vai ser while(i < 2), então só vai até argv[1].
		ft_print_params(argv[i]); // aqui eu coloco uma função pra printar cada argumento (é um ft_putstr)
		ft_putchar('\n');
		i++;
	}
}
