/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:32:33 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/23 09:27:46 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void	test_00(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "-80000000";
	base_from = "0123456789ABCDEF";
	base_to = "0123456789";
	printf("--- EX04 - Test00\n");
	printf("nbr: %s\n", nbr);
	printf("base_from: %s\n", base_from);
	printf("base_to: %s\n", base_to);
	printf("result: %s\n", ft_convert_base(nbr, base_from, base_to));
}

void	test_01(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "7FFFFFFF";
	base_from = "0123456789ABCDEF";
	base_to = "0123456789";
	printf("--- EX04 - Test01\n");
	printf("nbr: %s\n", nbr);
	printf("base_from: %s\n", base_from);
	printf("base_to: %s\n", base_to);
	printf("result: %s\n", ft_convert_base(nbr, base_from, base_to));
}

void	test_02(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "-2A";
	base_from = "0123456789ABCDEF";
	base_to = "0123456789";
	printf("--- EX04 - Test02\n");
	printf("nbr: %s\n", nbr);
	printf("base_from: %s\n", base_from);
	printf("base_to: %s\n", base_to);
	printf("result: %s\n", ft_convert_base(nbr, base_from, base_to));
}

void	test_03(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "++--+-2A";
	base_from = "0123456789ABCDEF";
	base_to = "0123456789";
	printf("--- EX04 - Test03\n");
	printf("nbr: %s\n", nbr);
	printf("base_from: %s\n", base_from);
	printf("base_to: %s\n", base_to);
	printf("result: %s\n", ft_convert_base(nbr, base_from, base_to));
}

void	test_04(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "++-+-2A";
	base_from = "0123456789ABCDEF";
	base_to = "0123456789";
	printf("--- EX04 - Test04\n");
	printf("nbr: %s\n", nbr);
	printf("base_from: %s\n", base_from);
	printf("base_to: %s\n", base_to);
	printf("result: %s\n", ft_convert_base(nbr, base_from, base_to));
}

void	test_05(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "++-+-2AGA";
	base_from = "0123456789ABCDEF";
	base_to = "01";
	printf("--- EX04 - Test05\n");
	printf("nbr: %s\n", nbr);
	printf("base_from: %s\n", base_from);
	printf("base_to: %s\n", base_to);
	printf("result: %s\n", ft_convert_base(nbr, base_from, base_to));
}

void	test_06(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "++-+-2AGA";
	base_from = "0123456789+-ABCDEF";
	base_to = "01";
	printf("--- EX04 - Test06\n");
	printf("nbr: %s\n", nbr);
	printf("base_from: %s\n", base_from);
	printf("base_to: %s\n", base_to);
	printf("result: %s\n", ft_convert_base(nbr, base_from, base_to));
}

void	test_07(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "++-+-2AGA";
	base_from = "01";
	base_to = "0123456789ABCCDEF";
	printf("--- EX04 - Test07\n");
	printf("nbr: %s\n", nbr);
	printf("base_from: %s\n", base_from);
	printf("base_to: %s\n", base_to);
	printf("result: %s\n", ft_convert_base(nbr, base_from, base_to));
}

void	test_08(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "++-+-2AGA";
	base_from = "";
	base_to = "01";
	printf("--- EX04 - Test08\n");
	printf("nbr: %s\n", nbr);
	printf("base_from: %s\n", base_from);
	printf("base_to: %s\n", base_to);
	printf("result: %s\n", ft_convert_base(nbr, base_from, base_to));
}

void	test_09(void)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	nbr = "++-+-2AGA";
	base_from = "01";
	base_to = "1";
	printf("--- EX04 - Test09\n");
	printf("nbr: %s\n", nbr);
	printf("base_from: %s\n", base_from);
	printf("base_to: %s\n", base_to);
	printf("result: %s\n", ft_convert_base(nbr, base_from, base_to));
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
	test_09();
}
