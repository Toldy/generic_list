##
## Makefile
## 
## Made by julien colin
## Login   <colin_g@epitech.eu>
## 
## Started on  ven. mars 07 18:51:29 2014 julien colin
## Last update lun. avril 14 05:27:16 2014 julien colin
##

ifdef DEB
	CC = clang
	CFLAGS = -g
else
	CC = gcc
endif

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -I./includes -I../my_list/

LDFLAGS	+= -Wl,-rpath,../lib/ -L../lib/ -lmy_list

NAME	= test_lib

RM	= rm -f

OBJDIR	:= obj
SRCDIR	:= src

# Sources
SRCS		= main.c

# Objects
OBJS		= $(notdir $(SRCS:.c=.o))

# Add directories to files
SRCS		:= $(addprefix $(SRCDIR)/, $(SRCS))
OBJS		:= $(addprefix $(OBJDIR)/, $(OBJS))

# Cause objects creation rules aren't automatic in subdirectories
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
