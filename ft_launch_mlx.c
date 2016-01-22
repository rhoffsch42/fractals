/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_mlx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 17:49:40 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/09 02:14:20 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_launch_tree(t_env *e)
{
	e->set = 4;
	e->win_x = 1200;
	e->win_y = e->win_x;
	e->x_min = 0;
	e->x_max = e->win_x;
	e->y_min = 0;
	e->y_max = e->win_x;
	e->iter = 9;
	e->pas = 1;
	e->coor1.x = e->win_x / 2;
	e->coor1.y = e->win_y - e->win_y / 100;
	e->coor1.z = 1;
	e->coor2.x = e->win_x / 2;
	e->coor2.y = e->win_y - e->win_y / 10;
	e->coor2.z = 1;
	e->move_x = 0;
	e->move_y = 0;
	e->c_diff = 2;
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	e->win = mlx_new_window(e->mlx, e->win_x, e->win_y, \
			"Arbre de Pythagore");
}

void	ft_launch_sierpinski(t_env *e)
{
	e->set = 3;
	e->win_x = 360;
	e->win_y = e->win_x;
	e->x_min = 0;
	e->x_max = e->win_x;
	e->y_min = 0;
	e->y_max = e->win_x;
	e->iter = 4;
	e->pas = 0.045;
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	e->win = mlx_new_window(e->mlx, e->win_x, e->win_y, \
			"Fractale de Sierpinski");
}

void	ft_launch_julia(t_env *e)
{
	e->set = 2;
	e->win_x = 400;
	e->win_y = e->win_x / 4 * 3;
	e->x_min = -2;
	e->x_max = 2;
	e->y_min = -1.5;
	e->y_max = 1.5;
	e->iter = 160;
	e->pas = 8;
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	e->win = mlx_new_window(e->mlx, e->win_x, e->win_y, "Fractale de Julia");
}

void	ft_launch_mandelbrot(t_env *e)
{
	e->set = 1;
	e->win_x = 600;
	e->win_y = (e->win_x / 3) * 2;
	e->x_min = -2.4;
	e->x_max = 1.2;
	e->y_min = -1.2;
	e->y_max = 1.2;
	e->iter = 600;
	e->pas = 8;
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	e->win = mlx_new_window(e->mlx, e->win_x, e->win_y, \
			"Fractale de Mandelbrot");
}
