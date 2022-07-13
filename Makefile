# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 17:53:26 by aparedes          #+#    #+#              #
#    Updated: 2022/07/05 11:08:06 by aparedes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CODEDRIS	=. lib
INCLDRIS	= /includes/push_swap.h


CC			= gcc
# Automatic ad -I into each include directory
CFLAGS		= -Wall -Wextra -Werror -g
#  for style iteration foreach and regular expression completions (wildcard)
CFILES		=		$(wildcard src/*.c)			\
					$(wildcard utils/*.c)		\
					$(wildcard extras/*.c)		\
					$(wildcard instruc/*.c)

# regular exresiom for replacement 
OBJ	= $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ -I $(INCLDRIS) $^

$(BIN):
	mkdir -p $(BIN)

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@
	
clean: 
	@rm -f $(OBJ)
	@rm -rf $(BIN) 

fclean:	clean
	@rm -f $(NAME) $(OBJ) 
	@rm -rf $(BIN) 
help:
	@echo "src: $(NAME)"
	@echo "obj: $(OBJ)"

re: fclean all

.PHONY: clean fclean re all


