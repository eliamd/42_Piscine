# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almeddah <almeddah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/22 11:48:32 by almeddah          #+#    #+#              #
#    Updated: 2024/08/25 21:55:12 by almeddah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SRCS	=	cut_nb.c \
			list.c \
			main.c \
			print.c \
			str.c \
			get_next_line/get_next_line_utils.c \
			get_next_line/get_next_line.c
EXEC		= rush-02
OBJS		= $(SRCS:%.c=%.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(EXEC)

re : fclean all

.PHONY: all clean fclean re