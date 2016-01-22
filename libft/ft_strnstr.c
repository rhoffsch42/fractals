/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:06:36 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/09 19:12:54 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	if (s2[i] == '\0' || !s2)
		return ((char*)s1);
	while (s1[i] != '\0' && n > i)
	{
		j = 0;
		if (s1[i] != s2[j])
			i++;
		while (s1[i] == s2[j] && n > i)
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char*)s1 + i - j);
		}
	}
	return (NULL);
}
