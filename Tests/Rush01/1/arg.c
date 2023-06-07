#include <unistd.h>
#include <stdlib.h>

void ft_putchar(int c);

int main(int argc, char *argv[]) {
    int matrix[4][4];
    int i = 1;
    int row = 0, col = 0;
    while (i < argc && row < 4) {
        int num = atoi(argv[i]); // essa parte transformaria a string que a gente receberia e transformaria em matriz
        matrix[row][col] = num;
        col++;
        if (col == 4) {
            row++;
            col = 0;
        }
        i++;
    }
    i = 0;		// aqui a gente imprimiria a matriz resultando em forma de matriz, só pra testar.
    while (i < 4) {
        int j = 0;
        while (j < 4) {
            ft_putchar(matrix[i][j] + '0'); // convert integer to character
            if (j < 3) {
                ft_putchar(' '); // add a space between numbers
            }
            j++;
        }
        ft_putchar('\n'); // add a newline after each row
        i++;
    }
    return 0;
}

void ft_putchar(int c) {
    write(1, &c, 1);
}