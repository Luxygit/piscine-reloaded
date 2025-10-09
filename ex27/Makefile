# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dievarga <dievarga@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/29 13:56:25 by dievarga          #+#    #+#              #
#    Updated: 2025/10/09 11:29:59 by dievarga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = ft_display_file
SRC     = display_file.c
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
OBJ     = $(SRC:%.c=%.o)

# Default rule
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Rule to compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ)

# Clean objects + library
fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean 
