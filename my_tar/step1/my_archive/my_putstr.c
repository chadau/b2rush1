/*
** my_putstr.c for my_putstr.c in /home/hamid/tmp/Bootstrap/Minishell_1
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Tue Jan 17 19:32:00 2017 Hamidoullah NOUR OMAR
** Last update Sun Jan 22 21:26:15 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

void	my_putstr(char *str)
{
  int	i;

  i = -1;
  while (i++, str[i] != '\0')
    my_putchar(str[i]);
}
