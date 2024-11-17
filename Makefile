SRCS	= ft_atoi.c ft_bzero.c main.c

OBJS	= ${SRCS:.c=.o}

CFLAGS	= -Wall -Wextra -Werror

CC		= cc

RM		= rm -f

NAME	= libft.a

all:	${OBJS}
		cc -o ${NAME} ${OBJS}

valoche:
		cc -o  libft -Werror -Wall -Wextra ${SRCS} && clear && valgrind ./libft

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re