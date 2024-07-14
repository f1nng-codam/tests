/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:19:58 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 10:23:50 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_negative(int n);

void	test_00(void)
{
	int	n;

	n = 42;
	printf("--- EX04 - Test00\n");
	printf("number: %d\n", n);
	printf("output (should be P):\n");
	ft_is_negative(n);
	printf("\n");
}

void	test_01(void)
{
	int	n;

	n = -42;
	printf("--- EX04 - Test01\n");
	printf("number: %d\n", n);
	printf("output (should be N):\n");
	ft_is_negative(n);
	printf("\n");
}

void	test_02(void)
{
	int	n;

	n = 0;
	printf("--- EX04 - Test02\n");
	printf("number: %d\n", n);
	printf("output (should be P):\n");
	ft_is_negative(n);
	printf("\n");
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
}
