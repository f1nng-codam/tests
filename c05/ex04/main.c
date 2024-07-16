/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:51:40 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/16 17:16:28 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

void	test_00(void)
{
	int	index;

	index = -10;
	printf("--- EX04 - Test00\n");
	printf("index: %d\n", index);
	printf("result: %d (should be -1)\n", ft_fibonacci(index));
}

void	test_01(void)
{
	int	index;

	index = 0;
	printf("--- EX04 - Test01\n");
	printf("index: %d\n", index);
	printf("result: %d (should be 0)\n", ft_fibonacci(index));
}

void	test_02(void)
{
	int	index;

	index = 1;
	printf("--- EX04 - Test02\n");
	printf("index: %d\n", index);
	printf("result: %d (should be 1)\n", ft_fibonacci(index));
}

void	test_03(void)
{
	int	index;

	index = 5;
	printf("--- EX04 - Test03\n");
	printf("index: %d\n", index);
	printf("result: %d (should be 5)\n", ft_fibonacci(index));
}

void	test_04(void)
{
	int	index;

	index = 10;
	printf("--- EX04 - Test04\n");
	printf("index: %d\n", index);
	printf("result: %d (should be 55)\n", ft_fibonacci(index));
}

void	test_05(void)
{
	int	index;

	index = 20;
	printf("--- EX04 - Test05\n");
	printf("index: %d\n", index);
	printf("result: %d (should be 6765)\n", ft_fibonacci(index));
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
