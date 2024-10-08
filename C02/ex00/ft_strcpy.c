/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:19:08 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/09 12:10:17 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = -1;
	while (src[++n])
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
