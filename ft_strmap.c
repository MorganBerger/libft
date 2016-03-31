/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 12:07:58 by mberger           #+#    #+#             */
/*   Updated: 2016/03/09 14:18:39 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*s1;
	char			*save;

	if (s == NULL)
		return (NULL);
	s1 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s1 == NULL)
		return (NULL);
	save = s1;
	while (*s != '\0')
	{
		*save = (*f)(*s);
		save++;
		s++;
	}
	*save = '\0';
	return (s1);
}
