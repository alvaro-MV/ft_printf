# Nombre de la librería
NAME = libft.a

# Compilador
CC = cc

# Opciones de compilación
CFLAGS = -Wall -Wextra -Werror

# Directorio de archivos fuente
SRCDIR = .

# Obtener automáticamente todos los archivos .c en el directorio
SRCS =	ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_itoa.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_putchar_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_putstr_fd.c \
		  ft_split.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_striteri.c \
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strmapi.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strtrim.c \
		  ft_substr.c \
		  ft_tolower.c \
		  ft_toupper.c
SRCS_BONUS = ft_lstadd_back_bonus.c \
		  ft_lstadd_front_bonus.c \
		  ft_lstdelone_bonus.c \
		  ft_lstclear_bonus.c \
		  ft_lstiter_bonus.c \
		  ft_lstmap_bonus.c \
		  ft_lstlast_bonus.c \
		  ft_lstnew_bonus.c \
		  ft_lstsize_bonus.c

# Objetos generados a partir de los archivos fuente
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
# Regla por defecto
all: $(NAME)

# Regla para construir la librería estática
$(NAME): $(OBJS)
	ar rcs $@ $^

bonus:
	@make SRCS='$(SRCS) $(SRCS_BONUS)'

# Regla para compilar los archivos fuente en objetos

# Regla para limpiar archivos generados
clean:
	rm -f $(OBJS) $(OBJS_BONUS)

# Regla para eliminar todos los archivos generados
fclean: clean
	rm -f $(NAME)

# Regla para reconstruir el proyecto desde cero
re: fclean all

# Phony targets (objetivos ficticios para evitar conflictos con archivos reales)
.PHONY: all clean fclean re bonus
