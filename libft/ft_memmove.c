/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:03:20 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/21 07:53:23 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src2;

	src2 = (char*)(ft_strdup(src));
	i = 0;
	while (i < len)
	{
		((char*)dst)[i] = src2[i];
		i++;
	}
	free(src2);
	return (dst);
}
