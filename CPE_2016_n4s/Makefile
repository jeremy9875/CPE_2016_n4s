##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_n4s
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Tue May  2 14:00:02 2017 jeremy elkaim
## Last update Sun Jun  4 13:31:00 2017 jeremy elkaim
##

CC			=	gcc

SRC			=	src/main.c			\
				src/lidar.c			\
				src/display_text.c		\
				src/move.c			\
				src/get_next_line.c

OBJS			=	$(SRC:.c=.o)

TMP			=	$(SRC:.c=.c~)

OBJ			=	$(SRC_LIB:.c=.o)

CFLAGS			+=	-Wall -Wextra -Werror

CFLAGS			+=	-I include/

NAME			=	ai

RM			=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(OBJS) $(TMP)
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
