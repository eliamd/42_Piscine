/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:33:21 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/28 15:33:23 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		divi(int a, int b);
int		mod(int a, int b);

int		ft_atoi(const char *str);

void	ft_putnbr(int nb);

int		ft_strcmp(const char *s1, const char *s2);
