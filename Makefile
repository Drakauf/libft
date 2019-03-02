# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: shthevak <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/02/25 12:55:34 by shthevak     #+#   ##    ##    #+#        #
#    Updated: 2019/03/02 17:27:47 by shthevak    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY : all clean fclean re sobj uobj

NAME = libft.a

# **************************************************************************** #
#									PATH                                       #
# **************************************************************************** #

SRC_PATH = ./src/
OBJ_PATH = ./obj/
INC_PATH = ./includes/

SSRC_PATH = $(addprefix $(SRC_PATH), str/)
SOBJ_PATH = $(addprefix $(OBJ_PATH), str/)


USRC_PATH = $(addprefix $(SRC_PATH), unix/)
UOBJ_PATH = $(addprefix $(OBJ_PATH), unix/)

# **************************************************************************** #
# 									SRCS                                       #
# **************************************************************************** #

SINC_NAME = str.h
SSRC_NAME = ft_putchar.c ft_putstr.c ft_strlen.c ft_strdup.c ft_strdel.c\
			ft_strjoin.c ft_strcat.c ft_strjoinFree.c ft_bzero.c ft_strnew.c\
			ft_strjoinInsert.c

UINC_NAME = unix.h
USRC_NAME =

# **************************************************************************** #
#  									VAR                                        #
# **************************************************************************** #

SOBJ_NAME = $(SSRC_NAME:.c=.o)
SOBJ = $(addprefix $(SOBJ_PATH), $(SOBJ_NAME))
SINC = $(addprefix $(INC_PATH), $(SINC_NAME))

UOBJ_NAME = $(USRC_NAME:.c=.o)
UOBJ = $(addprefix $(UOBJ_PATH), $(UOBJ_NAME))
UINC = $(addprefix $(INC_PATH), $(UINC_NAME))

# **************************************************************************** #
#  									FLAG                                       #
# **************************************************************************** #

ifndef LFLAG
	LFLAG = -Wall -Werror -Wexta
endif

# **************************************************************************** #
# 									REGLES                                     #
# **************************************************************************** #

all : $(OBJ_PATH) $(NAME)

$(NAME): $(SOBJ) $(UOBJ)
	@ar rcs $(NAME) $(SOBJ) $(UOBJ)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH) 2> /dev/null
	@mkdir -p $(SOBJ_PATH) 2> /dev/null
	@mkdir -p $(UOBJ_PATH) 2> /dev/null

$(SOBJ_PATH)%.o: $(SSRC_PATH)%.c $(SINC)
	gcc $(FLAGS) -I $(INC_PATH) -o $@ -c $<

$(UOBJ_PATH)%.o: $(USRC_PATH)%.c $(UINC)
	gcc $(FLAGS) -I $(INC_PATH) -o $@ -c $<

clean: 
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all
