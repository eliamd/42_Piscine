/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-lean <ele-lean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:47:07 by almeddah          #+#    #+#             */
/*   Updated: 2024/08/25 22:02:36 by ele-lean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include "get_next_line/get_next_line.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	**ft_split_(char *str);
char	*ft_strdup(char *src);
void	add_to_list(t_list **stash, char *content, char *trad);
void	cut_nb(char *nb, t_list *dic);
void	ft_strncpy(char **dest, char *str, int n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	ft_strncpy_(char *dest, char *str, int n);
void	print_nb(char *tab, t_list *dic, int *first);
void	print_nb2(char *nb, t_list *dic, int size, int *first);
void	free_list(t_list *stash);

#endif
