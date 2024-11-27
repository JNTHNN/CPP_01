# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 19:41:33 by jgasparo          #+#    #+#              #
#    Updated: 2024/11/27 10:05:20 by jgasparo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := brain

CPP := c++
CPPFLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC_DIR		=	./
OBJ_DIR		=	.obj/
INC_DIR		=	include/

SRC_FILES	:= main.cpp 

OBJ_FILES	:=	$(SRC_FILES:.cpp=.o)

SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJ)
		@echo CREATING BRAIN
		@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)
		@sleep 1
		@tput cuu1 dl1
		@echo "BRAIN CREATED  " 


$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<
	
clean:
	@$(RM) -fr $(OBJ_DIR)
	@echo BRAIN DESTROYED BYE !
	@sleep 1
	@tput cuu1 dl1

fclean: clean
	@$(RM) $(NAME)
	@echo BRAIN DESTROYED BYE !
	@sleep 1
	@tput cuu1 dl1

re: fclean all

.PHONY : all clean fclean re