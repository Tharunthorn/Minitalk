NAME        = libftprintf.a
INCLUDE     = include
LIBFT       = libft
SRC_DIR     = source/
CC          = gcc
CFLAGS      = -Wall -Werror -Wextra -I
RM          = rm -f

SRC_FILES   = ft_printf ft_doprint ft_formatprint ft_putchar ft_putdecimal ft_puthexadacimal ft_putstring ft_putudecimal ft_putpointer
SRC         = $(SRC_FILES:%=$(SRC_DIR)%.c)
OBJ         = $(SRC_FILES:%=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a $(NAME)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $(SRC)
	@ar rcs $(NAME) $(OBJ)

%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@$(RM) -f $(OBJ)
	@make clean -C $(LIBFT)

fclean: clean
	@$(RM) -f $(NAME)
	@$(RM) -f $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re
