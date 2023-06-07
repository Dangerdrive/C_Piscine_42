#include <stdio.h>

char	*ft_strupcase(char *src);

int main() {
    char src[] = "Hello, world!";
   
   printf("src: %s\n", src);
       ft_strupcase( src);
    
    printf("src: %s\n", src);

    
    return 0;
}