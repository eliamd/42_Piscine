/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:26:53 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/11 16:00:12 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// #include <stdio.h>

// int main(void)
// {
//     char dest[50] = "Hello, ";
//     const char *src = "world!";

//     printf("av: %s\n", dest);
//     ft_strcat(dest, src);
//     printf("ap: %s\n", dest);
//     return 0;
// }
