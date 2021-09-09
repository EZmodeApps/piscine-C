# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caniseed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 23:58:49 by caniseed          #+#    #+#              #
#    Updated: 2021/02/02 22:04:01 by caniseed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	./srcs/ft_putstr.c

OBJS	=	${SRCS:.c=.o}

HEADER	=	./includes

NAME	=	ft_display_file


CFLAGS	=	-Wall -Wextra -Werror

LIB		=	libft.a

all:		${NAME}

.c.o:	$(LIB)	
	gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}

${LIB}:	${OBJS}
		ar rc ${LIB} ${OBJS}

${NAME}: 	${LIB}
			gcc -L. ./srcs/main.c ${CFLAGS} -lft -o ${NAME}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f	${LIB}
		   	rm -f	${OBJS}

.PHONY:		all clean fclean
