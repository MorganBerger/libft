/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:40:54 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:40:55 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	char		to_find;
	char		*found;
	int			count;

	to_find = c;
	found = NULL;
	count = 0;
	while (s[count] != '\0' && found == NULL)
	{
		if (s[count] == to_find)
			found = (char *)(s + count);
		count++;
	}
	if (s[count] == to_find && found == NULL)
		found = (char *)(s + count);
	return (found);
}
