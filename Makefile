NAME = libftprintf.a

LIBFT = libf/

LIBFT_NAME = libft.a

CC = gcc

PACK = ar rcs

FRM = rm -rf

CFLAGS = -Wall -Wextra -Werror -I.

CORE_FILES = ft_itoa.c ft_ptoa.c ft_utoa.c ft_xtoa.c printf.c 

CORE_OBJS = $(patsubst %.c, %.o, $(CORE_FILES))
LIBFT_LIB = $(addprefix $(LIBFT), $(LIBFT_NAME))
$(NAME): $(CORE_OBJS)
	@make all -C $(LIBFT)
	@mv $(LIBFT_LIB) $(NAME) ||:
	$(PACK) $(NAME) $(CORE_OBJS)
all: $(NAME)
clean:
	@make clean -C $(LIBFT)
	$(FRM) $(CORE_OBJS)
fclean: clean
	@make fclean -C $(LIBFT)
	$(FRM) $(NAME)
re: fclean all
.PHONY: re clean fclean all