# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awave <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/05 14:34:45 by awave             #+#    #+#              #
#    Updated: 2020/09/05 16:46:34 by adustin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = rush-02

SRC = ./srcs/*.c

HEADER	= ./includes/

OPTION	= -I ${HEADER}

FLAG = -Wall -Wextra -Werror 

all:
			clear
			gcc ${FLAG} ${OPTION} -o ${NAME} ${SRC}
			

clean:		
			rm -f ${SRC}*.o

fclean:		clean
			${RM} ${NAME}

re:			fclean
			all
