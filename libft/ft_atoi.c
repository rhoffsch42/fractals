/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:57:12 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/10 21:36:03 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strtrim_extended(const char *s)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	while (s[i] == '\v' || s[i] == '\r' || s[i] == '\f' || s[i] == 32 || \
			s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
		dest[j++] = s[i++];
	i = ft_strlen(dest) - 1;
	while (dest[i] == '\v' || dest[i] == '\r' || dest[i] == '\f')
		i--;
	dest[i + 1] = '\0';
	return (dest);
}

static int	ft_check(char *cp, int i)
{
	if (ft_isdigit(cp[i]) == 0 && cp[i] != 43 && cp[i] != 45)
		return (0);
	if (cp[i] == 43 || cp[i] == 45)
		if (cp[i + 1] == 43 || cp[i + 1] == 45)
			return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	char	*cp;
	int		i;
	int		n;

	n = 0;
	i = 0;
	cp = ft_strtrim_extended(str);
	if (ft_check(cp, i) != 1)
		return (0);
	i++;
	while (ft_isdigit(cp[i]) == 1)
		i++;
	cp[i] = '\0';
	if (ft_isdigit(cp[0]) == 1)
		i = 0;
	else
		i = 1;
	while (i < ft_strlen(cp))
		n = 10 * n + (int)cp[i++] - 48;
	if (cp[0] == 45)
		n = -n;
	return (n);
}
