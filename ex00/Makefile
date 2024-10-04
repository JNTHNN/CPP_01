# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 14:39:41 by jgasparo          #+#    #+#              #
#    Updated: 2024/10/04 17:26:53 by jgasparo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombie

CPP := c++
CPPFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all: $(NAME)

$(NAME): $(SRC)
		@echo CREATING ZOMBIE
		@$(CPP) $(CPPFLAGS) -o $(NAME) $(SRC)
		@sleep 1
		@tput cuu1 dl1
		@echo "ZOMBIE CREATED  " 

clean:
	@$(RM) $(NAME)
	@echo ZOMBIE DESTROYED BYE !
	@sleep 1
	@tput cuu1 dl1

.PHONY : all clean