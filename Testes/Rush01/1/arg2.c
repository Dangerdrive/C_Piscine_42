#include <unistd.h>

void ft_putchar(int c);

int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int char_to_int(char c) {
    return (int)(c - '0');
}

int main(int argc, char *argv[]) {
    int matrix[4][4];
    int i = 1;
    int row = 0, col = 0;
    while (i < argc && row < 4) {
        int num = 0;
        int j = 0;
        while (argv[i][j] != '\0' && is_digit(argv[i][j])) {
            num = num * 10 + char_to_int(argv[i][j]);
            j++;
        }
        matrix[row][col] = num;
        col++;
        if (col == 4) {
            row++;
            col = 0;
        }
        i++;
    }
    i = 0;
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