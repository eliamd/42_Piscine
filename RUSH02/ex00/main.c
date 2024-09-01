/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:57:29 by almeddah          #+#    #+#             */
/*   Updated: 2024/08/25 21:29:05 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	check_dict(char *dict_name, int *fd)
{
	*fd = open(dict_name, O_RDONLY);
	if (*fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	return (1);
}

int	check_args(int argc, char **argv, int *fd)
{
	char	*dict_name;
	int		i;

	i = 0;
	dict_name = "numbers.dict";
	if (argc < 2 || argc > 4)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 3)
		dict_name = *(argv++);
	while ((*argv)[i])
	{
		if ((*argv)[i] < '0' || (*argv)[i] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	if (!check_dict(dict_name, fd))
		return (0);
	return (1);
}

void	create_list(int fd, t_list **list_)
{
	int		i;
	char	*line;
	char	**splitted;
	t_list	*list;

	line = "";
	list = *list_;
	while (line != NULL)
	{
		i = 0;
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		splitted = ft_split_(line);
		add_to_list(&list, splitted[0], splitted[1]);
		free(splitted[0]);
		free(splitted[1]);
		free(splitted);
		free(line);
	}
	*list_ = list;
}

int	main(int argc, char **argv)
{
	int		fd;
	t_list	*list;

	list = NULL;
	if (!check_args(argc, ++argv, &fd))
		return (0);
	create_list(fd, &list);
	close(fd);
	if (argc == 3)
		argv++;
	cut_nb(*(argv++), list);
	free_list(list);
	return (0);
}
