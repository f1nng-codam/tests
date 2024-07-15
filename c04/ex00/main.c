/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:06:05 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 16:11:01 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

void	test_00(void)
{
	char	str[] = "Hello, world!";
	int		result;

	result = ft_strlen(str);
	printf("--- EX00 - Test00\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 13)\n", result);
}

void	test_01(void)
{
	char	str[] = "This is another string!";
	int		result;

	result = ft_strlen(str);
	printf("--- EX00 - Test01\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 23)\n", result);
}

int	main(void)
{
	test_00();
	test_01();
}
