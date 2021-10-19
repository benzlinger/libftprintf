# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 17:25:41 by btenzlin          #+#    #+#              #
#    Updated: 2021/10/12 13:10:24 by btenzlin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = srcs/ft_printf.c \
		srcs/print_char.c \
		srcs/print_int_d.c \
		srcs/print_int_i.c \
		srcs/print_int_u.c \
		srcs/print_string.c \
		srcs/print_hex_c.c \
		srcs/print_hex_l.c \
		srcs/print_address.c \
		srcs/ft_strlen.c \
		srcs/ft_putchar_fd.c \
		srcs/ft_putnbr_fd.c \
		srcs/ft_putstr_fd.c


INCLUDES = -I./includes

OBJS = ${SRCS:.c=.o}

.c.o: $(SRCS)
		$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJS)
		$(AR) $@ $^

all : $(NAME)

clean :
		RM $(OBJS)

fclean : clean
		RM $(NAME)

re : fclean all

.PHONY: all clean fclean re