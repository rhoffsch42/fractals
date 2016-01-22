/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:06:22 by rhoffsch          #+#    #+#             */
/*   Updated: 2014/11/24 16:35:44 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (!s1 || !s2)
		return (1);
	while (s1[i] == s2[i] && n > 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		i++;
		n--;
		if (n == 0)
			return (1);
	}
	return (0);
}
