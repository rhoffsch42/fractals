/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_mandelbrot.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/21 11:20:34 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/09 02:21:58 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_color	ft_suite_mandelbrot(t_env *e, double x, double y)
{
	t_color	color;
	double	reel;
	double	tmp_r;
	double	ima;
	double	tmp_i;

	color.i = 0;
	reel = 0;
	ima = 0;
	while ((color.i) < e->iter)
	{
		tmp_r = reel;
		tmp_i = ima;
		reel = tmp_r * tmp_r - tmp_i * tmp_i + x;
		ima = 2 * tmp_r * tmp_i + y;
		if ((color.result = reel * reel + ima * ima) >= 4)
			return (color);
		(color.i)++;
	}
	return (color);
}

int		ft_color(double i)
{
	int			tmp;
	int			coef;

	coef = 400;
	tmp = (i / coef);
	i = (int)i % coef;
	if (tmp % 3 == 0)
		return (i = RGB((i * 100 / coef) * 255 / 100, \
		(i * 100 / coef) * 255 / 100, 255));
	if (tmp % 3 == 1)
		return (i = RGB(255, (1 - (double)(i / coef)) * 255, \
		(1 - (double)(i / coef)) * 255));
	if (tmp % 3 == 2)
	{
		if (i < (coef / 2))
			i = RGB(255, 0, (double)(i / (coef / 2)) * 255);
		else
			i = RGB((1 - (double)(i / (coef / 2))) * 255, 0, 255);
		return (i);
	}
	return (0);
}

int		ft_is_in_set(t_env *e, double x, double y)
{
	double	coo_x;
	double	coo_y;
	t_color	color;

	coo_x = e->x_min + (e->x_max - e->x_min) * x / e->win_x;
	coo_y = e->y_min + (e->y_max - e->y_min) * y / e->win_y;
	if (e->set == 1)
		color = ft_suite_mandelbrot(e, coo_x, coo_y);
	else if (e->set == 2)
		color = ft_suite_julia(e, coo_x, coo_y);
	else if (e->set == 3)
		color = ft_suite_sierpinski(e, coo_x, coo_y);
	if (color.result >= 4)
		return (ft_color(color.i * 15));
	return (0);
}

void	ft_draw(t_env *e)
{
	int	x;
	int	y;
	int	i;
	int	w;

	i = 0;
	y = 0;
	while (y < e->win_y)
	{
		x = 0;
		while (x < e->win_x)
		{
			if ((w = ft_is_in_set(e, (double)x, (double)y)) != 0)
				ft_mlx_image_pixel_put(*e, x, y, w);
			x++;
			i++;
		}
		y++;
	}
}
