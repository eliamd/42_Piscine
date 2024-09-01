/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:56:37 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/11 09:55:40 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *s1 = "Hel";
// 	char *s2 = "Hel";

// 	int result = ft_strcmp(s1, s2);
// 	int vresult = strcmp(s1, s2);
// 	printf("RE resultat %d \n", result);
// 	printf("VF resultat %d", vresult);
// }
