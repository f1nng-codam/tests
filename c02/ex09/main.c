/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:06:02 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/13 14:11:17 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

void	test_00(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("--- EX09 - Test00\n");
	printf("src: %s\n", str);
	printf("new src: %s (should be Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un)\n", ft_strcapitalize(str));
}

void	test_01(void)
{
	char	str[] = "salut, comMEnt tu VAS ? 42mots quARAnte-deux; ciNQUante+et+un";

	printf("--- EX09 - Test01\n");
	printf("src: %s\n", str);
	printf("new src: %s (should be Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un)\n", ft_strcapitalize(str));
}

int	main(void)
{
	test_00();
	test_01();
}
