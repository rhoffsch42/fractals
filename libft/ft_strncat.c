/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:06:01 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/10 11:16:13 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	size_t	x;

	x = 0;
	j = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0' && n > x)
	{
		s1[j] = s2[i];
		i++;
		j++;
		n--;
	}
	s1[j] = '\0';
	return (s1);
}
