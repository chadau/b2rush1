##
## Makefile for  in /home/devesno/System_unix/PSU_2016_navy
## 
## Made by lucas cheminade
## Login   <devesno@epitech.net>
## 
## Started on  Tue Jan 31 11:55:28 2017 lucas cheminade
## Last update Sat Mar  4 17:49:37 2017 
##

CFLAGS	+=	-I./include -g3

SRC	=	main.c \
		my_archive.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_archive

all:		$(NAME)

$(NAME):	LIB $(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib -lmy

LIB:
	make re -C lib

clean_lib:
	make clean -C lib

clean:		clean_lib
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:		fclean all

.SILENT:
