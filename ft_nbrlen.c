/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:37:59 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:38:02 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(int nombre)
{
	int	counter;

	counter = 0;
	if (nombre == 0)
		return (1);
	while (nombre > 0)
	{
		nombre = nombre / 10;
		counter++;
	}
	return (counter);
}
