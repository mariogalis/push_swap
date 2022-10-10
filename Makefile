# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magonzal <magonzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 16:44:51 by magonzal          #+#    #+#              #
#    Updated: 2022/10/10 13:01:34 by magonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c makeList.c utils.c checker.c

OBJS	= ${SRCS:.c=.o}

NAME	= push_swap

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

LIBFT = 42_libft/libft.a

PATHLIB = 42_libft/

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${LIBFT} ${OBJS}
				${CC} ${CFLAGS} ${LIBFT} ${OBJS} -o ${NAME}

${LIBFT}:
			@make -C ${PATHLIB}

all:		${NAME}

clean:
				@make clean -C ${PATHLIB}
				${RM} ${OBJS} ${OBJB}

fclean: 	clean
				@make fclean -C ${PATHLIB}
				${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re