CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT_DIR = lib/libft
FT_PRINTF_DIR = lib/ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

SERVER = server
CLIENT = client

SV_SRCS = src/server.c
SV_OBJS = $(SV_SRCS:.c=.o)

CLIENT_SRCS = src/client.c
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)

SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus

SV_BONUS_SRCS = src/bonus/server_bonus.c
SV_BONUS_OBJS = $(SV_BONUS_SRCS:.c=.o)

CLIENT_BONUS_SRCS = src/bonus/client_bonus.c
CLIENT_BONUS_OBJS = $(CLIENT_BONUS_SRCS:.c=.o)

all: $(SERVER) $(CLIENT)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_DIR)
$(SERVER): $(SV_OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) $(SV_OBJS) $(LIBFT) $(FT_PRINTF) -o server
$(CLIENT): $(CLIENT_OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) $(CLIENT_OBJS) $(LIBFT) $(FT_PRINTF) -o client

$(SERVER_BONUS): $(SV_BONUS_OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) $(SV_BONUS_OBJS) $(LIBFT) $(FT_PRINTF) -o server_bonus
$(CLIENT_BONUS): $(CLIENT_BONUS_OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) $(CLIENT_BONUS_OBJS) $(LIBFT) $(FT_PRINTF) -o client_bonus

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(FT_PRINTF_DIR)
	$(RM) $(SV_OBJS) $(CLIENT_OBJS)
	$(RM) $(SV_BONUS_OBJS) $(CLIENT_BONUS_OBJS)
fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(MAKE) fclean -C $(FT_PRINTF_DIR)
	$(RM) $(SERVER) $(CLIENT)
	$(RM) $(SERVER_BONUS) $(CLIENT_BONUS)
re: fclean all

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)
