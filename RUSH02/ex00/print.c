/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:28:07 by ele-lean          #+#    #+#             */
/*   Updated: 2024/08/25 22:02:42 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_nb2(char *nb, t_list *dic, int size, int *first)
{
	t_list	*temp;

	temp = NULL;
	if (size > 3 && ft_strncmp(nb, "000", 4))
	{
		while (dic)
		{
			if (!temp || (ft_strlen(temp->content) < ft_strlen(dic->content)
					&& ft_strlen(dic->content) <= size))
				temp = dic;
			dic = dic->next;
		}
		if (!*first)
			write(1, " ", 1);
		*first = 0;
		write(1, temp->trad, ft_strlen(temp->trad));
	}
}

void	print_hundreds(t_list *dic, char *tab, int *first)
{
	t_list	*dic_;

	dic_ = dic;
	while (dic)
	{
		if (!ft_strncmp(dic->content, tab, 1) && !dic->content[1])
		{
			if (!*first)
				write(1, " ", 1);
			*first = 0;
			write(1, dic->trad, ft_strlen(dic->trad));
			dic = dic_;
			while (ft_strncmp(dic->content, "100", 3))
				dic = dic->next;
			if (!*first)
				write(1, " ", 1);
			*first = 0;
			write(1, dic->trad, ft_strlen(dic->trad));
			break ;
		}
		dic = dic->next;
	}
	dic = dic_;
}

void	print_dozens(char *tab, t_list *dic, int *first)
{
	if (tab[1] != '0')
	{
		while (dic)
		{
			if (!ft_strncmp(dic->content, &tab[1], 1) && dic->content[1] == '0'
				&& dic->content[2] == '\0')
			{
				if (!*first)
					write(1, " ", 1);
				*first = 0;
				write(1, dic->trad, ft_strlen(dic->trad));
			}
			dic = dic->next;
		}
	}
}

void	print_units(char *tab, t_list *dic, int *first)
{
	if (tab[2] != '0')
	{
		while (dic)
		{
			if (!ft_strncmp(dic->content, &tab[2], 1)
				&& dic->content[1] == '\0')
			{
				if (!*first)
					write(1, " ", 1);
				*first = 0;
				write(1, dic->trad, ft_strlen(dic->trad));
			}
			dic = dic->next;
		}
	}
}

void	print_nb(char *tab, t_list *dic, int *first)
{
	t_list	*dic_;

	dic_ = dic;
	if (tab[0] != '0')
		print_hundreds(dic, tab, first);
	if (tab[1] == '1')
	{
		while (dic)
		{
			if (!ft_strncmp(dic->content, &tab[1], 3))
			{
				if (!*first)
					write(1, " ", 1);
				*first = 0;
				write(1, dic->trad, ft_strlen(dic->trad));
			}
			dic = dic->next;
		}
	}
	else
	{
		print_dozens(tab, dic, first);
		print_units(tab, dic, first);
	}
}
