/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:06:40 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/09 18:56:39 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (s[0] == '\0')
		i = 0;
	else
		i = ft_strlen(s);
	while (s[i] != (char)c)
	{
		i--;
		if (i == (-1))
			return (NULL);
	}
	return ((char*)s + i);
}
