#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int testA = 13;
    int testB = 4;
    ft_ultimate_div_mod(&testA, &testB);
    printf("a = %d, b = %d \n", testA, testB);
}