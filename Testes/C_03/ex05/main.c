#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    char dest1[20] = "Hello, ";
    char src1[] = "world!";
    size_t size1 = sizeof(dest1);
    size_t n1 = strlcat(dest1, src1, size1);
    printf("strlcat: dest = '%s', returned = %lu\n", dest1, n1);

    char dest2[20] = "Hello, ";
    char src2[] = "world!";
    size_t size2 = sizeof(dest2);
    size_t n2 = ft_strlcat(dest2, src2, size2);
    printf("ft_strlcat: dest = '%s', returned = %lu\n", dest2, n2);

    char dest3[3] = "";
    char src3[] = "123456789";
    size_t size3 = sizeof(dest3);
    size_t n3 = strlcat(dest3, src3, size3);
    printf("strlcat: dest = '%s', returned = %lu\n", dest3, n3);

    char dest4[3] = "";
    char src4[] = "123456789";
    size_t size4 = sizeof(dest4);
    size_t n4 = ft_strlcat(dest4, src4, size4);
    printf("ft_strlcat: dest = '%s', returned = %lu\n", dest4, n4);

    return 0;
}
// In this main function, 
// we test ft_strlcat by comparing its results with strlcat on four different examples.
//  The first two examples copy the string "world!" onto the end of the string "Hello, ",
//   with a buffer size of 20. 
//   The third and fourth examples copy the string "123456789" onto an empty string with a buffer size of 3.
//    The output of the program should show the returned value of each function and the final value of each destination string,
//     as shown

// In the context of ft_strlcat(), size_t is used to represent the size of the buffer
//  that can be written to without causing a buffer overflow. 
//  The sizeof operator is used to calculate the size of the destination buffer,
//   which is needed to ensure that the destination buffer has enough space to accommodate the concatenated string.


//expected

// strlcat: dest = 'Hello, world!', returned = 13
// ft_strlcat: dest = 'Hello, world!', returned = 13
// strlcat: dest = '12', returned = 10
// ft_strlcat: dest = '12', returned = 10









// This is the implementation of the ft_strlcat function, which is designed to concatenate two strings, src and dest, with the length of the destination string limited to size.

// Here is a step-by-step explanation of the code:

// The function is defined as taking in two strings (dest and src) and a size limit (size) as arguments, and returning an unsigned integer.

// Three unsigned integers dest_len, src_len, and i are declared to be used later.

// dest_len is assigned the length of dest using the strlen function from the string.h library.

// src_len is assigned the length of src using the strlen function from the string.h library.

// i is initialized to 0.

// A while loop is used to iterate through the characters of the src string until the end of the string is reached (src[i] evaluates to false) or the length of the dest string plus the current index i plus one (to account for the null terminator) is greater than or equal to the size limit.

// Inside the while loop, each character in src is copied into dest starting from the end of dest (at index dest_len+i) until the end of src is reached.

// The null terminator is then added to the end of the new dest string at index dest_len+i.

// If size is less than dest_len, meaning the dest string has already filled up the entire size limit, the function returns the length of src plus size.

// If size is greater than or equal to dest_len, meaning there is still room to add characters from src, the function returns the total length of the concatenated string, which is the sum of the lengths of src and dest.

// In summary, the ft_strlcat function concatenates two strings, src and dest, with the length of the destination string limited to size. If the dest string fills up the entire size limit, the function returns the length of src plus size. If there is still room to add characters from src, the function returns the total length of the concatenated string, which is the sum of the lengths of src and dest.