/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:02:37 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/09 18:18:38 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;

	s = (void*)malloc(sizeof(void) * size);
	if (s != NULL)
		ft_bzero(s, (size + 1));
	if (!s)
		return (NULL);
	return (s);
}
