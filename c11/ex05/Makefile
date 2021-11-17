CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./includes/
NAME = do-op
SRCS = main.c ft_atoi.c ft_cal.c ft_check_op.c ft_do_op.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcmp.c
OBJS = $(SRCS:.c=.o)

all: 		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): 	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS);

clean:
			rm -f $(OBJS)

fclean: clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean
