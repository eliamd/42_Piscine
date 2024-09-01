/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:22:22 by ameddah           #+#    #+#             */
/*   Updated: 2024/08/24 15:27:52 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	new_line(t_list *stash)
{
	int		i;
	t_list	*last;

	if (!stash)
		return (0);
	last = ft_lst_get_last(stash);
	i = 0;
	while (last->content[i])
	{
		if (last->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	read_stash(int fd, t_list **stash, int *readed)
{
	char	*buffer;

	*readed = 1;
	while (!new_line(*stash) && *readed)
	{
		buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (buffer == NULL)
			return ;
		*readed = read(fd, buffer, BUFFER_SIZE);
		if ((!(*stash) && !(*readed)) || *readed <= 0)
		{
			free(buffer);
			return ;
		}
		buffer[*readed] = '\0';
		add_to_stash(stash, buffer, *readed);
		free(buffer);
	}
}

void	create_line(t_list *stash, char **line)
{
	int	i;
	int	len;

	len = 0;
	while (stash)
	{
		i = 0;
		while (stash->content[i])
		{
			if (stash->content[i] == '\n')
			{
				len++;
				break ;
			}
			len++;
			i++;
		}
		stash = stash->next;
	}
	*line = malloc(len + 1);
}

void	extract_line(t_list *stash, char **line)
{
	int	i;
	int	j;

	if (stash == NULL)
		return ;
	create_line(stash, line);
	if (*line == NULL)
		return ;
	j = 0;
	while (stash)
	{
		i = 0;
		while (stash->content[i])
		{
			if (stash->content[i] == '\n')
			{
				(*line)[j++] = stash->content[i];
				break ;
			}
			(*line)[j++] = stash->content[i++];
		}
		stash = stash->next;
	}
	(*line)[j] = '\0';
}

char	*get_next_line(int fd)
{
	static t_list	*stash = NULL;
	char			*line;
	int				readed;

	readed = -1;
	if (fd >= 0 && BUFFER_SIZE > 0)
		read_stash(fd, &stash, &readed);
	if (!stash || readed < 0)
	{
		if (stash != NULL)
			free_stash(stash);
		stash = NULL;
		return (NULL);
	}
	extract_line(stash, &line);
	clean_stash(&stash);
	if (line[0] == '\0')
	{
		free_stash(stash);
		stash = NULL;
		free(line);
		return (NULL);
	}
	return (line);
}

// int main(void)
// {
//     int fd;  // File descriptor

//     // Replace "your_file.txt" with the path to the file you want to read
//     fd = open("read_error.txt", O_RDONLY);
//     if (fd == -1)
//     {
//         perror("Error opening file");
//         return (1);
//     }

//     char *line;

//     // Read lines until the end of the file
//     while ((line = get_next_line(fd)) != NULL)
//     {
//         // Print the line to the standard output
//         printf("%s", line);

//         // Free the memory allocated for the line
//         free(line);
//     }
//     printf("%s", get_next_line(fd));

//     // Close the file descriptor
//     close(fd);

//     return (0);
// }