/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:33:53 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/14 12:44:39 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void	test_00(void)
{
	char	str1[] = "abcd";
	char	str2[] = "abef";
	int		n = 4;

	int		result = ft_strncmp(str1, str2, n);
	int		result2 = strncmp(str1, str2, n);
	printf("--- EX00 - Test00\n");
	printf("s1: %s\n", str1);
	printf("s2: %s\n", str2);
	printf("n: %d\n", n);
	printf("result: %d\n", result);
	printf("string.h result: %d\n", result2);
}

void	test_01(void)
{
	char	str1[] = "wxyz";
	char	str2[] = "wxij";
	int		n = 4;

	int		result = ft_strncmp(str1, str2, n);
	int		result2 = strncmp(str1, str2, n);
	printf("--- EX00 - Test01\n");
	printf("s1: %s\n", str1);
	printf("s2: %s\n", str2);
	printf("n: %d\n", n);
	printf("result: %d\n", result);
	printf("string.h result: %d\n", result2);
}

void	test_02(void)
{
	char	str1[] = "klmn";
	char	str2[] = "klmn";
	int		n = 4;

	int		result = ft_strncmp(str1, str2, n);
	int		result2 = strncmp(str1, str2, n);
	printf("--- EX00 - Test02\n");
	printf("s1: %s\n", str1);
	printf("s2: %s\n", str2);
	printf("n: %d\n", n);
	printf("result: %d\n", result);
	printf("string.h result: %d\n", result2);
}

void	test_03(void)
{
	char	str1[] = "klmn";
	char	str2[] = "klhi";
	int		n = 2;

	int		result = ft_strncmp(str1, str2, n);
	int		result2 = strncmp(str1, str2, n);
	printf("--- EX00 - Test03\n");
	printf("s1: %s\n", str1);
	printf("s2: %s\n", str2);
	printf("n: %d\n", n);
	printf("result: %d\n", result);
	printf("string.h result: %d\n", result2);
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
}
