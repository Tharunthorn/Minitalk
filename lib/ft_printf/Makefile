NAME        = libftprintf.a
INCLUDE     = include
LIBFT       = libft
SRC_DIR     = source/
OBJ_DIR     = obj/
CC          = gcc
CFLAGS      = -Wall -Werror -Wextra -I
RM          = rm -f
AR          = ar rcs

SRC_FILES   = ft_printf ft_doprint ft_formatprint ft_putchar ft_putdecimal ft_puthexadacimal ft_putstring ft_putudecimal ft_putpointer
SRC         = $(SRC_FILES:%=$(SRC_DIR)%.c)
OBJ         = $(SRC_FILES:%=$(OBJ_DIR)%.o)

OBJF        = .cache_exists

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) -rf $(OBJ_DIR)
	@make clean -C $(LIBFT)

fclean: clean
	@$(RM) -f $(NAME)
	@$(RM) -f $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re
