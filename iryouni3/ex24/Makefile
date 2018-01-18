# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iryouni <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 09:57:43 by iryouni           #+#    #+#              #
#    Updated: 2016/11/09 15:47:26 by iryouni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c 
OBJ = ft_putchar.o ft_strcmp.o ft_strlen.o ft_swap.o
all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rm -rf $(OBJ)
fclean: clean
	/bin/rm -rf $(NAME)
re: fclean all
