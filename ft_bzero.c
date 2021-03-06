/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:46:06 by mberger           #+#    #+#             */
/*   Updated: 2014/11/09 12:36:55 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = s;
	if (n != 0)
	{
		while (n != 0)
		{
			s2[i] = '\0';
			n--;
			i++;
		}
	}
}
