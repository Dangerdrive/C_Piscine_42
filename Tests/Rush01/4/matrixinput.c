/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrixinput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:45:59 by gamaral-          #+#    #+#             */
/*   Updated: 2023/03/12 20:15:57 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	print_error(char *msg, int line)
{
	write(1, "Erro: As pistas na linha ", 25);
	print_num(line + 1);
	write(1, "não sao validas.\n", 21);
}


void	verify_clues(int arg, char *str)
{
	if (arg != 2)
	{
		print_error1(); // esse erro tem que ser diferente mesmo
	}
// pode ser função de verificar tamanho da string recebida
int clues_len = 0; 
	while (str[clues_len] != '\0')
	{
		clues_len++;
	}
	if (clues_len != 31)
	{
		print_error1();
	}

int matrix[16];
	int i = 0;
	while (i < 31)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			matrix[i/2] = str[i] - '0'; //aqui jogamos os valores na matrix como int
			i += 2;
		}
		else if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			print_error("Erro: As pistas na linha ", 5); // arrumar mensagens de erro
		}
	}
	
	int		matrix[4][4];

	/*
	char	input[2];
	int		i;
	int		j;

	write(1, "Insira os valores das para linhas e colunas:\n", 47);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			read(1, input, 2);
			matrix[i][j] = input[0] - '0';
			j++;
		}
	i++;
	}
*/

    // Verifica a soma das pistas opostas
	i = 0;
	while (i < 4)
	{
		if (matrix[i][0] + matrix[i][3] > matrix[i][1] + matrix[i][2])
		{
			print_error("Erro: As pistas na linha ", i);
			return (1); // Encerra o programa com código de erro
		}
		if (matrix[0][i] + matrix[3][i] > matrix[1][i] + matrix[2][i])
		{
			print_error("Erro: As pistas na coluna ", i);
			return (1); // Encerra o programa com código de erro
		}
		i++;
	}
	return (0);
}


int main(int argc, char** argv)
{
	verify_clue(argc, argv[1]);
	write(1, "Valid clue!\n", 12); // apenas para teste. Remover
	return 0;
}