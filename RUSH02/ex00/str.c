/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:06:49 by almeddahn n       #+#    #+#             */
/*   Updated: 2024/08/25 21:01:30 by almeddah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_strncpy_(char *dest, char *str, int n)
{
	int	i;

	i = 0;
	while (str[i] && i < n)
	{
		(dest)[i] = str[i];
		i++;
	}
	(dest)[i] = '\0';
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_strncpy(char **dest, char *str, int n)
{
	int	i;

	i = 0;
	while (str[i] && i < n)
	{
		(*dest)[i] = str[i];
		i++;
	}
	(*dest)[i] = '\0';
}

char	**ft_split_(char *str)
{
	char	**str_sep;
	int		i;

	i = 0;
	str_sep = malloc(sizeof(char *) * 2);
	while (*str && *str == ' ')
		str++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i++;
	str_sep[0] = malloc(sizeof(char) * i + 1);
	ft_strncpy(&str_sep[0], str, i);
	str += i;
	while (*str && *str != ':')
		str++;
	str++;
	i = 0;
	while (*str && *str == ' ')
		str++;
	while (str[i] && str[i] >= 32 && str[i] <= 126)
		i++;
	str_sep[1] = malloc(sizeof(char) * i + 1);
	ft_strncpy(&str_sep[1], str, i);
	return (str_sep);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
