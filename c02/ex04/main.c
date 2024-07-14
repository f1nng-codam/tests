/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-der <qvan-der@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:33:58 by qvan-der          #+#    #+#             */
/*   Updated: 2024/07/14 15:42:12 by qvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

void	test_00(void)
{
	char	str[53] = "Helloworld";

	printf("--- EX04 - Test00\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 0)\n", ft_str_is_lowercase(str));
}

void	test_01(void)
{
	char	str[53] = "abcdefghijklmnopqrstuvwxyz";

	printf("--- EX04 - Test01\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 1)\n", ft_str_is_lowercase(str));
}

void	test_02(void)
{
	char	str[1] = "";

	printf("--- EX04 - Test02\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 1)\n", ft_str_is_lowercase(str));
}

int main(void)
{
	test_00();
	test_01();
	test_02();
}
