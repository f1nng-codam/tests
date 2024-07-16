/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:41:16 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/15 16:00:08 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

void	test_00(void)
{
	int		nbr;
	char	*base;

	nbr = 42;
	base = "0123456789";
	printf("--- EX04 - Test00\n");
	printf("nbr: %d\n", nbr);
	printf("base: %s\n", base);
	printf("output (should be 42)\n");
	ft_putnbr_base(nbr, base);
	printf("\n");
}

void	test_01(void)
{
	int		nbr;
	char	*base;

	nbr = 42321;
	base = "0123456789";
	printf("--- EX04 - Test01\n");
	printf("nbr: %d\n", nbr);
	printf("base: %s\n", base);
	printf("output (should be 42321)\n");
	ft_putnbr_base(nbr, base);
	printf("\n");
}

void	test_02(void)
{
	int		nbr;
	char	*base;

	nbr = -42;
	base = "0123456789";
	printf("--- EX04 - Test02\n");
	printf("nbr: %d\n", nbr);
	printf("base: %s\n", base);
	printf("output (should be -42)\n");
	ft_putnbr_base(nbr, base);
	printf("\n");
}

void	test_03(void)
{
	int		nbr;
	char	*base;

	nbr = -42321;
	base = "0123456789";
	printf("--- EX04 - Test03\n");
	printf("nbr: %d\n", nbr);
	printf("base: %s\n", base);
	printf("output (should be -42321)\n");
	ft_putnbr_base(nbr, base);
	printf("\n");
}

void	test_04(void)
{
	int		nbr;
	char	*base;

	nbr = 0;
	base = "0123456789";
	printf("--- EX04 - Test04\n");
	printf("nbr: %d\n", nbr);
	printf("base: %s\n", base);
	printf("output (should be 0)\n");
	ft_putnbr_base(nbr, base);
	printf("\n");
}

void	test_05(void)
{
	int		nbr;
	char	*base;

	nbr = 42;
	base = "01";
	printf("--- EX04 - Test05\n");
	printf("nbr: %d\n", nbr);
	printf("base: %s\n", base);
	printf("output (should be 101010)\n");
	ft_putnbr_base(nbr, base);
	printf("\n");
}

void	test_06(void)
{
	int		nbr;
	char	*base;

	nbr = -42;
	base = "01";
	printf("--- EX04 - Test06\n");
	printf("nbr: %d\n", nbr);
	printf("base: %s\n", base);
	printf("output (should be -101010)\n");
	ft_putnbr_base(nbr, base);
	printf("\n");
}

void	test_07(void)
{
	int		nbr;
	char	*base;

	nbr = 42;
	base = "0123456789ABCDEF";
	printf("--- EX04 - Test07\n");
	printf("nbr: %d\n", nbr);
	printf("base: %s\n", base);
	printf("output (should be 2A)\n");
	ft_putnbr_base(nbr, base);
	printf("\n");
}

void	test_08(void)
{
	int		nbr;
	char	*base;

	nbr = 42;
	base = "poneyvif";
	printf("--- EX04 - Test08\n");
	printf("nbr: %d\n", nbr);
	printf("base: %s\n", base);
	printf("output (should be vn)\n");
	ft_putnbr_base(nbr, base);
	printf("\n");
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
	test_07();
	test_08();
}
