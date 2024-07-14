/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:33:53 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 12:38:42 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

void	test_00(void)
{
	char	str1[] = "abcd";
	char	str2[] = "abef";

	int		result = ft_strcmp(str1, str2);
	int		result2 = strcmp(str1, str2);
	printf("--- EX00 - Test00\n");
	printf("s1: %s\n", str1);
	printf("s2: %s\n", str2);
	printf("result: %d\n", result);
	printf("string.h result: %d\n", result2);
}

void	test_01(void)
{
	char	str1[] = "wxyz";
	char	str2[] = "wxij";

	int		result = ft_strcmp(str1, str2);
	int		result2 = strcmp(str1, str2);
	printf("--- EX00 - Test01\n");
	printf("s1: %s\n", str1);
	printf("s2: %s\n", str2);
	printf("result: %d\n", result);
	printf("string.h result: %d\n", result2);
}

void	test_02(void)
{
	char	str1[] = "klmn";
	char	str2[] = "klmn";

	int		result = ft_strcmp(str1, str2);
	int		result2 = strcmp(str1, str2);
	printf("--- EX00 - Test02\n");
	printf("s1: %s\n", str1);
	printf("s2: %s\n", str2);
	printf("result: %d\n", result);
	printf("string.h result: %d\n", result2);
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
}
