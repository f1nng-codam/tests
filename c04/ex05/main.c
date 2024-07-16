/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:44:46 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/16 12:43:39 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

void	test_00(void)
{
	char	*str;
	char	*base;

	str = "2A";
	base = "0123456789ABCDEF";
	int	result = ft_atoi_base(str, base);
	printf("--- EX05 - Test00\n");
	printf("str: %s\n", str);
	printf("base: %s\n", base);
	printf("result: %d (should be 42)\n", result);
}

void	test_01(void)
{
	char	*str;
	char	*base;

	str = "3039";
	base = "0123456789ABCDEF";
	int	result = ft_atoi_base(str, base);
	printf("--- EX05 - Test01\n");
	printf("str: %s\n", str);
	printf("base: %s\n", base);
	printf("result: %d (should be 12345)\n", result);
}

void	test_02(void)
{
	char	*str;
	char	*base;

	str = "-2A";
	base = "0123456789ABCDEF";
	int	result = ft_atoi_base(str, base);
	printf("--- EX05 - Test02\n");
	printf("str: %s\n", str);
	printf("base: %s\n", base);
	printf("result: %d (should be -42)\n", result);
}

void	test_03(void)
{
	char	*str;
	char	*base;

	str = "-3039";
	base = "0123456789ABCDEF";
	int	result = ft_atoi_base(str, base);
	printf("--- EX05 - Test03\n");
	printf("str: %s\n", str);
	printf("base: %s\n", base);
	printf("result: %d (should be -12345)\n", result);
}

void	test_04(void)
{
	char	*str;
	char	*base;

	str = "42";
	base = "0123456789";
	int	result = ft_atoi_base(str, base);
	printf("--- EX05 - Test04\n");
	printf("str: %s\n", str);
	printf("base: %s\n", base);
	printf("result: %d (should be 42)\n", result);
}

void	test_05(void)
{
	char	*str;
	char	*base;

	str = "101010";
	base = "01";
	int	result = ft_atoi_base(str, base);
	printf("--- EX05 - Test05\n");
	printf("str: %s\n", str);
	printf("base: %s\n", base);
	printf("result: %d (should be 42)\n", result);
}

void	test_06(void)
{
	char	*str;
	char	*base;

	str = "vn";
	base = "poneyvif";
	int	result = ft_atoi_base(str, base);
	printf("--- EX05 - Test06\n");
	printf("str: %s\n", str);
	printf("base: %s\n", base);
	printf("result: %d (should be 42)\n", result);
}

int	main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
	test_06();
}
