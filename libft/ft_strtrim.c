/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:07:30 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/09 17:34:38 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	int		i;
	char	*dest;

	if (!s)
		return (dest = NULL);
	i = 0;
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t')
		i++;
	dest = ft_strdup(s + i);
	if (!dest)
		return (NULL);
	i = ft_strlen(dest) - 1;
	while (dest[i] == 32 || dest[i] == '\n' || dest[i] == '\t')
		i--;
	dest[i + 1] = '\0';
	return (dest);
}
