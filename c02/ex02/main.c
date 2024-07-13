/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:49:08 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/13 12:54:23 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

void	test_00(void)
{
	char	str[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("--- EX02 - Test00\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 1)\n", ft_str_is_alpha(str));
}

void	test_01(void)
{
	char	str[53] = "Hello, world!";

	printf("--- EX02 - Test01\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 0)\n", ft_str_is_alpha(str));
}

int	main(void)
{
	test_00();
	test_01();
}
