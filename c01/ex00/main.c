/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:04:46 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 09:07:51 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

void	test_00(void)
{
	int	nbr;

	nbr = 10;
	printf("--- EX00 - Test00\n");
	printf("nbr before: %d (should be 10)\n", nbr);
	ft_ft(&nbr);
	printf("nbr after: %d (should be 42)\n", nbr);
}

void	test_01(void)
{
	int	nbr;

	nbr = 5;
	printf("--- EX00 - Test01\n");
	printf("nbr before: %d (should be 5)\n", nbr);
	ft_ft(&nbr);
	printf("nbr after: %d (should be 42)\n", nbr);
}

int	main(void)
{
	test_00();
	test_01();
}
