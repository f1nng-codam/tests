/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:39:47 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 09:41:26 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

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
	int	tab[] = {3, 5, 2, 1, 4};
	int	size = 5;

	printf("--- EX08 - Test00\n");
	printf("tab before:\n");
	ft_puttab(tab, size);
	printf("\n");
	ft_sort_int_tab(tab, size);
	printf("tab after:\n");
	ft_puttab(tab, size);
	printf("\n");
}

void	test_01(void)
{
	int	tab[] = {8, 4, 7, 2, 1, 10, 9, 3, 6, 5};
	int	size = 10;

	printf("--- EX08 - Test01\n");
	printf("tab before:\n");
	ft_puttab(tab, size);
	printf("\n");
	ft_sort_int_tab(tab, size);
	printf("tab after:\n");
	ft_puttab(tab, size);
	printf("\n");
}

int	main(void)
{
	test_00();
	test_01();
}
