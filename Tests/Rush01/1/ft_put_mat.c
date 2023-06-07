#include <unistd.h>

void ft_putchar(int c);

int main() {
    int result[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    int i = -1;
    while (i++ < 3) {
        int j = -1;
        while (j++ < 3) {
            ft_putchar(result[i][j] + '0'); // convert integer to character
            if (j < 3) {
                ft_putchar(' '); // add a space between numbers
            }
        }
        ft_putchar('\n'); // add a newline after each row
        }
    return 0;
}

void ft_putchar(int c) {
    write(1, &c, 1);
}
