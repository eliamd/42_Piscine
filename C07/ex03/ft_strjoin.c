/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:58:47 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/21 10:16:52 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_compute_total_length(int size, char **strs, char *sep)
{
	int	tabindex;
	int	intabindex;
	int	length;
	int	sep_length;

	tabindex = 0;
	length = 0;
	sep_length = 0;
	while (sep[sep_length] != '\0')
		sep_length++;
	while (tabindex < size)
	{
		intabindex = 0;
		while (strs[tabindex][intabindex] != '\0')
		{
			length++;
			intabindex++;
		}
		tabindex++;
	}
	length = length + sep_length * (size - 1);
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tabindex;
	char	*strreturn;
	int		nbchar;

	if (size == 0)
	{
		strreturn = (char *)malloc(1);
		if (strreturn)
			strreturn[0] = '\0';
		return (strreturn);
	}
	nbchar = ft_compute_total_length(size, strs, sep);
	strreturn = malloc(nbchar + 1 * sizeof(char));
	if (!strreturn)
		return (NULL);
	strreturn[0] = '\0';
	tabindex = 0;
	while (tabindex < size)
	{
		ft_strcat(strreturn, strs[tabindex]);
		if (tabindex < size - 1)
			ft_strcat(strreturn, sep);
		tabindex++;
	}
	return (strreturn);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	char *strs[] = {"Hello", "World", "from", "ft_strjoin"};
// 	int size = 4;
// 	char *sep = "1234567891111111111111111111";
// 	char *result;
// 	result = ft_strjoin(size, strs, sep);
// 	if (result == NULL)
// 	{
// 		fprintf(stderr, "Memory allocation failed\n");
// 		return 1;
// 	}
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return 0;
// }
