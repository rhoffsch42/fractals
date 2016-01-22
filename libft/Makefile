# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhoffsch <rhoffsch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/10 20:07:50 by rhoffsch          #+#    #+#              #
#    Updated: 2015/02/20 12:45:23 by rhoffsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	libft.a
CFLAGS	=	-Wall -Wextra -Werror
GCC		=	gcc

SRC		=	./ft_atoi.c\
			./ft_bigputnbr.c\
			./ft_bzero.c\
			./ft_clear_tab.c\
			./ft_isalnum.c\
			./ft_isalpha.c\
			./ft_isascii.c\
			./ft_isdigit.c\
			./ft_isprint.c\
			./ft_itoa.c\
			./ft_lstnew.c\
			./ft_memalloc.c\
			./ft_memccpy.c\
			./ft_memchr.c\
			./ft_memcmp.c\
			./ft_memcpy.c\
			./ft_memdel.c\
			./ft_memmove.c\
			./ft_memset.c\
			./ft_nputchar.c\
			./ft_putchar.c\
			./ft_putchar_fd.c\
			./ft_putendl.c\
			./ft_putendl_fd.c\
			./ft_putnbr.c\
			./ft_putnbr_fd.c\
			./ft_putstr.c\
			./ft_putstr_fd.c\
			./ft_puttab.c\
			./ft_strcat.c\
			./ft_strchr.c\
			./ft_strclr.c\
			./ft_strcmp.c\
			./ft_strcpy.c\
			./ft_strdel.c\
			./ft_strdup.c\
			./ft_strequ.c\
			./ft_striter.c\
			./ft_striteri.c\
			./ft_strjoin.c\
			./ft_strjoin_free.c\
			./ft_strlcat.c\
			./ft_strlen.c\
			./ft_strmap.c\
			./ft_strmapi.c\
			./ft_strncat.c\
			./ft_strncmp.c\
			./ft_strncpy.c\
			./ft_strnequ.c\
			./ft_strnew.c\
			./ft_strnstr.c\
			./ft_strrchr.c\
			./ft_strsplit.c\
			./ft_strstr.c\
			./ft_strsub.c\
			./ft_strswap.c\
			./ft_strtrim.c\
			./ft_tablen.c\
			./ft_tabjoin.c\
			./ft_tolower.c\
			./ft_toupper.c\
			./ft_sort_int_tab.c\
			./ft_int_tab_dup.c\
			./ft_atoi_tab.c\
			./ft_intswap.c\

OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	@$(GCC) $(CFLAGS) -c $(SRC) -I includes/
	@echo Objects compiled
	@ar rc $(NAME) $(OBJ)
	@echo Library created
	@ranlib libft.a
	@echo Index created
	@echo End
	@echo ""

clean: 
	@rm -f $(OBJ)
	@echo All objects deleted

fclean: clean
	@rm -f $(NAME)
	@echo $(NAME) deleted

re: fclean all
