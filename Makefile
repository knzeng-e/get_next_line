# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/02 17:50:51 by knzeng-e          #+#    #+#              #
#    Updated: 2016/06/03 17:14:05 by knzeng-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

LIB_SRCS = libft/srcs/*.c

OBJ_DIR = ./obj

OBJ = $(OBJ_DIR)/get_next_line.o

cmpl: $(NAME)

$(NAME): lib $(OBJ)
	@gcc get_next_line.c main.c -o $@ -Wall -Werror -Wextra -I libft/includes -L libft/ -lft
	@echo "\033[31m >>> \033[32mCOMPILATION SUCCEDED!\033[31m <<<\033[0m"

lib: $(LIB_SRCS)
	clear
	@echo "\033[31m >>> \033[32mCOMPILING \"$(NAME)\"..\033[31m <<<\033[0m"
	@make -C libft/ fclean && make -C libft/
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%o: %c
	@gcc -o $@ -c -I libft/includes $<

clean:
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "\033[31m--- \033[33;4mOBJECT FILES DELETED\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m--- \033[33;4m \"$(NAME)\" EXECUTABLE DELETED\033[0m"

re: fclean
	@make cmpl
