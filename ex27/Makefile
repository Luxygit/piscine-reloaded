# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dievarga <dievarga@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/29 13:56:25 by dievarga          #+#    #+#              #
#    Updated: 2025/09/29 19:49:40 by dievarga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

# Library name
NAME    = ft_display_file

# Source and object files
#SRC_DIR = srcs
SRC     = ft_display_file.c
#SRCS = $(wildcard srcs/*.c)
OBJ     = $(SRC:.c=.o)

# Default rule
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Clean object files
clean:
	rm -f $(OBJ)

# Clean objects + library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all
