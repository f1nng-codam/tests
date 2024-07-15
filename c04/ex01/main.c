/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:32:15 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 16:36:11 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

void	test_00(void)
{
	char	str[] = "Hello, world!";

	printf("--- EX01 - Test00\n");
	printf("output (should be Hello, world!)\n");
	ft_putstr(str);
	printf("\n");
}

void	test_01(void)
{
	char	str[] = "This is another string!";

	printf("--- EX01 - Test01\n");
	printf("output (should be This is another string!)\n");
	ft_putstr(str);
	printf("\n");
}

int	main(void)
{
	test_00();
	test_01();
}
