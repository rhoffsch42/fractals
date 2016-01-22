/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:05:33 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/05 08:15:27 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	int		i;
	int		j;
	size_t	sizeo;

	i = 0;
	sizeo = size;
	len = (size_t)ft_strlen(dst) + (size_t)ft_strlen(src);
	j = 0;
	while (dst[i] != 0 && (int)size-- > 0)
		i++;
	while ((int)size > 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		size--;
		i++;
		j++;
	}
	if ((int)size > 0)
	{
		dst[i] = '\0';
		return (len);
	}
	else
		return (sizeo + (size_t)ft_strlen(src));
}
