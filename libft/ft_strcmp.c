/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:04:41 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/07 16:48:11 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_strcmp(const char *s1, const char *s2)
{
	int					i;
	const unsigned char *cp1;
	const unsigned char *cp2;

	cp1 = (const unsigned char*)s1;
	cp2 = (const unsigned char*)s2;
	i = 0;
	while (cp2[i] == cp1[i])
	{
		i++;
		if (cp2[i] == '\0' && cp1[i] == '\0')
			return (0);
	}
	while (cp2[i] != cp1[i])
		return (cp1[i] - cp2[i]);
	return (0);
}
