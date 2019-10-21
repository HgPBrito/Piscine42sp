# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbrito <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 23:36:15 by hbrito            #+#    #+#              #
#    Updated: 2019/10/20 23:39:56 by hbrito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= $(wildcard *.c)

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}
