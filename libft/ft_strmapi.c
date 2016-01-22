/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:05:52 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/24 16:32:59 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cp;
	int		i;

	i = 0;
	if (s && f)
	{
		cp = ft_strdup(s);
		while (cp[i] != '\0')
		{
			cp[i] = f(i, cp[i]);
			i++;
		}
		return (cp);
	}
	cp = (char*)malloc(sizeof(char) * 5);
	free(cp);
	return (NULL);
}
