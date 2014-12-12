/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:32:44 by mberger           #+#    #+#             */
/*   Updated: 2014/12/12 15:32:48 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_char(char const *s, char c)
{
	int	len;
	int	counter;
	int	count;

	if (s == NULL)
		return (0);
	count = 0;
	counter = 0;
	len = ft_strlen(s);
	while (counter < len)
	{
		if (s[counter] == c && s[counter + 1] != c)
			count++;
		counter++;
	}
	return (count);
}
