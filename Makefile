CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRC = ft_printf.c \
	ft_put_hex_lower.c \
	ft_put_hex_upper.c \
	ft_put_hex.c \
	ft_put_pointer.c \
	ft_put_unsigned_nbr.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_putnbr.c \
	ft_format.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
.SECONDARY: