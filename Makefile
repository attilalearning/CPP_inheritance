# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aistok <aistok@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/04 13:49:21 by aistok            #+#    #+#              #
#    Updated: 2025/11/24 19:37:43 by aistok           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
DFLAGS		=	-O0 -g3
#-fsanitise=address
RM			=	rm -rf

INC_DIR		=	./inc
SRC_DIR		=	./src
OBJ_DIR		=	./obj
BIN_DIR		=	./bin

NAME		=	$(BIN_DIR)/main

INC_FILES	=	$(INC_DIR)/Obj.hpp \
				$(INC_DIR)/Obj2.hpp

SRC_FILES	=	$(SRC_DIR)/Obj.cpp \
				$(SRC_DIR)/Obj2.cpp \
				$(SRC_DIR)/main.cpp

OBJ_FILES	=	$(subst $(SRC_DIR)/,$(OBJ_DIR)/,$(SRC_FILES:%.cpp=%.o))

all: $(NAME)

$(NAME): $(INC_FILES) $(OBJ_FILES) | $(BIN_DIR)
	$(CC) $(CFLAGS) $(DFLAGS) -I$(INC_DIR) $(OBJ_FILES) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC_FILES) | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(DFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR) $(BIN_DIR):
	mkdir -p $@

test:
	@echo SRC_FILES:
	@echo $(SRC_FILES)
	@echo OBJ_FILES:
	@echo $(OBJ_FILES)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(BIN_DIR)

re: fclean all

.PHONY: all clean fclean re \
		test

