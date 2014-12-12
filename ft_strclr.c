/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:40:58 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:41:00 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	int	length;
	int	counter;

	counter = 0;
	length = ft_strlen(s);
	while (counter < length)
	{
		*s = '\0';
		s++;
		counter++;
	}
}
