/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:29:52 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/16 16:38:35 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

void	test_00(void)
{
	int	nb;
	int	power;

	nb = 0;
	power = 0;
	printf("--- EX03 - Test00\n");
	printf("nb: %d\n", nb);
	printf("power: %d\n", power);
	printf("result: %d (should be 1)\n", ft_recursive_power(nb, power));
}

void	test_01(void)
{
	int	nb;
	int	power;

	nb = 0;
	power = -10;
	printf("--- EX03 - Test01\n");
	printf("nb: %d\n", nb);
	printf("power: %d\n", power);
	printf("result: %d (should be 0)\n", ft_recursive_power(nb, power));
}

void	test_02(void)
{
	int	nb;
	int	power;

	nb = 4;
	power = 3;
	printf("--- EX03 - Test02\n");
	printf("nb: %d\n", nb);
	printf("power: %d\n", power);
	printf("result: %d (should be 64)\n", ft_recursive_power(nb, power));
}

void	test_03(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 8;
	printf("--- EX03 - Test03\n");
	printf("nb: %d\n", nb);
	printf("power: %d\n", power);
	printf("result: %d (should be 390625)\n", ft_recursive_power(nb, power));
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
}
