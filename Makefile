# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 08:46:55 by jrenault          #+#    #+#              #
#    Updated: 2023/02/16 10:06:11 by jrenault         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

.PHONY:     			all clear mkbuild lib clean fclean re

NAME					= push_swap

BUILD_DIR				= build/
	
HEADER_DIR				= header/
HEADER_FILE				= push_swap.h
HEADERS_WITH_PATH		= $(addprefix $(HEADER_DIR),$(HEADER_FILE))

DIR						= src/
SRC			 			= 	main.c \

OBJECTS			    	= ${addprefix ${BUILD_DIR},${SRC:.c=.o}}
	
LIBFT					= libft.a
LIB_DIR					= libft/
	
GCC						= cc
CFLAGS					= -Wall -Wextra -Werror -g

RM 						= rm -rf
CLEAR					= clear


$(BUILD_DIR)%.o:		$(DIR)%.c ${HEADERS_WITH_PATH} Makefile
						mkdir -p $(@D)
						$(GCC) $(CFLAGS) -I$(HEADER_DIR) -c $< -o $@

all: 					mkbuild lib $(HEADER_DIR) $(NAME)
						
mkbuild:
						mkdir -p build

clear:
						$(CLEAR)
						
$(NAME): 				$(OBJECTS) $(LIB_DIR)$(LIBFT)
						$(GCC) $(CFLAGS) $(OBJECTS) -o $(NAME) $(LIB_DIR)$(LIBFT)

lib:
						make -C $(LIB_DIR)
						
clean:					
						${RM} $(OBJECTS)
						make clean -C $(LIB_DIR)
						${RM} $(BUILD_DIR)

fclean:					clean
						${RM} ${NAME}
						make fclean -C $(LIB_DIR)

re:						fclean all
						$(MAKE) all