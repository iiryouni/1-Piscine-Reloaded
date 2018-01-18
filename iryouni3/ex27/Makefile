# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iryouni <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 14:18:24 by iryouni           #+#    #+#              #
#    Updated: 2016/11/09 15:33:25 by iryouni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = main.c
OBJ = main.o

all: $(NAME)

$(NAME):
	gcc -Werror -Wextra -Wall -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean: 
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
