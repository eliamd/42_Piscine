/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:36:07 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/29 13:19:03 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_putstr(char *str)
{
	int	length;

	length = ft_strlen(str);
	write(1, str, length);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

// char	*ft_strdup(char *src)
// {
// 	char	*dup;
// 	int		i;

// 	i = 0;
// 	while (src[i])
// 		i++;
// 	dup = malloc((i + 1) * sizeof(char));
// 	if (!dup)
// 		return (NULL);
// 	i = 0;
// 	while (src[i])
// 	{
// 		dup[i] = src[i];
// 		i++;
// 	}
// 	dup[i] = '\0';
// 	return (dup);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	t_stock_str	*tab;
// 	int			i;

// 	tab = malloc((ac + 1) * sizeof(t_stock_str));
// 	if (!tab)
// 		return (NULL);
// 	i = 0;
// 	while (i < ac)
// 	{
// 		tab[i].size = ft_strlen(av[i]);
// 		tab[i].str = av[i];
// 		tab[i].copy = ft_strdup(av[i]);
// 		i++;
// 	}
// 	tab[i].str = 0;
// 	return (tab);
// }

// int	main(void)
// {
// 	char				*strs[] = {"Hello", "World", "42", "hehe"};
// 	int					size = 4;
// 	struct s_stock_str	*tab;

// 	tab = ft_strs_to_tab(size, strs);
// 	ft_show_tab(tab);
// 	for (int i = 0; i < size; i++)
// 	{
// 		free(tab[i].copy);
// 	}
// 	free(tab);
// 	return 0;
// }
