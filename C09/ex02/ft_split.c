/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:25:10 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/25 12:36:21 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strisdel(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

void	ft_strlcpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	while (str[i])
	{
		k = 0;
		while (str[i] && ft_strisdel(charset, str[i]))
			i++;
		while (str[i + k] && !ft_strisdel(charset, str[i + k]))
			k++;
		if (k)
		{
			tab[j] = malloc(sizeof(char) * (k + 1));
			ft_strlcpy(tab[j], str + i, k + 1);
			j++;
		}
		i += k;
	}
	tab[j] = 0;
	return (tab);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**tab;
// 	int		i;

// 	tab = ft_split("Hel?lo World", "l");
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
