/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:44:46 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/15 12:28:50 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

void	test_00(void)
{
	char	str[] = "   ---+--+1234ab567";

	int	result = ft_atoi(str);
	printf("--- EX03 - Test00\n");
	printf("str: %s\n", str);
	printf("result: %d (should be -1234)\n", result);
}

void	test_01(void)
{
	char	str[] = "   --+--+1234ab567";

	int	result = ft_atoi(str);
	printf("--- EX03 - Test01\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 1234)\n", result);
}

void	test_02(void)
{
	char	str[] = "   --+--+ab567";

	int	result = ft_atoi(str);
	printf("--- EX03 - Test02\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 0)\n", result);
}

void	test_03(void)
{
	char	str[] = "--+---+1234ab567";

	int	result = ft_atoi(str);
	printf("--- EX03 - Test03\n");
	printf("str: %s\n", str);
	printf("result: %d (should be -1234)\n", result);
}

void	test_04(void)
{
	char	str[] = "1234ab567";

	int	result = ft_atoi(str);
	printf("--- EX03 - Test04\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 1234)\n", result);
}

void	test_05(void)
{
	char	str[] = "ab567";

	int	result = ft_atoi(str);
	printf("--- EX03 - Test05\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 0)\n", result);
}

void	test_06(void)
{
	char	str[] = "";

	int	result = ft_atoi(str);
	printf("--- EX03 - Test06\n");
	printf("str: %s\n", str);
	printf("result: %d (should be 0)\n", result);
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
