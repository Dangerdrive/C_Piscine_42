/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alen <fde-alen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:03:01 by fde-alen          #+#    #+#             */
/*   Updated: 2023/03/09 14:58:51 by fde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Create a function that takes a pointer to pointer to pointer to pointer to pointer
to pointer to pointer to pointer to pointer to int as a parameter and sets the value
"42" to that int.
• Here’s how it should be prototyped :*/

#include <stdio.h>

#include <stdio.h>

void    ft_ultimate_ft(int *********nbr);

int main()
{
	int nbr = 0;                // declare and initialize variable
	int *ptr = &nbr;            // declare and initialize pointer to nbr
	int **ptr2 = &ptr;          // declare and initialize pointer to pointer to nbr
	int ***ptr3 = &ptr2;        // declare and initialize pointer to pointer to pointer to nbr
	int ****ptr4 = &ptr3;       // declare and initialize pointer to pointer to pointer to pointer to nbr
	int *****ptr5 = &ptr4;      // declare and initialize pointer to pointer to pointer to pointer to pointer to nbr
	int ******ptr6 = &ptr5;     // declare and initialize pointer to pointer to pointer to pointer to pointer to pointer to nbr
	int *******ptr7 = &ptr6;    // declare and initialize pointer to pointer to pointer to pointer to pointer to pointer to pointer to nbr
	int ********ptr8 = &ptr7;   // declare and initialize pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to nbr
	int *********ptr9 = &ptr8;  // declare and initialize pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to nbr

	ft_ultimate_ft(ptr9);       // pass ptr9 to ft_ultimate_ft function

	printf("%d\n", nbr);        // print the value of nbr

	return 0;                   // indicate successful completion of program
}