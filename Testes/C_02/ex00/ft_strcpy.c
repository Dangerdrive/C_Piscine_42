/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:00:53 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/09 22:12:33 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src) {
    char *p = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // add null terminator to the end of dest
}

/*This function copies the characters from the string pointed to by src to the string pointed to by dest, 
including the terminating null character. It returns a pointer to dest.

The implementation uses a pointer p to save the initial value of dest, 
so that it can be returned at the end. 
It then iterates through the characters of src and copies them one by one to dest, until it encounters the null terminator. 
Finally, it adds a null terminator to the end of dest and returns the saved pointer p.

Note that this implementation assumes that dest is large enough to hold the contents of src, 
otherwise it may cause a buffer overflow. It also assumes that src is a valid null-terminated string.*/
