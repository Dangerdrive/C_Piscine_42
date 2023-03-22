/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:03:01 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/09 12:52:54 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*• Create a function that takes a pointer to int as a parameter, and sets the value "42"
to that int.
• Here’s how it should be prototyped :
void ft_ft(int *nbr);*/

#include <stdio.h>

void ft_ft(int *nbr);

int main() 
{
    int nbr = 0; // declare and initialize variable

	printf("%d\n", nbr);

    ft_ft(&nbr); // pass the address of nbr to ft_ft function

    printf("%d\n", nbr); // print the value of nbr

    return 0; // indicate successful completion of program
}