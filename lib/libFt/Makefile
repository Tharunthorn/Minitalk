# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 00:52:53 by thmusik           #+#    #+#              #
#    Updated: 2023/05/23 00:32:32 by tharunthorn      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c  ft_split.c\
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
					ft_lstiter.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c\

OBJS			= $(SRCS:.c=.o)
BOBJS			= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -f $(OBJS) $(BOBJS) $(NAME)

fclean:			clean
				$(RM) $(NAME)

bonus:	$(BOBJS)
	ar rcs $(NAME) $(BOBJS)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
