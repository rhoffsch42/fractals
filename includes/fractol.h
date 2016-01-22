/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 12:47:33 by rhoffsch          #+#    #+#             */
/*   Updated: 2015/03/08 21:36:06 by rhoffsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include <stdio.h>

# include <libft.h>
# include <mlx.h>
# include <math.h>
# define RGB(r, g, b)(256 * 256 * (int)(r) + 256 * (int)(g) + (int)(b))

typedef struct	s_point
{
	int	c1x;
	int	c2x;
	int	c1y;
	int	c2y;
}				t_point;

typedef struct	s_tmp
{
	double	xcoef;
	double	ycoef;
	double	x1;
	double	y1;
	double	x2;
	double	y2;
}				t_tmp;

typedef struct	s_coo
{
	int	x;
	int	y;
	int	z;
}				t_coo;

typedef struct	s_color
{
	int		i;
	double	result;
}				t_color;

typedef struct	s_env
{
	int		set;
	void	*mlx;
	void	*win;
	void	*img;
	int		win_x;
	int		win_y;
	double	x_min;
	double	x_max;
	double	y_min;
	double	y_max;
	double	iter;
	double	pas;
	double	mouse_x;
	double	mouse_y;
	double	tmp_x1;
	double	tmp_x2;
	double	tmp_y1;
	double	tmp_y2;
	t_coo	coor1;
	t_coo	coor2;
	int		move_x;
	int		move_y;
	double	c_diff;
}				t_env;

int				ft_mlx_image_pixel_put(t_env e, int x, int y, int color);
void			ft_launch_mandelbrot(t_env *e);
void			ft_launch_julia(t_env *e);
void			ft_launch_sierpinski(t_env *e);
void			ft_launch_tree(t_env *e);
t_color			ft_suite_julia(t_env *e, double x, double y);
t_color			ft_suite_sierpinski(t_env *e, double x, double y);
int				ft_mandelbrot(void);
int				ft_julia(void);
int				ft_pythagore_tree(void);
int				ft_expose_hook(t_env *e);
int				ft_expose_hook_tree(t_env *e);
int				ft_mouse_hook(int button, int x, int y, t_env *e);
int				ft_key_hook(int keycode, t_env *e);
int				ft_hook(int x, int y, t_env *e);
void			ft_move_right(t_env *e);
void			ft_move_left(t_env *e);
void			ft_move_up(t_env *e);
void			ft_move_down(t_env *e);
void			ft_zoom(t_env *e, int keycode);
void			ft_move_right_tree(t_env *e);
void			ft_move_left_tree(t_env *e);
void			ft_move_up_tree(t_env *e);
void			ft_move_down_tree(t_env *e);
void			ft_zoom_tree(t_env *e, int keycode, int i);
void			ft_c_diff_tree(t_env *e, int i);
int				ft_color(double i);
float			ft_altitude(int x, int cas, t_coo coor1, t_coo coor2);
void			ft_draw(t_env *e);

int				ft_c12(t_coo coor1, t_coo coor2);
int				ft_c34(t_coo coor1, t_coo coor2);
int				ft_c56(t_coo coor1, t_coo coor2);
int				ft_c78(t_coo coor1, t_coo coor2);
void			ft_print_line(t_env e, t_coo coor1, t_coo coor2);
int				ft_colour(double t);
#endif
