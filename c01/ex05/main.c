/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:25:52 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 09:29:40 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

void	test_00(void)
{
	char	*str;

	str = "Hello, world!";
	printf("--- EX05 - Test00\n");
	printf("output (should be Hello, world!)\n");
	ft_putstr(str);
	printf("\n");
}

void	test_01(void)
{
	char	*str;

	str = "ThiS iS aNoTHer Str1ng!";
	printf("--- EX05 - Test01\n");
	printf("output (should be ThiS iS aNoTHer Str1ng!)\n");
	ft_putstr(str);
	printf("\n");
}

int	main(void)
{
	test_00();
	test_01();
}
