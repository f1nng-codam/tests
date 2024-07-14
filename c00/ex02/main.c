/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:10:27 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 10:17:28 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_reverse_alphabet(void);

void	test_00(void)
{
	printf("--- EX02 - Test00\n");
	printf("output (should be zyxwvutsrqponmlkjihgfedcba):\n");
	ft_print_reverse_alphabet();
	printf("\n");
}

int	main(void)
{
	test_00();
}
