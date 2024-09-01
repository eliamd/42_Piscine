/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:25:44 by almeddah          #+#    #+#             */
/*   Updated: 2024/08/25 18:16:19 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_list
{
	char			*content;
	char			*trad;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
int					ft_strlen(const char *s);
void				add_to_stash(t_list **stash, char *buf, int readed);
void				clean_stash(t_list **stash);
t_list				*ft_lst_get_last(t_list *stash);
void				free_stash(t_list *stash);
char				*ft_strncat(char *dest, char *src, unsigned int nb);
char				**ft_split(char *str, char *sep);

#endif
