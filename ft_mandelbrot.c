/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mandelbrot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 12:48:26 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/09 02:25:44 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_expose_hook(t_env *e)
{
	ft_draw(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	return (0);
}

int		ft_mouse_hook(int button, int x, int y, t_env *e)
{
	e->mouse_x = e->x_min + (e->x_max - e->x_min) * (double)x / e->win_x;
	e->mouse_y = e->y_min + (e->y_max - e->y_min) * (double)y / e->win_y;
	e->tmp_x1 = (e->mouse_x - e->x_min) / 20;
	e->tmp_x2 = (e->x_max - e->mouse_x) / 20;
	e->tmp_y1 = (e->mouse_y - e->y_min) / 20;
	e->tmp_y2 = (e->y_max - e->mouse_y) / 20;
	if (button == 5)
		ft_zoom(e, 69);
	if (button == 4)
		ft_zoom(e, 78);
	return (0);
}

int		ft_key_hook(int keycode, t_env *e)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 124)
		ft_move_right(e);
	if (keycode == 123)
		ft_move_left(e);
	if (keycode == 126)
		ft_move_up(e);
	if (keycode == 125)
		ft_move_down(e);
	if (keycode == 78 || keycode == 69)
		ft_zoom(e, keycode);
	return (0);
}

int		ft_mandelbrot(void)
{
	t_env	e;

	if ((e.mlx = mlx_init()) == NULL)
	{
		ft_putendl("mlx_init failed");
		return (0);
	}
	ft_launch_mandelbrot(&e);
	mlx_key_hook(e.win, ft_key_hook, &e);
	mlx_mouse_hook(e.win, ft_mouse_hook, &e);
	mlx_expose_hook(e.win, ft_expose_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}
