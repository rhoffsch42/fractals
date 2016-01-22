/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:57:47 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/05 11:02:52 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*cps;

	cps = (char*)s;
	i = 0;
	while (i < n)
	{
		cps[i] = '\0';
		i++;
	}
}
