# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amargiac <amargiac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 15:36:03 by amargiac          #+#    #+#              #
#    Updated: 2023/03/14 10:01:20 by amargiac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_printf.c ft_printf_type.c ft_print_uns.c ft_print_str.c ft_print_ptr.c \
ft_print_per.c ft_print_nbr.c ft_print_hex.c ft_print_char.c ft_count.c ft_counter_unsigned.c \

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -f

FLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${FLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
		${RM} ${NAME}

re: fclean all
