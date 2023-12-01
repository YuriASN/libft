# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysantos- <ysantos-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 22:06:51 by ysantos-          #+#    #+#              #
#    Updated: 2023/12/01 11:27:31 by ysantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_atoi.c ft_putchar_fd.c ft_bzero.c ft_putendl_fd.c \
ft_calloc.c ft_putnbr_fd.c ft_isalnum.c ft_putstr_fd.c ft_isalpha.c \
ft_split.c ft_isascii.c ft_strchr.c ft_isdigit.c ft_strdup.c ft_isprint.c \
ft_striteri.c ft_itoa.c  ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
ft_memchr.c ft_tolower.c ft_memcmp.c ft_toupper.c ft_memcpy.c libft.h ft_memmove.c \
get_next_line.c get_next_line_utils.c printf_utils.c ft_printf.c arrays.c \
ft_trimm_white_spaces.c ft_str_add.c ft_isspace.c ft_is_all_spaces.c ft_str_addcenter.c

BN = ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c \
ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
get_next_line_bonus.c get_next_line_utils_bonus.c 

OBJ_PATH = obj/
OBJ_NAME = $(SRC:.c=.o)
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

$(OBJ_PATH)%.o:$(SRC)%.c
	@mkdir -p $(OBJ_PATH)
	@cp libft.h obj/
	@$(CC) $(FLAGS) -c $< -o $@

BNOBJ_PATH = obj/
BNOBJ_NAME = $(BN:.c=.o)
BNOBJ = $(addprefix $(BNOBJ_PATH), $(BNOBJ_NAME))

$(BNOBJ_PATH)%.o:$(BN)%.c
	@mkdir -p $(OBJ_PATH)
	@cp libft.h obj/
	@$(CC) $(FLAGS) -c $< -o $@

CC = cc
FLAGS = -Wall -Wextra -Werror -g


all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo "\033[92mLibft compiled!\033[m"

bonus: $(OBJ) $(BNOBJ)
	@ar rcs $(NAME) $(OBJ) $(BNOBJ)
	@echo "\033[92mLibft with bonus compiled!\033[m"

clean:
	@/bin/rm -rf obj
	@echo "\e[0;93mclean done.\033[m"

fclean: clean
	@/bin/rm -f $(NAME) libft.h.gch libft.so
	@echo "\e[0;93mfclean done.\033[m"

re: fclean all

rebonus: fclean bonus

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC) $(BN)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BNOBJ)