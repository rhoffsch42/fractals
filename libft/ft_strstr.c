/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:07:00 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/06 08:29:21 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return ((char*)s1 + i - j);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] == s1[i])
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char*)s1 + i - j);
		}
		i++;
	}
	return (NULL);
}
