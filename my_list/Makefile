##
## Makefile
## 
## Made by julien colin
## Login   <colin_g@epitech.eu>
## 
## Started on  dim. avril 06 03:34:43 2014 julien colin
## Last update mar. avril 15 05:06:21 2014 julien colin
##

ifdef DEB
	CC = clang
	CFLAGS = -g
else
	CC = gcc
endif

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -fPIC
CFLAGS	+= -I./

NAME	= libmy_list.so

SRCS	= list_create.c \
		  list_push.c \
		  list_node.c \
		  list_destroy.c \
		  list_pop.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -shared -o $(NAME)
	cp $(NAME) ../lib

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../cli/$(NAME)
	$(RM) ../srv/$(NAME)
	$(RM) ../$(NAME)

re: fclean all

.PHONY: all clean fclean re

