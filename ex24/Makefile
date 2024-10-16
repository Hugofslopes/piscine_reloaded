# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 11:51:18 by hfilipe-          #+#    #+#              #
#    Updated: 2024/10/16 12:59:50 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
BUILD_PATH = ./srcs
SRCS = $(addprefix $(BUILD_PATH)/, ft_putchar.c ft_putstr.c ft_strcmp.c \
ft_strlen.c ft_swap.c)
OBJ = $(SRCS:.c=.o)
HEAD = includes/ 

all: $(OBJ)

	@ar rc $(NAME) $(OBJ)

$(OBJ): $(SRCS)

	@gcc -I./$(HEAD) -c $< -o $@

clean: 
	@rm -f ${OBJ}

fclean: 
	@rm -f $(NAME)

re: fclean all