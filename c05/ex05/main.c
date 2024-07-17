/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:41:49 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/17 10:09:31 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

void	test_00(void)
{
	int	nb;

	nb = 0;
	printf("--- EX05 - Test00\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 0)\n", ft_sqrt(nb));
}

void	test_01(void)
{
	int	nb;

	nb = 1;
	printf("--- EX05 - Test01\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 1)\n", ft_sqrt(nb));
}

void	test_02(void)
{
	int	nb;

	nb = 4;
	printf("--- EX05 - Test02\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 2)\n", ft_sqrt(nb));
}

void	test_03(void)
{
	int	nb;

	nb = 2400;
	printf("--- EX05 - Test03\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 0)\n", ft_sqrt(nb));
}

void	test_04(void)
{
	int	nb;

	nb = 2500;
	printf("--- EX05 - Test04\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 50)\n", ft_sqrt(nb));
}

void	test_05(void)
{
	int	nb;

	nb = 625000000;
	printf("--- EX05 - Test05\n");
	printf("nb: %d\n", nb);
	printf("result: %d (should be 25000)\n", ft_sqrt(nb));
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
