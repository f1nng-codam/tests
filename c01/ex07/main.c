/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:33:16 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 09:39:06 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_puttab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

void	test_00(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = 5;

	printf("--- EX07 - Test00\n");
	printf("tab before:\n");
	ft_puttab(tab, size);
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("tab after:\n");
	ft_puttab(tab, size);
	printf("\n");
}

void	test_01(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	size = 10;

	printf("--- EX07 - Test01\n");
	printf("tab before:\n");
	ft_puttab(tab, size);
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("tab after:\n");
	ft_puttab(tab, size);
	printf("\n");
}

int	main(void)
{
	test_00();
	test_01();
}
