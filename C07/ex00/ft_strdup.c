/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:13:33 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/19 18:03:39 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*strduped;
	int		i;
	int		length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	strduped = malloc((length + 1) * sizeof(char));
	i = 0;
	while (i < length)
	{
		strduped[i] = src[i];
		i++;
	}
	strduped[i] = '\0';
	return (strduped);
}

// int	main(void)
// {
// 	char	*src = "Hello, world!";
// 	char	*duplicated;

// 	duplicated = ft_strdup(src);
// 	printf("Chaîne source : %s\n", src);
// 	printf("Chaîne dupliquée : %s\n", duplicated);
// 	free(duplicated);
// 	return (0);
// }
