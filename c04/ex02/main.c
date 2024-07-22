/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:41:16 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/22 09:35:39 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putnbr(int nb);

void	test_00(void)
{
	int	nb;

	nb = 42;
	printf("--- EX02 - Test00\n");
	printf("output (should be 42)\n");
	ft_putnbr(nb);
	printf("\n");
}

void	test_01(void)
{
	int	nb;

	nb = 42321;
	printf("--- EX02 - Test01\n");
	printf("output (should be 42321)\n");
	ft_putnbr(nb);
	printf("\n");
}

void	test_02(void)
{
	int	nb;

	nb = -42;
	printf("--- EX02 - Test02\n");
	printf("output (should be -42)\n");
	ft_putnbr(nb);
	printf("\n");
}

void	test_03(void)
{
	int	nb;

	nb = -42321;
	printf("--- EX02 - Test03\n");
	printf("output (should be -42321)\n");
	ft_putnbr(nb);
	printf("\n");
}

void	test_04(void)
{
	int	nb;

	nb = 0;
	printf("--- EX02 - Test04\n");
	printf("output (should be 0)\n");
	ft_putnbr(nb);
	printf("\n");
}

void	test_05(void)
{
	int	nb;

	nb = 2147483647;
	printf("--- EX02 - Test05\n");
	printf("output (should be 2147483647)\n");
	ft_putnbr(nb);
	printf("\n");
}

void	test_06(void)
{
	int	nb;

	nb = -2147483648;
	printf("--- EX02 - Test06\n");
	printf("output (should be -2147483648)\n");
	ft_putnbr(nb);
	printf("\n");
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
	test_06();
}
