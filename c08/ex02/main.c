/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:08:24 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/23 11:12:40 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = -5;
	b = -10;
	c = 5;
	d = 10;
	ABS(&a);
	ABS(&b);
	ABS(&c);
	ABS(&d);
	printf("result: %d\n", a);
	printf("result: %d\n", b);
	printf("result: %d\n", c);
	printf("result: %d\n", d);
}
