/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:21:47 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/17 13:51:59 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

void	test_00(void)
{
	int	nb;

	nb = 0;
	printf("--- EX07 - Test00\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 2)\n", ft_find_next_prime(nb));
}

void	test_01(void)
{
	int	nb;

	nb = 1;
	printf("--- EX07 - Test01\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 2)\n", ft_find_next_prime(nb));
}

void	test_02(void)
{
	int	nb;

	nb = 9;
	printf("--- EX07 - Test02\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 11)\n", ft_find_next_prime(nb));
}

void	test_03(void)
{
	int	nb;

	nb = 100;
	printf("--- EX07 - Test03\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 101)\n", ft_find_next_prime(nb));
}

void	test_04(void)
{
	int	nb;

	nb = -10;
	printf("--- EX07 - Test04\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 2)\n", ft_find_next_prime(nb));
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
	test_04();
}
