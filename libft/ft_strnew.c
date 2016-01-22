/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:06:31 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/09 15:40:30 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	int		i;

	if (size <= 2147483647)
	{
		i = 0;
		s = (char*)malloc(sizeof(char) * size + 1);
		if (!s)
			return (NULL);
		while (0 < size)
		{
			s[i] = '\0';
			i++;
			size--;
		}
		s[i] = '\0';
		return (s);
	}
	s = NULL;
	return (s);
}
