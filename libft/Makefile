# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knzeng-e <knzeng-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/17 16:35:36 by knzeng-e          #+#    #+#              #
#    Updated: 2016/05/19 14:31:30 by knzeng-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_PATH = ./srcs
INC_PATH = ./includes
#SRC = $(wildcard $(SRC_PATH)*.c)
#SRC = $(SRC_PATH)%.c

SRC = ft_atoi.c \
	  ft_isspace.c \
	  ft_memdel.c \
	  ft_str_is_alpha.c \
	  ft_striter.c \
	  ft_strnstr.c \
	  ft_atoi_base.c \
	  ft_itoa.c \
	  ft_memmove.c \
	  ft_str_is_lowercase.c \
	  ft_striteri.c \
	  ft_strrchr.c \
	  ft_bzero.c \
	  ft_list_push_params.c \
	  ft_memset.c \
	  ft_str_is_numeric.c \
	  ft_strjoin.c \
	  ft_strrev.c \
	  ft_count_words.c \
	  ft_lstadd.c \
	  ft_putchar.c \
	  ft_str_is_printable.c \
	  ft_strlcat.c \
	  ft_strsplit.c \
	  ft_create_elem.c \
	  ft_lstdel.c \
	  ft_putchar_fd.c \
	  ft_str_is_uppercase.c \
	  ft_strlcpy.c \
	  ft_strstr.c \
	  ft_get_int_size.c \
	  ft_lstdelone.c \
	  ft_putendl.c \
	  ft_strcapitalize.c \
	  ft_strlen.c \
	  ft_strsub.c \
	  ft_get_word.c \
	  ft_lstiter.c \
	  ft_putendl_fd.c \
	  ft_strcat.c \
	  ft_strlowcase.c \
	  ft_strtrim.c \
	  ft_is_low.c \
	  ft_lstmap.c \
	  ft_putnbr.c \
	  ft_strchr.c \
	  ft_strmap.c \
	  ft_strupcase.c \
	  ft_is_upper.c \
	  ft_lstnew.c \
	  ft_putnbr_base.c\
	  ft_strclr.c \
	  ft_strmapi.c \
	  ft_tolower.c \
	  ft_isalnum.c \
	  ft_memalloc.c \
	  ft_putnbr_fd.c \
	  ft_strcmp.c \
	  ft_strncat.c \
	  ft_toupper.c \
	  ft_isalpha.c \
	  ft_memccpy.c \
	  ft_putstr.c \
	  ft_strcpy.c \
	  ft_strncmp.c \
	  ft_isascii.c \
	  ft_memchr.c \
	  ft_putstr_fd.c \
	  ft_strdel.c \
	  ft_strncpy.c \
	  ft_isdigit.c \
	  ft_memcmp.c \
	  ft_putstr_non_printable.c \
	  ft_strdup.c \
	  ft_strnequ.c \
	  ft_isprint.c \
	  ft_memcpy.c \
	  ft_split_whitespaces.c \
	  ft_strequ.c \
	  ft_strnew.c

OBJ = $(patsubst %.c,$(SRC_PATH)/%.o, $(SRC))

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I$(INC_PATH)

all	: $(NAME)

$(NAME) : $(OBJ)
	@echo "Compiling $@"
	@ar rc $@ $^
	@ranlib $@

$(SRC_PATH)/%.o: $(SRC_PATH)/%.c
	@echo "Compiling $@ from $^"
	@$(CC) $(CFLAGS) -c -o $@ $^

clean : all
	@echo "Remove all .o files"
	@rm -rf $(OBJ)

fclean : clean
	@echo "removing $(NAME)"
	@rm -rf $(NAME)

norme :
	norminette $(INC_PATH) $(SRC_PATH)

re : fclean
	@make all

.PHONY : all clean fclean norme re
