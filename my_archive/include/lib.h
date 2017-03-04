/*
** lib.h for  in /home/devesno/System_unix/PSU_2016_navy/lib
** 
** Made by lucas cheminade
** Login   <devesno@epitech.net>
** 
** Started on  Tue Jan 31 11:20:43 2017 lucas cheminade
** Last update Wed Feb 15 18:33:29 2017 lucas cheminade
*/

#ifndef LIB_H_
# define LIB_H_

#include <unistd.h>
#include <stdlib.h>
void	my_putchar(char);
void	my_putstr(char *);
int	my_strlen(char *);
int     my_put_nbr(int nb);
int	my_get_nbr(char *);
int	if_neg(char *);
int     my_strcmp(char *, char *);
char    *my_strdup(char *src);

#endif /* LIB_H_ */
