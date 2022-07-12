# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 10:07:40 by aahsan            #+#    #+#              #
#    Updated: 2022/07/12 10:57:05 by aahsan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= includes/ft_*.c
OBJS	= ${SRCS:.c=.o}
HEADER	= includes
GCC		= gcc -Wall -Wextra -Werror
FILE	= libft.a
RM		= rm -f

.c.o:
	${GCC} -c $< -o ${<:.c=.o} -I ${HEADER}

${FILE}:	${OBJS}
	ar rcs ${FILE} ${OBJS}

all:	${FILE}

clean:
	${RM} ${FILE}

fclean: clean
	${RM} ${FILE}

oclean:
	${RM} ${OBJS}

re:		fclean all

.PHONY: all clean fclean re
