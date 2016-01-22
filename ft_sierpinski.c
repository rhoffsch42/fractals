/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sierpinski.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/06 18:32:36 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/09 02:33:06 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_color	ft_is_sierpinski(int n, int i)
{
	t_color	color;

	if (n == 2)
	{
		color.i = 25;
		color.result = 2;
	}
	else
	{
		color.i = i * 20;
		color.result = 5;
	}
	return (color);
}

t_color	ft_suite_sierpinski(t_env *e, double x, double y)
{
	int		i;
	double	tmp;

	tmp = (double)e->win_x;
	i = 0;
	if (x >= (tmp / 3) && x < (tmp / 3 * 2) && \
			y >= (tmp / 3) && y < (tmp / 3 * 2))
		return (ft_is_sierpinski(1, i));
	else
	{
		while (i < e->iter)
		{
			while (x >= (tmp / 3))
				x = x - (tmp / 3);
			while (y >= (tmp / 3))
				y = y - (tmp / 3);
			if (x >= (tmp / 9) && x < (tmp / 9 * 2) && \
					y >= (tmp / 9) && y < (tmp / 9 * 2))
				return (ft_is_sierpinski(1, i));
			tmp = tmp / 3;
			i++;
		}
	}
	return (ft_is_sierpinski(2, i));
}
