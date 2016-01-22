/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/18 04:59:21 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/07 23:50:09 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_c12(t_coo coor1, t_coo coor2)
{
	if (coor1.x <= coor2.x && abs(coor2.x - coor1.x) >= abs(coor2.y - coor1.y))
		return (1);
	return (0);
}

int		ft_c34(t_coo coor1, t_coo coor2)
{
	if (coor1.x > coor2.x && abs(coor2.x - coor1.x) >= abs(coor2.y - coor1.y))
		return (1);
	return (0);
}

int		ft_c56(t_coo coor1, t_coo coor2)
{
	if (coor1.y <= coor2.y && abs(coor2.y - coor1.y) >= abs(coor2.x - coor1.x))
		return (1);
	return (0);
}

int		ft_c78(t_coo coor1, t_coo coor2)
{
	if (coor1.y > coor2.y && abs(coor2.y - coor1.y) >= abs(coor2.x - coor1.x))
		return (1);
	return (0);
}
