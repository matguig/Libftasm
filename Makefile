# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matguig <matguig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/22 11:44:16 by matguig           #+#    #+#              #
#    Updated: 2015/03/04 11:45:29 by matguig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

NASM = nasm

SRC = src/ft_strlen.s \
	  src/ft_isalpha.s \
	  src/ft_isascii.s \
	  src/ft_isprint.s \
	  src/ft_isalnum.s \
	  src/ft_isdigit.s \
	  src/ft_toupper.s \
	  src/ft_tolower.s \
	  src/ft_puts.s \
	  src/ft_strcat.s \
	  src/ft_strcpy.s \
	  src/ft_memset.s \
	  src/ft_bzero.s \
	  src/ft_memcpy.s \
	  src/ft_strdup.s \
	  src/ft_cat.s \
	  src/ft_isupper.s \
	  src/ft_islower.s \
	  src/ft_pow.s \
	  src/ft_putstr_fd.s \
	  src/ft_strnew.s \


SRC_TESTS = test/tests_is.c \
			test/tests_mem.c \
			test/tests_various.c \
			test/tests_str.c \
			test/tests_to.c \
			test/tests_bonus.c



OBJ =  $(SRC:.s=.o)
OBJ_TESTS =  $(SRC_TESTS:.c=.o)



all:  $(NAME)

%.o: %.c
	@gcc -Wall -Wextra -Werror -o $@ -c $<
	@echo "\033[42m \033[0m\c"

%.o: %.s
	@$(NASM) -f macho64 $< -g -o $@
	@echo "\033[42m \033[0m\033[32m $@ \033[0m"

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "\033[32m  ** Lib ASM créée ** \033[0m"

test: re $(OBJ_TESTS)
	@gcc -c test/main.c -o test/test.o
	@ld test/test.o $(OBJ_TESTS) -L. -lfts -macosx_version_min 10.8 -lSystem -o tester
	@rm -f $(OBJ_TESTS)
	@rm -f test/test.o
	@echo "\033[31m  Objets tests SUPPRESSION \033[0m"
	@echo "\033[32m  ** Execution des tests :) ** \033[0m"
	@./tester


clean:
	@rm -f $(OBJ)
	@echo "\033[31m  Objets SUPPRESSION \033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m  Lib ASM SUPPRESSION \033[0m"

re: fclean all
