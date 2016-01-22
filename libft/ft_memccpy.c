/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:02:48 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/07 20:10:58 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	i = 0;
	dst2 = (char*)dst;
	src2 = (char*)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == c)
			return (dst2 + i + 1);
		i++;
	}
	return (NULL);
}
