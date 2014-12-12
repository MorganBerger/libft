/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:44:45 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:44:46 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *s1, const char *s2)
{
	char		*s1_;
	char		*s2_;
	int			l;

	s1_ = (char *)s1;
	s2_ = (char *)s2;
	l = ft_strlen(s2_);
	while (*s1_ != '\0')
	{
		if (ft_strncmp(s1_, s2_, l) == 0)
			return (s1_);
		s1_++;
	}
	return (NULL);
}
