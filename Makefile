# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/10 20:07:50 by rhoffsch          #+#    #+#              #
#    Updated: 2015/03/09 02:18:10 by rhoffsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	fractol
CFLAGS	=	-Wall -Wextra -Werror
GCC		=	gcc

SRC		=	./main.c \
			./ft_mlx_image_put_pixel.c \
			./ft_launch_mlx.c \
			./ft_is_mandelbrot.c \
			./ft_keys.c \
			./ft_keys_tree.c \
			./ft_keys_tree2.c \
			./ft_mandelbrot.c \
			./ft_julia.c \
			./ft_sierpinski.c \
			./ft_tree.c \
			./ft_case.c \
			./ft_print_win.c \
			./ft_colour.c \
			./ft_altitude.c


OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	@make -C libft/ fclean
	@make -C libft/
	@echo Libft.a created
	@$(GCC) $(CFLAGS) -O3 -I includes/ -I libft/includes/ -c $(SRC)
	@$(GCC) -o $(NAME) $(OBJ) -L libft/ -lft -lmlx -framework OpenGL -framework AppKit
	@echo Compilation complete
	@echo End

clean:
	@rm -f $(OBJ)
	@echo All objects deleted

fclean: clean
	@rm -f $(NAME)
	@echo $(NAME) deleted

re: fclean all
