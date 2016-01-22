/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 15:12:32 by exam              #+#    #+#             */
/*   Updated: 2015/02/20 12:28:13 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_rsort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] < tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				tmp;

	while (ft_check_sort_int_tab(tab, size) == 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}
