LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

SRCS			= 	cub3d.c


OBJES 		= ${SRCS:.c=.o}
OBJES_BONUS = ${SRCS_BONUS:.c=.o}

NAME 		= cub3d
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror
RM 			= rm -rf

%.o			:	%.c
				$(CC) ${CFLAGS} -Imlx -c $< -o $@
	

all			:	$(NAME)

bonus		:	$(NAME_BNS)

$(NAME)		:	$(LIBFT) $(OBJES)  
				$(CC) $(OBJES) ${LIBFT} -o $(NAME)

$(LIBFT)	:
				$(MAKE) -C $(LIBFT_PATH)

clean		:
				$(MAKE) -C $(LIBFT_PATH) clean
				$(RM) $(OBJES)
				$(RM) $(OBJES_BONUS)

fclean		:	clean
				$(MAKE) -C $(LIBFT_PATH) fclean
				$(RM) $(NAME)
				$(RM) $(NAME_BNS)

re			:	clean all

.PHONY		:	all clean fclean re bonus ${LIBFT}