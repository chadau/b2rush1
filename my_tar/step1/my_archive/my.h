/*
** my.h for my in /home/hamid/Rush/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Fri Mar  3 19:28:04 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 11:19:49 2017 Hamidoullah NOUR OMAR
*/

#ifndef MY_H_
# define MY_H_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <dirent.h>

typedef	struct	s_elem
{
  int	start;
  int	end;
  char	*name_of_file;
}		t_elem;

char	*my_revstr(char *);
char	**malloc_tab(char **, int, int);
void	my_putchar(char);
char	*my_strcat(char *, char *, int, int);
int	my_strlen(char *);
void	my_putstr(char *);
char	*my_strdup(char *);
void	archive_file(char *, int);
t_elem	check_if_file(char *, int);
char	*copy_part_of_str(char *, int, int);

#endif /* MY_H_ */
