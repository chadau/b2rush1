##
## Makefile for  in /home/devesno/System_unix/PSU_2016_navy
## 
## Made by lucas cheminade
## Login   <devesno@epitech.net>
## 
## Started on  Tue Jan 31 11:55:28 2017 lucas cheminade
## Last update Sun Mar  5 15:31:41 2017 
##

CFLAGS	+=	-I./include -g3

SRC	=	main.c \
		my_archive.c \
		check_file_type.c \
		rights2.c \
		get_permission.c \
		check_rights.c \
		rights_to_str.c \
		my_putstr.c \
		my_putchar.c \
		get_size.c

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
