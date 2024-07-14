/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:10:27 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 10:18:41 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_numbers(void);

void	test_00(void)
{
	printf("--- EX03 - Test00\n");
	printf("output (should be 0123456789):\n");
	ft_print_numbers();
	printf("\n");
}

int	main(void)
{
	test_00();
}
