/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:41:45 by almeddah          #+#    #+#             */
/*   Updated: 2024/08/25 21:28:25 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	add_to_list(t_list **stash, char *content, char *trad)
{
	t_list	*last;
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return ;
	new_node->next = NULL;
	new_node->content = ft_strdup(content);
	new_node->trad = ft_strdup(trad);
	if (*stash == NULL)
	{
		*stash = new_node;
		return ;
	}
	last = ft_lst_get_last(*stash);
	last->next = new_node;
}

void	free_list(t_list *stash)
{
	t_list	*node;
	t_list	*next;

	node = stash;
	while (node)
	{
		free(node->content);
		free(node->trad);
		next = node->next;
		free(node);
		node = next;
	}
}
