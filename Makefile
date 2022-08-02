# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 10:07:40 by aahsan            #+#    #+#              #
#    Updated: 2022/08/02 08:20:45 by aahsan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c	ft_toupper.c	ft_tolower.c	ft_strchr.c		ft_strrchr.c \
		ft_strncmp.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c \
		ft_strlen.c		ft_strlcpy.c	ft_strlcat.c	ft_memset.c		ft_bzero.c \
		ft_memchr.c		ft_memcpy.c		ft_memcmp.c		ft_memmove.c	ft_strnstr.c \
		ft_atoi.c		ft_calloc.c		ft_strdup.c		ft_substr.c		ft_strjoin.c \
		ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_itoa.c
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
	${RM} ${OBJS}

fclean: clean
	${RM} ${FILE}

re:		fclean all

.PHONY: all clean fclean re
