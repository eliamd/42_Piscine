SRCS = ft_atoi.c \
       do_op.c \
       ft_strcmp.c \
       ft_putnbr.c \
       operations.c

OBJS = $(SRCS:.c=.o)

NAME = do-op

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
		gcc $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
		gcc $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
