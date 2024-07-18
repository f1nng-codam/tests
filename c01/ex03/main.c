/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:18:06 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 09:22:05 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	test_00(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("--- EX03 - Test00\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("div: %d (should be 8)\n", div);
	printf("mod: %d (should be 2)\n", mod);
}

void	test_01(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 76;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("--- EX03 - Test01\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("div: %d (should be 25)\n", div);
	printf("mod: %d (should be 1)\n", mod);
}

void	test_02(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 100;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("--- EX03 - Test02\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("div: %d (should be 10)\n", div);
	printf("mod: %d (should be 0)\n", mod);
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
}
