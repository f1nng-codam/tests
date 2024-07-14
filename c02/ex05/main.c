/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-der <qvan-der@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:36:33 by qvan-der          #+#    #+#             */
/*   Updated: 2024/07/14 15:42:16 by qvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

void	test_00(void)
{
	char	str[53] = "Helloworld";

	printf("--- EX05 - Test00\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 0)\n", ft_str_is_uppercase(str));
}

void	test_01(void)
{
	char	str[53] = "HELLOWORLD";

	printf("--- EX05 - Test01\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 1)\n", ft_str_is_uppercase(str));
}

void	test_02(void)
{
	char	str[1] = "";

	printf("--- EX05 - Test02\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 1)\n", ft_str_is_uppercase(str));
}

int main(void)
{
	test_00();
	test_01();
	test_02();
}
