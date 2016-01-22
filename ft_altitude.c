/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_altitude.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 12:53:44 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/08 21:14:10 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

float	ft_altitude12(int x, t_point c, t_coo c1, t_coo c2)
{
	float	percent;
	float	alt;
	int		x1;
	int		x2;

	x1 = c.c1x;
	x2 = c.c2x;
	percent = ((float)(abs(x - x1)) / (float)(abs(x2 - x1)));
	alt = (float)c1.z + percent * (float)(c2.z - c1.z);
	return (alt);
}

float	ft_altitude34(int x, t_point c, t_coo c1, t_coo c2)
{
	float	percent;
	float	alt;
	int		x1;
	int		x2;

	x1 = c.c1x;
	x2 = c.c2x;
	percent = ((float)(abs(x - x1)) / (float)(abs(x2 - x1)));
	alt = (float)c1.z + (1 - percent) * (float)(c2.z - c1.z);
	return (alt);
}

float	ft_altitude56(int x, t_point c, t_coo c1, t_coo c2)
{
	float	percent;
	float	alt;
	int		x1;
	int		x2;

	x1 = c.c1y;
	x2 = c.c2y;
	percent = ((float)(abs(x - x1)) / (float)(abs(x2 - x1)));
	alt = (float)c1.z + (percent) * (float)(c2.z - c1.z);
	return (alt);
}

float	ft_altitude78(int x, t_point c, t_coo c1, t_coo c2)
{
	float	percent;
	float	alt;
	int		x1;
	int		x2;

	x1 = c.c1y;
	x2 = c.c2y;
	percent = ((float)(abs(x - x1)) / (float)(abs(x2 - x1)));
	alt = (float)c2.z + (1 - percent) * (float)(abs(c2.z - c1.z));
	return (alt);
}

float	ft_altitude(int x, int cas, t_coo coor1, t_coo coor2)
{
	t_point	c;
	float	alt;

	alt = 0;
	c.c1x = coor1.x;
	c.c2x = coor2.x;
	c.c1y = coor1.y;
	c.c2y = coor2.y;
	if (cas == 12)
		alt = ft_altitude12(x, c, coor1, coor2);
	else if (cas == 34)
		alt = ft_altitude34(x, c, coor2, coor1);
	else if (cas == 56)
		alt = ft_altitude56(x, c, coor1, coor2);
	else if (cas == 78)
		alt = ft_altitude78(x, c, coor1, coor2);
	return (alt);
}
