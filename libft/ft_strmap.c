/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:05:42 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/10 11:15:44 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*cp;
	int		i;

	i = 0;
	if (s && f)
	{
		cp = ft_strdup(s);
		while (cp[i] != '\0')
		{
			cp[i] = f(cp[i]);
			i++;
		}
		return (cp);
	}
	cp = (char*)malloc(sizeof(char) * 5);
	free(cp);
	return (NULL);
}
