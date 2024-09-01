/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 09:57:55 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/11 14:20:27 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	n = n - 1;
	while (*s1 && (*s1 == *s2) && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *s1 = "Hello";
// 	char *s2 = "Hellz";

// 	int result = ft_strncmp(s1, s2, 3);
// 	int vresult = strncmp(s1, s2, 4);
// 	printf("RE resultat %d \n", result);
// 	printf("VF resultat %d", vresult);
// }
