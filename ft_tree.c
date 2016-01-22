/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/07 22:47:06 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/09 02:33:17 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_draw_tree(t_env *e, t_coo coor1, t_coo coor2, int iter)
{
	t_tmp	tmp;
	t_coo	coor3;

	ft_print_line(*e, coor1, coor2);
	tmp.xcoef = coor2.x - coor1.x;
	tmp.ycoef = coor2.y - coor1.y;
	tmp.x1 = coor2.x - tmp.ycoef / e->c_diff + tmp.xcoef / 1.5;
	tmp.y1 = coor2.y + tmp.xcoef / e->c_diff + tmp.ycoef / 1.5;
	tmp.x2 = coor2.x + tmp.ycoef / e->c_diff + tmp.xcoef / 1.5;
	tmp.y2 = coor2.y - tmp.xcoef / e->c_diff + tmp.ycoef / 1.5;
	if (coor2.z == 1)
	{
		tmp.x2 = tmp.x2 + 2 * (tmp.ycoef / e->c_diff + tmp.xcoef / 1.5);
		tmp.y2 = tmp.y2 + tmp.xcoef / e->c_diff + tmp.ycoef / 1.5;
	}
	coor1.x = (int)(tmp.x1);
	coor1.y = (int)(tmp.y1);
	coor1.z = coor2.z + 1;
	coor3.x = (int)(tmp.x2);
	coor3.y = (int)(tmp.y2);
	coor3.z = coor2.z + 1;
	(iter > 0) ? ft_draw_tree(e, coor2, coor1, iter - 1) : (void)iter;
	(iter > 0) ? ft_draw_tree(e, coor2, coor3, iter - 1) : (void)iter;
}

int		ft_expose_hook_tree(t_env *e)
{
	ft_draw_tree(e, e->coor1, e->coor2, e->iter);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	return (0);
}

int		ft_mouse_hook_tree(int button, int x, int y, t_env *e)
{
	(void)x;
	(void)y;
	if (button == 1)
		ft_c_diff_tree(e, 1);
	if (button == 2)
		ft_c_diff_tree(e, 2);
	if (button == 5)
		ft_zoom_tree(e, 69, 0);
	if (button == 4)
		ft_zoom_tree(e, 78, 0);
	return (0);
}

int		ft_key_hook_tree(int keycode, t_env *e)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 124)
		ft_move_right_tree(e);
	if (keycode == 123)
		ft_move_left_tree(e);
	if (keycode == 126)
		ft_move_up_tree(e);
	if (keycode == 125)
		ft_move_down_tree(e);
	if (keycode == 78 || keycode == 69)
		ft_zoom_tree(e, keycode, 1);
	return (0);
}

int		ft_pythagore_tree(void)
{
	t_env e;

	if ((e.mlx = mlx_init()) == NULL)
	{
		ft_putendl("mlx_init failed");
		return (0);
	}
	ft_launch_tree(&e);
	mlx_key_hook(e.win, ft_key_hook_tree, &e);
	mlx_mouse_hook(e.win, ft_mouse_hook_tree, &e);
	mlx_expose_hook(e.win, ft_expose_hook_tree, &e);
	mlx_loop(e.mlx);
	return (0);
}
