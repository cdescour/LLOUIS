# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdescour <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 21:52:45 by cdescour          #+#    #+#              #
#    Updated: 2023/03/03 18:40:31 by cdescour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binary
NAME = miniRT
LIBFT = libft

# Path
SRC_PATH = ./sources/
OBJ_PATH = ./objets/
IMG_PATH = ./images/
CPPFLAGS = -I./includes/

# Name
SRC_NAME =	main.c error.c parse_file.c check_obj.c check_arg.c\
			get_next_line.c get_next_line_utils.c 
			#args.c free.c file.c gnl.c obj.c obj2.c\
			a_light.c light.c cam.c cyl.c sph.c pln.c data.c img.c mlx.c
OBJ_NAME = $(SRC_NAME:.c=.o)
IMG_NAME =	render.xpm

# Files
SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
IMG = $(addprefix $(IMG_PATH), $(IMG_NAME))

# Flags
LDFLAGS = -L./libft/
LFT = -lft
CC = gcc $(CFLAGS)
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
MLX = -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[34mCreation of $(LIBFT) ...\033[0m"
	@make -C./libft/
	@echo "\033[32m$(LIBFT) created\033[0m"
	@echo "\033[34mCreation of $(NAME) ...\033[0m"
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ) -o $@ $(MLX)
	@echo "\033[32m$(NAME) created\n\033[0m"
	@echo "\033[31mEND: everything is complete.\033[0m"


$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@mkdir $(IMG_PATH) 2> /dev/null || true
	@$(CC) $(CPPFLAGS) -o $@ -c $<

clean:
	@make clean -C ./libft/
	@echo "\033[33mRemoval of .o files of $(NAME) ...\033[0m"
	@rm -f $(OBJ)
	@rm -f $(IMG)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@rmdir $(IMG_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"
	
fclean: clean
	@make fclean -C ./libft/
	@echo "\033[33mRemoval of $(NAME)...\033[0m"
	@rm -f $(NAME)
	@echo "\033[31mBinary $(NAME) deleted\n\033[0m"

re: fclean all

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY: all, clean, fclean, re
