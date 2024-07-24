/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:08:24 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/24 13:33:01 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	printf("result (from -5): %d\n", ABS(-5));
	printf("result (from -10): %d\n", ABS(-10));
	printf("result (from 0): %d\n", ABS(0));
	printf("result (from 5): %d\n", ABS(5));
	printf("result (from 42): %d\n", ABS(42));
}
