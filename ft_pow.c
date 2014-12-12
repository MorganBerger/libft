/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:38:22 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:38:25 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int base, int exp)
{
	int	result;

	result = 1;
	while (exp)
	{
		result *= base;
		exp--;
	}
	return (result);
}
