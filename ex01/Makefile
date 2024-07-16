# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besalort <besalort@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/01 17:09:34 by besalort          #+#    #+#              #
#    Updated: 2024/07/16 14:30:55 by besalort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

SRC = ./main.cpp \
	./ClapTrap.cpp \
	./ScavTrap.cpp \

CC =	c++

CPPFLAGS = -Wall -Werror -Wextra

AR = ar rcs

.cpp.o:
		${CC} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

OBJ = $(SRC:.cpp=.o)

$(NAME) :	${OBJ}
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean
			make