/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 02:25:32 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/09 02:22:28 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_move_right(t_env *e)
{
	double	tmp;

	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	tmp = (e->x_max - e->x_min) / 10;
	e->x_min = e->x_min + tmp;
	e->x_max = e->x_max + tmp;
	ft_expose_hook(e);
}

void	ft_move_left(t_env *e)
{
	double	tmp;

	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	tmp = (e->x_max - e->x_min) / 10;
	e->x_min = e->x_min - tmp;
	e->x_max = e->x_max - tmp;
	ft_expose_hook(e);
}

void	ft_move_up(t_env *e)
{
	double	tmp;

	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	tmp = (e->y_max - e->y_min) / 10;
	e->y_min = e->y_min - tmp;
	e->y_max = e->y_max - tmp;
	ft_expose_hook(e);
}

void	ft_move_down(t_env *e)
{
	double	tmp;

	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	tmp = (e->y_max - e->y_min) / 10;
	e->y_min = e->y_min + tmp;
	e->y_max = e->y_max + tmp;
	ft_expose_hook(e);
}

void	ft_zoom(t_env *e, int keycode)
{
	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	if (keycode == 69)
	{
		e->x_min = e->x_min + e->tmp_x1;
		e->x_max = e->x_max - e->tmp_x2;
		e->y_min = e->y_min + e->tmp_y1;
		e->y_max = e->y_max - e->tmp_y2;
		e->iter = e->iter + e->pas;
		ft_expose_hook(e);
	}
	if (keycode == 78 && e->iter != 8)
	{
		e->x_min = e->x_min - e->tmp_x1;
		e->x_max = e->x_max + e->tmp_x2;
		e->y_min = e->y_min - e->tmp_y1;
		e->y_max = e->y_max + e->tmp_y2;
		e->iter = e->iter - e->pas;
		ft_expose_hook(e);
	}
}
