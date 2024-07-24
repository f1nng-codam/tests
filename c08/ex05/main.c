/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgroenew <fgroenew@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:30:34 by fgroenew          #+#    #+#             */
/*   Updated: 2024/07/23 14:31:46 by fgroenew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(ft_strlen(src) * sizeof(char));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (0);
	i = 0;
	while (i < ac)
	{
		arr[i].str = av[i];
		arr[i].copy = ft_strcpy(av[i]);
		arr[i].size = ft_strlen(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}

void	ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	t_stock_str	*arr = ft_strs_to_tab(argc, argv);

	ft_show_tab(arr);
}
