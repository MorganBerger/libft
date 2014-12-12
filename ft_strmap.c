/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:42:49 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:42:50 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	int			len;
	int			counter;
	char		*new_str;

	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	len = ft_strlen(s);
	new_str = ft_strnew(len);
	counter = 0;
	while (counter < len)
	{
		new_str[counter] = (*f)(s[counter]);
		counter++;
	}
	return (new_str);
}
