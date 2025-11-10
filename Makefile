# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaymart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 10:48:55 by amaymart          #+#    #+#              #
#    Updated: 2025/11/02 13:12:54 by amaymart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
	ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c \
	ft_strtrim.c ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c

OBJ = $(SRCS:.c=.o)
DEP = $(SRCS:.c=.d)
FLAGS = -Wall -Werror -Wextra


all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c 
	$(CC) $(FLAGS) -I. -MMD -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
-include $(DEP)
#.SILENT:
.PHONY: all clean fclean re
