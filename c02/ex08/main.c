/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-der <qvan-der@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:07:36 by qvan-der          #+#    #+#             */
/*   Updated: 2024/07/14 16:10:49 by qvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

void	test_00(void)
{
	char	str[53] = "abcABC";

	printf("--- EX08 - Test00\n");
	printf("str: %s\n", str);
	printf("result: %s (should be abcabc)\n", ft_strlowcase(str));
}

void	test_01(void)
{
	char	str[53] = "Hello world!";

	printf("--- EX08 - Test01\n");
	printf("str: %s\n", str);
	printf("result: %s (should be hello world!)\n", ft_strlowcase(str));
}

int main(void)
{
	test_00();
	test_01();
}
