/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:36:07 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/29 13:19:04 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dup = malloc((i + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

// int	main(void)
// {
// 	char				*strs[] = {"Hello", "World", "42", "hehe"};
// 	int					size = 4;
// 	struct s_stock_str	*tab;
// 	int					i = 0;

// 	tab = ft_strs_to_tab(size, strs);
// 	while (tab[i].str != 0)
// 	{
// 		printf("Size: %d\n", tab[i].size);
// 		printf("Str: %s\n", tab[i].str);
// 		printf("Copy: %s\n", tab[i].copy);
// 		printf("\n");
// 		i++;
// 	}
// 	for (int i = 0; i < size; i++)
// 	{
// 		free(tab[i].copy);
// 	}
// 	free(tab);
// 	return 0;
// }
