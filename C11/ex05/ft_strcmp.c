/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:33:09 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/28 15:33:10 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*int main(void)
{
	char a[] = "abcd";
	char b[] = "abcdef";
	char c[] = "";
	printf("\n%d", ft_strcmp(a, b));
	printf("\n%d", ft_strcmp(b, a));
	printf("\n%d", ft_strcmp(a, c));
	printf("\n%d", ft_strcmp(c, a));
	printf("\n%d", ft_strcmp(c, c));
}*/
