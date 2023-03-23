#include <stdio.h>

char	*ft_strlowcase(char *src);

int main() {
    char src[] = "Hello, world!";
   
   printf("src: %s\n", src);
       ft_strlowcase( src);
    
    printf("src: %s\n", src);

    
    return 0;
}