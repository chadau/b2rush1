/*
** my_revstr.c for my_revstr in /home/hamid/tmp
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Wed Oct 26 20:22:15 2016 Hamidoullah NOUR OMAR
** Last update Sun Jan 22 21:28:15 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	*my_revstr(char *str)
{
  int	i;
  int	o;
  char	swap;

  o = 0;
  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  i = i - 1;
  while (i >= o)
    {
      swap = str[o];
      str[o] = str[i];
      str[i] = swap;
      o = o + 1;
      i = i - 1;
    }
  return (str);
}
