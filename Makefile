# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngouy <ngouy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/03 13:54:24 by ngouy             #+#    #+#              #
#    Updated: 2016/02/23 11:22:55 by ngouy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC			= gcc
NAME		= ft_ls

SRC			= \
		./Sources/main.c\

OBJ			= \
		./main.o\

CFLAGS		= -Wall -Wextra -ansi -pedantic
OFLAGS		= -O3

RM			= rm -rf

all: $(NAME)

$(NAME):
			make -C ./Libs/libft/
			gcc $(CFLAGS) -c $(SRC) -I ./Includes/
			gcc $(OBJ) ./Libs/libft/libft.a -o $(NAME)

clean:
			make clean -C ./Libs/libft/
			$(RM) $(OBJ)

fclean:		clean
			make fclean -C ./Libs/libft/
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean re fclean