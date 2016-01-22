/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:02:55 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/07 16:33:24 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*s2;
	size_t	i;

	s2 = (char*)s;
	i = 0;
	while (i < n)
	{
		if (s2[i] == (char)c)
			return (s2 + i);
		i++;
	}
	return (NULL);
}
