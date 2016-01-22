/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys_tree2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/08 20:20:19 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/08 23:49:59 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_c_diff_tree(t_env *e, int i)
{
	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, e->win_x, e->win_y);
	if (i == 1)
		e->c_diff = e->c_diff + 0.1;
	else if (i == 2 && e->c_diff > 1.2)
		e->c_diff = e->c_diff - 0.1;
	ft_expose_hook_tree(e);
}
