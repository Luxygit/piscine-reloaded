# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dievarga <dievarga@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/29 13:56:25 by dievarga          #+#    #+#              #
#    Updated: 2025/09/29 14:18:29 by dievarga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I includes

# Library name
NAME    = libft.a

# Source and object files
SRC_DIR = srcs
SRC     = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
#SRCS = $(wildcard srcs/*.c) to add all .c functions in a file
OBJ     = $(SRC:%.c=$(SRC_DIR)/%.o)

# Default rule
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Rule to compile .c to .o
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ)

# Clean objects + library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all
