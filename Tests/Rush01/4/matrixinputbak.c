/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cluesinput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:02:56 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/12 18:43:03 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_num(int n) {
	char c = n + '0';
	write(1, &c, 1);
}

void print_num(int n) {
	char c = n + '0';
	write(1, &c, 1);
}

void print_error(char* msg, int line) {
	char msg1[] = "Erro: As pistas na linha ";
	char msg2[] = " não sao validas.\n";
	int len1 = 25, len2 = 21, i;

	write(1, msg1, len1);
	print_num(line+1);
	write(1, msg2, len2);
}
void	print_error1(void)
{
	write(1, "Usage: ./a.out <clues>\n", 23);
	_exit(1);
}





int clues[4][4];
	int i;
	int j;

	// Pede ao usuário para inserir os valores das pistas para cada linha e coluna
	char msg[] = "Insira os valores das para linhas e colunas:\n";
	write(1, msg, 47);
	char input[2];
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			read(STDIN_FILENO, input, 2);
			clues[i][j] = input[0] - '0';
		}
	}

	// Verifica a soma das pistas opostas
	for (i = 0; i < 4; i++) {
		if (clues[i][0] + clues[i][3] > clues[i][1] + clues[i][2]) {
			print_error("Erro: As pistas na linha ", i);
			return 1; // Encerra o programa com código de erro
		}
		if (clues[0][i] + clues[3][i] > clues[1][i] + clues[2][i]) {
			print_error("Erro: As pistas na coluna ", i);
			return 1; // Encerra o programa com código de erro
		}
	}

	// Imprime a matriz com os valores das pistas
	char msg_clues[] = "\nMatriz com os valores das pistas:\n";
	write(1, msg_clues, 36);
	char space[] = " ";
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			print_num(clues[i][j]);
			write(1, space, 1);
		}
		write(1, "\n", 1);
	}

}


int main(int argc, char** argv)
{
	
	return 0;
}
