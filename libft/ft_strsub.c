/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:07:25 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/10 11:16:45 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*cp;

	if (!s)
	{
		cp = NULL;
		return (cp);
	}
	cp = ft_strdup(s + start);
	if (!cp)
		return (NULL);
	cp[len] = '\0';
	return (cp);
}
