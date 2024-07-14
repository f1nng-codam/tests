/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-der <qvan-der@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:40:40 by qvan-der          #+#    #+#             */
/*   Updated: 2024/07/14 15:55:20 by qvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

void	test_00(void)
{
	char	str[53] = "\n";

	printf("--- EX06 - Test00\n");
	printf("str: %s", str);
	printf("result: %d (should be 0)\n", ft_str_is_printable(str));
}

void	test_01(void)
{
	char	str[53] = "Hello world!";

	printf("--- EX06 - Test01\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 1)\n", ft_str_is_printable(str));
}

void	test_02(void)
{
	char	str[1] = "";

	printf("--- EX06 - Test02\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 1)\n", ft_str_is_printable(str));
}

int main(void)
{
	test_00();
	test_01();
	test_02();
}
