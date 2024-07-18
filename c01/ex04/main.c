/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:18:06 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 09:26:35 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	test_00(void)
{
	int	a;
	int	b;

	a = 42;
	b = 5;
	printf("--- EX04 - Test00\n");
	printf("a before: %d\n", a);
	printf("b before: %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a after: %d (should be 8)\n", a);
	printf("b after: %d (should be 2)\n", b);
}

void	test_01(void)
{
	int	a;
	int	b;

	a = 76;
	b = 3;
	printf("--- EX04 - Test01\n");
	printf("a before: %d\n", a);
	printf("b before: %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a after: %d (should be 25)\n", a);
	printf("b after: %d (should be 1)\n", b);
}

void	test_02(void)
{
	int	a;
	int	b;

	a = 100;
	b = 10;
	printf("--- EX04 - Test02\n");
	printf("a before: %d\n", a);
	printf("b before: %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a after: %d (should be 10)\n", a);
	printf("b after: %d (should be 0)\n", b);
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
}
