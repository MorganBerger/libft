/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:36:58 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:37:05 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	counter;
	char			*found;
	char			*driver;

	counter = 0;
	driver = (char *)s;
	found = NULL;
	while (found == NULL && counter < n)
	{
		if (driver[counter] == c)
			found = &(driver[counter]);
		counter++;
	}
	return (found);
}
