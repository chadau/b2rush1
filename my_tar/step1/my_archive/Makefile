## Makefile for Makefile in /home/hamid/PSU_2016_minishell1
## 
## Made by Hamidoullah NOUR OMAR
## Login   <hamid@epitech.net>
## 
## Started on  Sun Jan 22 22:28:59 2017 Hamidoullah NOUR OMAR
## Last update Sat Mar  4 16:34:21 2017 Hamidoullah NOUR OMAR
##


CC	=	gcc

NAME	=	my_archive

SRC	=	malloc_tab.c \
		my_putchar.c \
		my_putstr.c \
		my_revstr.c \
		my_strcat.c \
		my_strdup.c \
		my_strlen.c \
		check_file_type.c \
		check_rights.c \
		rights_to_str.c \
		my_archive.c \
		int_to_string.c \
		char_to_str.c

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f


all:	$(OBJ) $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
