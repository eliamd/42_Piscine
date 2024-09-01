/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:49:46 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/28 18:03:22 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		n;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		n = 1;
		while (n < argc - 1)
		{
			if (ft_strcmp(argv[n], argv[n + 1]) > 0)
			{
				temp = argv[n + 1];
				argv[n + 1] = argv[n];
				argv[n] = temp;
			}
			n++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
