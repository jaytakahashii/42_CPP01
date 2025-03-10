# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jay <jay@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/27 17:48:57 by jay               #+#    #+#              #
#    Updated: 2025/02/28 00:08:55 by jay              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile
MAKEFILE 		= Makefile

# project name
NAME			= HiThisIsBrain

SRC_DIR			= src/
OBJ_DIR			= .obj/

INCLUDE_DIR		= include/
INCLUDE			= -I$(INCLUDE_DIR)
# HEADERS			= $(shell find $(INCLUDE_DIR) -name "*.hpp")

DEPS			= $(HEADERS) $(MAKEFILE)

CC				= c++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

RM				= rm -rf

SRC_FILES		= $(shell find $(SRC_DIR) -name "*.cpp" | sed "s/.*\///")

OBJS			= $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

# color ***********************
Y				= "\033[33m"
R				= "\033[31m"
G				= "\033[32m"
B				= "\033[34m"
X				= "\033[0m"
UP				= "\033[A"
CUT				= "\033[K"
# *****************************

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS) $(DEPS)
	@echo $(Y) "$(NAME) src files successfully compiled\n" $(X)
	@echo $(B) "$(NAME) creating" $(X)
	@printf $(UP)$(CUT)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(G) "!! $(NAME) created !!\n" $(X)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@echo $(Y) "Compiling $<" $(X)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	@printf $(UP)$(CUT)

clean:
	@$(RM) $(OBJ_DIR)
	@echo $(R) "$(OBJ_DIR) has been removed!!" $(X)

fclean:
	@$(RM) $(OBJ_DIR)
	@$(RM) $(NAME)
	@echo $(R) "$(NAME) $(OBJ_DIR) has been removed!!" $(X)

re: fclean all

leak: CFLAGS += -g
leak: LFLAGS += -fsanitize=address
leak: re

.PHONY: all clean fclean re leak
