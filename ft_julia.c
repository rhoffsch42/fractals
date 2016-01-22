/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/02 04:28:41 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/09 02:22:09 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_hook(int x, int y, t_env *e)
{
	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	e->mouse_x = e->x_min + (e->x_max - e->x_min) * (double)x / e->win_x;
	e->mouse_y = e->y_min + (e->y_max - e->y_min) * (double)y / e->win_y;
	e->tmp_x1 = (e->mouse_x - e->x_min) / 20;
	e->tmp_x2 = (e->x_max - e->mouse_x) / 20;
	e->tmp_y1 = (e->mouse_y - e->y_min) / 20;
	e->tmp_y2 = (e->y_max - e->mouse_y) / 20;
	ft_expose_hook(e);
	return (0);
}

t_color	ft_suite_julia(t_env *e, double x, double y)
{
	t_color	color;
	double	reel;
	double	tmp_r;
	double	ima;
	double	tmp_i;

	color.i = 0;
	reel = x;
	ima = y;
	while ((color.i) < e->iter)
	{
		tmp_r = reel;
		tmp_i = ima;
		reel = tmp_r * tmp_r - tmp_i * tmp_i + e->mouse_x;
		ima = 2 * tmp_r * tmp_i + e->mouse_y;
		if ((color.result = reel * reel + ima * ima) >= 4)
			return (color);
		(color.i)++;
	}
	return (color);
}
