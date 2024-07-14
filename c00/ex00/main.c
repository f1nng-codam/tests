/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:10:27 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 10:14:00 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	test_00(void)
{
	printf("--- EX00 - Test00\n");
	printf("output (should be a):\n");
	ft_putchar('a');
	printf("\n");
}

void	test_01(void)
{
	printf("--- EX00 - Test01\n");
	printf("output (should be z):\n");
	ft_putchar('z');
	printf("\n");
}

void	test_02(void)
{
	printf("--- EX00 - Test02\n");
	printf("output (should be K):\n");
	ft_putchar('K');
	printf("\n");
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
}
