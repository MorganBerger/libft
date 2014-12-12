/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:37:15 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:37:16 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				diff;
	unsigned int	counter;
	int				stop;
	char			*s1_;
	char			*s2_;

	diff = 0;
	stop = 0;
	counter = 0;
	s1_ = (char *)s1;
	s2_ = (char *)s2;
	while (counter < n && !stop)
	{
		diff += (s1_[counter] - s2_[counter]);
		if (s2_[counter] != s1_[counter])
			stop = 1;
		counter++;
	}
	return (diff);
}
