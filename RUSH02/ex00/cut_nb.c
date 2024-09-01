/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_nb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:02:35 by almeddah          #+#    #+#             */
/*   Updated: 2024/08/25 22:02:24 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	checks(char *nb, t_list *dic, int size)
{
	while (*nb == '0')
		nb++;
	if (!*nb)
	{
		while (dic)
		{
			if (!ft_strncmp(dic->content, "0", 2))
				write(1, dic->trad, ft_strlen(dic->trad));
			dic = dic->next;
		}
		return (0);
	}
	while (dic)
	{
		if (ft_strlen(dic->content) + 2 >= size)
			return (1);
		dic = dic->next;
	}
	write(1, "Dict Error\n", 11);
	return (0);
}

void	cut_nb(char *nb, t_list *dic)
{
	int		size;
	int		mod;
	int		i;
	int		first;
	char	tab[4];

	first = 1;
	size = ft_strlen(nb);
	if (!checks(nb, dic, size))
		return ;
	while (size > 0)
	{
		mod = size % 3;
		i = 0;
		if (mod == 0)
			mod = 3;
		while (i < 3 - mod)
			tab[i++] = '0';
		ft_strncpy_(&tab[i], nb, mod);
		print_nb(tab, dic, &first);
		print_nb2(tab, dic, size, &first);
		size -= mod;
		nb += mod;
	}
}
