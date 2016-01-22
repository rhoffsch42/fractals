/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 18:45:32 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/01/07 08:30:33 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabjoin(char *s, char **tab)
{
	int		i;
	int		j;
	char	**tab2;

	i = 0;
	j = ft_tablen(tab);
	tab2 = (char**)malloc(sizeof(char*) * j + 1);
	while (i < j)
	{
		tab2[i] = ft_strjoin(s, tab[i]);
		i++;
	}
	tab2[i] = NULL;
	return (tab2);
}
