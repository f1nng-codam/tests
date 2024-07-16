/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:27:45 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/16 14:40:34 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

void	test_00(void)
{
	int	nb;

	nb = 0;
	printf("--- EX01 - Test00\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 0)\n", ft_recursive_factorial(nb));
}

void	test_01(void)
{
	int	nb;

	nb = 1;
	printf("--- EX01 - Test01\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 1)\n", ft_recursive_factorial(nb));
}

void	test_02(void)
{
	int	nb;

	nb = 2;
	printf("--- EX01 - Test02\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 2)\n", ft_recursive_factorial(nb));
}

void	test_03(void)
{
	int	nb;

	nb = 3;
	printf("--- EX01 - Test03\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 6)\n", ft_recursive_factorial(nb));
}

void	test_04(void)
{
	int	nb;

	nb = 8;
	printf("--- EX01 - Test04\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 40320)\n", ft_recursive_factorial(nb));
}

void	test_05(void)
{
	int	nb;

	nb = 12;
	printf("--- EX01 - Test05\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 479001600)\n", ft_recursive_factorial(nb));
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
}
