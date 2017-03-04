##
## Makefile for  in /home/devesno/System_unix/PSU_2016_navy
## 
## Made by lucas cheminade
## Login   <devesno@epitech.net>
## 
## Started on  Tue Jan 31 10:51:01 2017 lucas cheminade
## Last update Wed Feb 15 18:31:42 2017 lucas cheminade
##

CFLAGS	+=	-I.

SRC	=	my_strlen.c \
		my_putstr.c \
		my_putchar.c \
		my_put_nbr.c \
		my_get_nbr.c \
		my_strcmp.c \
		my_strdup.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all

.SILENT:
