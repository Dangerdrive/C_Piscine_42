#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char str1[] = "A rápida raposa marrom pula sobre o cão preguiçoso";
	char str2[] = "rápida";
	char str3[] = "cão";
	char str4[] = "gato";
	char str5[] = "";
	char *ptr1, *ptr2;

//teste2
	ptr1 = ft_strstr(str1, str2);
	ptr2 = strstr(str1, str2);

	printf("ft_strstr:\n");
	if (ptr1 == NULL)
		printf("'%s' não encontrado em '%s'\n", str2, str1);
	else
		printf("'%s' encontrado em '%s' na posição %ld\n", str2, str1, ptr1 - str1);

	printf("\nstrstr:\n");
	if (ptr2 == NULL)
		printf("'%s' não encontrado em '%s'\n", str2, str1);
	else
		printf("'%s' encontrado em '%s' na posição %ld\n", str2, str1, ptr2 - str1);

//teste 3
	ptr1 = ft_strstr(str1, str3);
	ptr2 = strstr(str1, str3);

	printf("\nft_strstr:\n");
	if (ptr1 == NULL)
		printf("'%s' não encontrado em '%s'\n", str3, str1);
	else
		printf("'%s' encontrado em '%s' na posição %ld\n", str3, str1, ptr1 - str1);

	printf("\nstrstr:\n");
	if (ptr2 == NULL)
		printf("'%s' não encontrado em '%s'\n", str3, str1);
	else
		printf("'%s' encontrado em '%s' na posição %ld\n", str3, str1, ptr2 - str1);

	ptr1 = ft_strstr(str1, str4);
	ptr2 = strstr(str1, str4);

	printf("\nft_strstr:\n");
	if (ptr1 == NULL)
		printf("'%s' não encontrado em '%s'\n", str4, str1);
	else
		printf("'%s' encontrado em '%s' na posição %ld\n", str4, str1, ptr1 - str1);

	printf("\nstrstr:\n");
	if (ptr2 == NULL)
		printf("'%s' não encontrado em '%s'\n", str4, str1);
	else
		printf("'%s' encontrado em '%s' na posição %ld\n", str4, str1, ptr2 - str1);
//teste5
	ptr1 = ft_strstr(str1, str5);
	ptr2 = strstr(str1, str5);

	printf("ft_strstr:\n");
	if (ptr1 == NULL)
		printf("'%s' não encontrado em '%s'\n", str5, str1);
	else
		printf("'%s' encontrado em '%s' na posição %ld\n", str5, str1, ptr1 - str1);

	printf("\nstrstr:\n");
	if (ptr2 == NULL)
		printf("'%s' não encontrado em '%s'\n", str5, str1);
	else
		printf("'%s' encontrado em '%s' na posição %ld\n", str5, str1, ptr2 - str1);





	return 0;
}

// ft_strstr:
// 'rápida' encontrado em 'A rápida raposa marrom pula sobre o cão preguiçoso' na posicao 2

// strstr:
// 'rápida' encontrado em 'A rápida raposa marrom pula sobre o cão preguiçoso' na posicao 2

// ft_strstr:
// 'preguicoso' encontrado em 'A rápida raposa marrom pula sobre o cão preguiçoso' na posicao 38

// strstr:
// 'preguicoso' encontrado em 'A rápida raposa marrom pula sobre o cão preguiçoso' na posicao 38

// ft_strstr:
// 'gato' nao encontrado em 'O rapido cachorro marrom salta sobre o cachorro preguicoso'

// strstr:
// 'gato' nao encontrado em 'O rapido cachorro marrom salta sobre o cachorro preguicoso'