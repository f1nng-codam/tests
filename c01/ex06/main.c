/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:29:04 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 09:32:07 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

void	test_00(void)
{
	char	*str;

	str = "Hello, world!";
	printf("--- EX06 - Test00\n");
	printf("str: %s\n", str);
	printf("output: %d (should be 13)\n", ft_strlen(str));
}

void	test_01(void)
{
	char	*str;

	str = "This is another string.";
	printf("--- EX06 - Test01\n");
	printf("str: %s\n", str);
	printf("output: %d (should be 23)\n", ft_strlen(str));
}

void	test_02(void)
{
	char	*str;

	str = "And even another string to test the function.";
	printf("--- EX06 - Test02\n");
	printf("str: %s\n", str);
	printf("output: %d (should be 45)\n", ft_strlen(str));
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
}
