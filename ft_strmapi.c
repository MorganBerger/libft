/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 18:57:18 by mberger           #+#    #+#             */
/*   Updated: 2016/03/09 14:18:48 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s1;
	char			*save;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	s1 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s1 == NULL)
		return (NULL);
	save = s1;
	while (*s != '\0')
	{
		*save = (*f)(i, *s);
		save++;
		s++;
		i++;
	}
	*save = '\0';
	return (s1);
}
