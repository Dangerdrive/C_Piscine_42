#include <unistd.h>

void    ft_put_result(int (*result)[4])
{// Access the matrix elements using the row and column indices
    *result[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
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
