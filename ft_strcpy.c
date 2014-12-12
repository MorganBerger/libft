/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:41:34 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:41:35 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strcpy(char *s1, const char *s2)
{
	size_t				len;
	unsigned int		cmpt;
	char				*fill;

	cmpt = 0;
	fill = s1;
	len = ft_strlen(s2);
	while (cmpt <= len)
	{
		fill[cmpt] = s2[cmpt];
		cmpt++;
	}
	return (s1);
}
