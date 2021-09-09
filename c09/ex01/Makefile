# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caniseed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/31 17:50:45 by caniseed          #+#    #+#              #
#    Updated: 2021/01/31 19:55:04 by caniseed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJS	=	${SRCS:.c=.o}

HEADER	=	./includes/ft.h

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -c

NAME	=	libft.a

CR_L	=	ar rc

RM		=	rm -f

.c.o:		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}

${NAME}:	${OBJS}
			${CR_L} ${NAME} ${OBJS}

all:		${NAME}
			
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
