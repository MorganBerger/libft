/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:37:39 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:37:40 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *s1, const void *s2, size_t n)
{
	char			*dp;
	const char		*sp;

	sp = s2;
	dp = s1;
	if (s1 <= s2)
		return (ft_memcpy(s1, s2, n));
	sp += n;
	dp += n;
	while (n--)
		*--dp = *--sp;
	return (s1);
}
