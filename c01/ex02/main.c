/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:13:10 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 09:16:50 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	test_00(void)
{
	int	a;
	int	b;

	a = 42;
	b = 1042;
	printf("--- EX02 - Test00\n");
	printf("before swap: a = %d & b = %d (should be a = 42 & b = 1042)\n", a, b);
	ft_swap(&a, &b);
	printf("after swap: a = %d & b = %d (should be a = 1042 & b = 42)\n", a, b);
}

void	test_01(void)
{
	int	a;
	int	b;

	a = 1032;
	b = 32;
	printf("--- EX02 - Test01\n");
	printf("before swap: a = %d & b = %d (should be a = 1032 & b = 32)\n", a, b);
	ft_swap(&a, &b);
	printf("after swap: a = %d & b = %d (should be a = 32 & b = 1032)\n", a, b);
}

int	main(void)
{
	test_00();
	test_01();
}
