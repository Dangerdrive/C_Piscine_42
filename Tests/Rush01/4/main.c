/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:57:03 by jraupp            #+#    #+#             */
/*   Updated: 2023/03/12 22:05:38 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 4
#define X -1

void	verify_clues(int arg, char *str);

void	receber_valores(int clues[16]);
	while (i < 4)
	{
	colup[i] = clues[i];
	i++;
	}
	i = 4;
	while (i < 8)
	{
	coldown[i - 4] = clues[i];
	i++;
	}
	i = 8;
	while (i < 12)
	{
	rowleft[i - 8] = clues[i];
	i++;
	}
	i = 12;
	while (i < 16)
	{
	rowright[i - 12] = clues[i];
	i++;
	}

int	main(int argc, char **argv)
{
	int clues[16];
	verify_clues(argc, argv[1], clues);
	void receber_valores();
	int	matrix[4][4] = {{0}};
	int	colup[4];
	int	coldown[4];
	int	rowleft[4];
	int	rowright[4];
	int	i;
	int j;
	int k;
	int l;

	i = 0;
	while (i++, i <= 4)
	{
//-------------------------Verificação 1(4)coluna e linha-------------------------
		if (colup[i + X] == 4)
		{
			j = 0;
			while (j++, j <= 4)
			{
				matrix[j + X][i + X] = j;
			}
		}
		if (coldown[i + X] == 4)
		{
			j = 0;
			while (j++, j <= 4)
			{
				matrix[j + X][i + X] = 5 - j;
			}
		}
		if (rowleft[i + X] == 4)
		{
			j = 0;
			while (j++, j <= 4)
			{
				matrix[i + X][j + X] = j;
			}
		}
		if (rowright[i + X] == 4)
		{
			j = 0;
			while (j++, j <= 4)
			{
				matrix[i + X][j + X] = 5 - j;
			}
		}
//-------------------------Verificação 2(1 e 1/2 e 1/3)linha-------------------------
		if (rowleft[i + X] == 1)
		{
			matrix[i + X][1 + X] = 4;

			if (rowright[i + X] == 2)
			{
				matrix[i + X][4 + X] = 3;
			}
			if (rowright[i + X] == 3 &&
				matrix[i + X][1 + X] == 4 &&
				matrix[i + X][2 + X] == 3)
			{
				matrix[i + X][3 + X] = 1;
				matrix[i + X][4 + X] = 2;
			}
		}
		if (rowright[i + X] == 1)
		{
			matrix[i + X][4 + X] = 4;

			if (rowleft[i + X] == 2)
			{
				matrix[i + X][1 + X] = 3;
			}
			if (rowleft[i + X] == 3 &&
				matrix[i + X][4 + X] == 4 &&
				matrix[i + X][3 + X] == 3)
			{
				matrix[i + X][1 + X] = 2;
				matrix[i + X][2 + X] = 1;
			}
		}
//-------------------------Verificação 3(2/3)coluna/linha-------------------------
		if (colup[i + X] == 2 && coldown[i + X] == 3)
		{
			matrix[2 + X][i + X] = 4;
			if (matrix[1 + X][i + X] == 3)
			{
				matrix[3 + X][i + X] = 1;
				matrix[4 + X][i + X] = 2;
			}
		}
		if (coldown[i + X] == 2 && colup[i + X] == 3)
		{
			matrix[3 + X][i + X] = 4;
			if (matrix[4 + X][i + X] == 3)
				{
					matrix[1 + X][i + X] = 2;
					matrix[2 + X][i + X] = 1;
				}
		}
		if (rowleft[i + X] == 2 && rowright[i + X] == 3)
		{
			matrix[i + X][2 + X] = 4;
			if (matrix[i + X][1 + X] == 3)
			{
				matrix[i + X][3 + X] = 1;
				matrix[i + X][4 + X] = 2;
			}
		}
		if (rowright[i + X] == 2 && rowleft[i + X] == 3)
		{
			matrix[i + X][3 + X] = 4;
			if (matrix[i + X][4 + X] == 3)
			{
				matrix[i + X][1 + X] = 2;
				matrix[i + X][2 + X] = 1;
			}
		}
//-------------------------Verificação 4 (2/2)linha -------------------------
		if (rowleft[i + X] == 2 && rowright[i + X] == 2)
		{
			if (matrix[i + X][3 + X] == 4 && matrix [i + X][4 + X] == 3)
			{
				matrix[i + X][1 + X] = 2;
				matrix[i + X][2 + X] = 1;
			}
			if (matrix[i + X][1 + X] == 3 && matrix[i + X][2 + X] == 4)
			{
				matrix[i + X][3 + X] = 1;
				matrix[i + X][4 + X] = 2;
			}
		}
	}

		i = 0;
	while (i++, i <= 4)
	{	
//-------------------------Verificação 2 (1 e 1/2 e 1/3)coluna-------------------------
		if (colup[i + X] == 1)
		{
			matrix[1 + X][i + X] = 4;
			if (coldown[i + X] == 2)
			{
				matrix[4 + X][i + X] = 3;
			}
			if (coldown[i + X] == 3 &&
				matrix[1 + X][i + X] == 4 &&
				matrix[2 + X][i + X] == 3)
			{
				matrix[3 + X][i + X] = 1;
				matrix[4 + X][i + X] = 2;
			}
		}
		if (coldown[i + X] == 1)
		{
			matrix[4 + X][i + X] = 4;

			if (colup[i + X] == 2)
			{
				matrix[1 + X][i + X] = 3;
			}
			if (colup[i + X] == 3 &&
				matrix[4 + X][i + X] == 4 &&
				matrix[3 + X][i + X] == 3)
			{
				matrix[1 + X][i + X] = 2;
				matrix[2 + X][i + X] = 1;
			}
		}
//-------------------------Verificação 4 (2/2)coluna-------------------------
		if (colup[i + X] == 2 && coldown[i + X] == 2)
		{
			if (matrix[3 + X][i + X] == 4 && matrix[4 + X][i + X] == 3)
			{
				matrix[1 + X][i + X] = 2;
				matrix[2 + X][i + X] = 1;
			}
			if (matrix[1 + X][i + X] == 3 && matrix[2 + X][i + X] == 4)
			{
				matrix[3 + X][i + X] = 1;
				matrix[4 + X][i + X] = 2;
			}	
		}
	}
//-------------------------Verificação 5(4lost)coluna/linha-------------------------
	i = 0;
	while (i++, i <= 4)
	{	
		if (matrix[i + X][1 + X] != 4 &&
			matrix[i + X][2 + X] != 4 &&
			matrix[i + X][3 + X] != 4 &&
			matrix[i + X][4 + X] != 4)
		{
			j = 0;
			while (j++, j <= 4)
			{
				if (matrix[1 + X][j + X] != 4 &&
					matrix[2 + X][j + X] != 4 &&
					matrix[3 + X][j + X] != 4 &&
					matrix[4 + X][j + X] != 4)
						matrix[i + X][j + X] = 4;
			}
		}
	}
//-------------------------Verificação 6(autocomplete)-------------------------
 	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i++, i <= 4)
	{
		if(matrix[1 + X][i + X] == 0)
		{
			l = i;
			k++;
		}
		j = j + matrix[1 + X][i + X];
	}
	if (k == 1)
	{
		matrix[1 + X][l + X] = 10 - j;
	}

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i++, i <= 4)
	{
		if(matrix[2 + X][i + X] == 0)
		{
			l = i;
			k++;
		}
		j = j + matrix[2 + X][i + X];
	}
	if (k == 1)
	{
		matrix[2 + X][l + X] = 10 - j;
	}

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i++, i <= 4)
	{
		if(matrix[3 + X][i + X] == 0)
		{
			l = i;
			k++;
		}
		j = j + matrix[3 + X][i + X];
	}
	if (k == 1)
	{
		matrix[3 + X][l + X] = 10 - j;
	}

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i++, i <= 4)
	{
		if(matrix[4 + X][i + X] == 0)
		{
			l = i;
			k++;
		}
		j = j + matrix[4 + X][i + X];
	}
	if (k == 1)
	{
		matrix[4 + X][l + X] = 10 - j;
	}

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i++, i <= 4)
	{
		if(matrix[i + X][1 + X] == 0)
		{
			l = i;
			k++;
		}
		j = j + matrix[i + X][1 + X];
	}
	if (k == 1)
	{
		matrix[l + X][1 + X] = 10 - j;
	}

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i++, i <= 4)
	{
		if(matrix[i + X][2 + X] == 0)
		{
			l = i;
			k++;
		}
		j = j + matrix[i + X][2 + X];
	}
	if (k == 1)
	{
		matrix[l + X][2 + X] = 10 - j;
	}

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i++, i <= 4)
	{
		if(matrix[i + X][3 + X] == 0)
		{
			l = i;
			k++;
		}
		j = j + matrix[i + X][3 + X];
	}
	if (k == 1)
	{
		matrix[l + X][3 + X] = 10 - j;
	}

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i++, i <= 4)
	{
		if(matrix[i + X][4 + X] == 0)
		{
			l = i;
			k++;
		}
		j = j + matrix[i + X][4 + X];
	}
	if (k == 1)
	{
		matrix[l + X][4 + X] = 10 - j;
	}
//-------------------------Print Matrix all-------------------------
	i = 0;
	while (i++, i <= 4)
	{
		j = 0;
		while (j++, j <= 4)
		{
			k = matrix[i + X][j + X] + 48;
			write(1, &k, 1);
			if(j != 4)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
