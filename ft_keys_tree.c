/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 02:25:32 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/08 20:41:31 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_move_right_tree(t_env *e)
{
	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	e->move_x = e->move_x - 40;
	ft_expose_hook_tree(e);
}

void	ft_move_left_tree(t_env *e)
{
	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	e->move_x = e->move_x + 40;
	ft_expose_hook_tree(e);
}

void	ft_move_up_tree(t_env *e)
{
	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	e->move_y = e->move_y + 40;
	ft_expose_hook_tree(e);
}

void	ft_move_down_tree(t_env *e)
{
	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	e->move_y = e->move_y - 40;
	ft_expose_hook_tree(e);
}

void	ft_zoom_tree(t_env *e, int keycode, int i)
{
	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	if (keycode == 69)
	{
		if (i == 0)
			e->coor2.y = e->coor2.y - 25;
		if (i == 1 && e->iter < 16)
			e->iter = e->iter + e->pas;
		ft_expose_hook_tree(e);
	}
	if (keycode == 78 && e->iter != 0)
	{
		if (e->coor2.y < 1175 && i == 0)
			e->coor2.y = e->coor2.y + 25;
		if (i == 1)
			e->iter = e->iter - e->pas;
		ft_expose_hook_tree(e);
	}
}
