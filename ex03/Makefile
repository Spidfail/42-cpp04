# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guhernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 17:32:21 by guhernan          #+#    #+#              #
#    Updated: 2021/11/25 23:22:22 by guhernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++

NAME := materia

CFLAGS := -Wall -Wextra -Werror -std=c++98 -Wshadow -fsanitize=address -g3

###############################################################################

MAIN := main.cpp

SRCS := Character.cpp AMateria.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ_DIR := objs

INC := $(SRCS:%.cpp=%.hpp)

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

###############################################################################

all : 				$(NAME)

$(NAME) :			$(OBJS) $(MAIN)
	$(CC) $(CFLAGS) $^ -o $(NAME)

$(OBJ_DIR)/%.o :	%.cpp $(INC) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

###############################################################################

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

###############################################################################

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

###############################################################################

.PHONY : all clean fclean re
