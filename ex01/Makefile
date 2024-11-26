# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 21:39:19 by jgasparo          #+#    #+#              #
#    Updated: 2024/11/26 19:17:41 by jgasparo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombie

CPP := c++
CPPFLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC_DIR		=	sources/
OBJ_DIR		=	.obj/
INC_DIR		=	include/

SRC_FILES	:= main.cpp Zombie.cpp zombieHorde.cpp 

OBJ_FILES	:=	$(SRC_FILES:.cpp=.o)

SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJ)
		@echo CREATING ZOMBIE
		@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)
		@sleep 1
		@tput cuu1 dl1
		@echo "ZOMBIE CREATED  " 


$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<
	
clean:
	@$(RM) -fr $(OBJ_DIR)
	@echo ZOMBIE DESTROYED BYE !
	@sleep 1
	@tput cuu1 dl1

fclean: clean
	@$(RM) $(NAME)
	@echo ZOMBIE DESTROYED BYE !
	@sleep 1
	@tput cuu1 dl1

re: fclean all

.PHONY : all clean fclean re