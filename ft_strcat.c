/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:40:12 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:40:15 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strcat(char *s1, const char *s2)
{
	size_t				len;
	unsigned int		offset;
	unsigned int		cmpt;
	char				*fill;

	offset = ft_strlen(s1);
	fill = s1;
	len = ft_strlen(s2);
	cmpt = 0;
	while (cmpt + offset <= len + offset)
	{
		fill[cmpt + offset] = s2[cmpt];
		cmpt++;
	}
	fill[cmpt + offset] = '\0';
	return (s1);
}
