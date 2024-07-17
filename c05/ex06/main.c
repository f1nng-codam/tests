/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:46:11 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/17 11:11:11 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

void	test_00(void)
{
	int	nb;

	nb = 0;
	printf("--- EX06 - Test00\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 0)\n", ft_is_prime(nb));
}

void	test_01(void)
{
	int	nb;

	nb = 1;
	printf("--- EX06 - Test01\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 0)\n", ft_is_prime(nb));
}

void	test_02(void)
{
	int	nb;

	nb = 97;
	printf("--- EX06 - Test02\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 1)\n", ft_is_prime(nb));
}

void	test_03(void)
{
	int	nb;

	nb = 100;
	printf("--- EX06 - Test03\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 0)\n", ft_is_prime(nb));
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
}
