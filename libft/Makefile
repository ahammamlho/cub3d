# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 13:19:52 by ahammam           #+#    #+#              #
#    Updated: 2022/11/14 09:39:49 by ahammam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRC =	get_next_line.c ft_strlen.c

OBJECTS = $(SRC:.c=.o)

%.o: %.c
	$(CC) ${CFLAGS} -c $< -o $@
	
all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	ar -rcs $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re