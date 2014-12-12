/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchartrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:40:47 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:40:49 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strchartrim(char const *s, char ch)
{
	int					d;
	int					trim_start;
	unsigned int		c;
	char				*new_str;

	d = 0;
	c = 0;
	trim_start = 0;
	new_str = ft_strnew(ft_strlen (s) + 1);
	while (c < ft_strlen (s))
	{
		if (!trim_start && s[c] == ch)
			c++;
		else
		{
			trim_start = 1;
			new_str[d++] = s[c++];
		}
	}
	while (new_str[--d] == ch)
		new_str[d] = '\0';
	return (new_str);
}
