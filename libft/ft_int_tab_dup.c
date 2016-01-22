/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_tab_dup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 12:15:19 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/08 23:37:58 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_itab		ft_int_tab_dup(int *tab, int size)
{
	t_itab	newtab;

	newtab.tab = (int*)malloc(sizeof(int) * size);
	newtab.size = size;
	while (size >= 0)
	{
		(newtab.tab)[size] = tab[size];
		size--;
	}
	return (newtab);
}
