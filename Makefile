NAME = libftprintf.a

SRCS = ft_itoa.c ft_ptoa.c ft_utoa.c ft_xtoa.c \
	ft_printf.c ft_strtoa.c ft_chtoa.c 


CC = cc

# Opciones de compilación
CFLAGS = -Wall -Wextra -Werror

# Directorio de archivos fuente
SRCDIR = .

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re 
