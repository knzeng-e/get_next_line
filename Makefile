# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/02 17:50:51 by knzeng-e          #+#    #+#              #
#    Updated: 2016/06/02 19:21:35 by knzeng-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

LIB_SRCS = libft/srcs/*.c

OBJ_DIR = ./obj

OBJ = $(OBJ_DIR)/get_next_line.o

cmpl: $(NAME)

$(NAME): lib $(OBJ)
	@gcc get_next_line.c main.c -o $@ -Wall -Werror -Wextra -g -I libft/includes -L libft/ -lft

lib: $(LIB_SRCS)
	@make -C libft/ fclean && make -C libft/
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%o: %c
	@gcc -o $@ -c -I libft/includes $<

clean:
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean
	@make cmpl
