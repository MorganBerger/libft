/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:43:28 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:43:31 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char			*fill;

	fill = s1;
	while (n > 0 && *s2 != '\0')
	{
		*fill++ = *s2++;
		--n;
	}
	while (n > 0)
	{
		*fill++ = '\0';
		--n;
	}
	return (s1);
}
