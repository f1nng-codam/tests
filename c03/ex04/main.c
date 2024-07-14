/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:33:53 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 15:29:53 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

void	test_00(void)
{
	char	str[] = "Hello, world!";
	char	to_find[] = "wor";

	printf("--- EX04 - Test00\n");
	printf("str: %s\n", str);
	printf("to_find: %s\n", to_find);
	printf("result: %s\n", ft_strstr(str, to_find));
	printf("string.h result: %s\n", strstr(str, to_find));
}

void	test_01(void)
{
	char	str[] = "Hello, world!";
	char	to_find[] = "test";

	printf("--- EX04 - Test01\n");
	printf("str: %s\n", str);
	printf("to_find: %s\n", to_find);
	printf("result: %s\n", ft_strstr(str, to_find));
	printf("string.h result: %s\n", strstr(str, to_find));
}

int	main(void)
{
	test_00();
	test_01();
}
