# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 10:04:53 by edetoh            #+#    #+#              #
#    Updated: 2024/08/25 10:09:49 by edetoh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SRC_DIR		= srcs
INC_DIR		= includes
SRC_FILES	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
EXEC		= libft.a
SRCS		= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS		= $(SRCS:%.c=%.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) -c -o $@ $< -I$(INC_DIR) $(CFLAGS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(EXEC)

re : fclean all

.PHONY: all clean fclean re
