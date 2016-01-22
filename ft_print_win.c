/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_win.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 10:19:14 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/09 00:23:36 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_print_point(t_env e, t_coo coor)
{
	ft_mlx_image_pixel_put(e, coor.x, coor.y, 0xFFFFFF);
}

void	line1(t_coo coor1, t_coo coor2, t_env e, int cas)
{
	int		x;
	int		x1;
	int		x2;
	int		y1;
	int		y2;

	x1 = coor1.x;
	y1 = coor1.y;
	x2 = coor2.x;
	y2 = coor2.y;
	x = x1 + 1;
	while (x <= x2)
	{
		ft_mlx_image_pixel_put(e, x + e.move_x, \
				e.move_y + y1 + ((y2 - y1) * (x - x1)) / (x2 - x1), \
				ft_colour(ft_altitude(x, cas, coor1, coor2)));
		x++;
	}
}

void	line2(t_coo coor1, t_coo coor2, t_env e, int cas)
{
	int		x;
	int		x1;
	int		x2;
	int		y1;
	int		y2;

	y1 = coor1.x;
	x1 = coor1.y;
	y2 = coor2.x;
	x2 = coor2.y;
	x = x1 + 1;
	while (x <= x2)
	{
		ft_mlx_image_pixel_put(e, \
				e.move_x + y1 + ((y2 - y1) * (x - x1)) / (x2 - x1), \
				e.move_y + x, ft_colour(ft_altitude(x, cas, coor1, coor2)));
		x++;
	}
}

void	ft_print_line(t_env e, t_coo coor1, t_coo coor2)
{
	if (ft_c12(coor1, coor2) == 1)
		line1(coor1, coor2, e, 12);
	else if (ft_c34(coor1, coor2) == 1)
		line1(coor2, coor1, e, 34);
	else if (ft_c56(coor1, coor2) == 1)
		line2(coor1, coor2, e, 56);
	else if (ft_c78(coor1, coor2) == 1)
		line2(coor2, coor1, e, 78);
}
