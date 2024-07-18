/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:08:33 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/18 09:12:47 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	test_00(void)
{
	int	nbr;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;


	nbr = 10;
	ptr1 = &nbr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	printf("--- EX01 - Test00\n");
	printf("nbr before: %d (should be 10)\n", nbr);
	ft_ultimate_ft(&ptr8);
	printf("nbr after: %d (should be 42)\n", nbr);
}

void	test_01(void)
{
	int	nbr;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;


	nbr = 5;
	ptr1 = &nbr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	printf("--- EX01 - Test01\n");
	printf("nbr before: %d (should be 5)\n", nbr);
	ft_ultimate_ft(&ptr8);
	printf("nbr after: %d (should be 42)\n", nbr);
}

int	main(void)
{
	test_00();
	test_01();
}
