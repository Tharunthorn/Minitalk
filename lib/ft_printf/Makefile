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
SRC         = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ         = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJF        = .cache_exists

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJ)
	@echo "ft_printf compiled!"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) -rf $(OBJ_DIR)
	@make clean -C $(LIBFT)
	@echo "ft_printf object files cleaned!"

fclean: clean
	@$(RM) -f $(NAME)
	@$(RM) -f $(LIBFT)/libft.a
	@echo "ft_printf executable files cleaned!"
	@echo "libft executable files cleaned!"

re: fclean all
	@echo "Cleaned and rebuilt everything for ft_printf!"

.PHONY: all clean fclean re
