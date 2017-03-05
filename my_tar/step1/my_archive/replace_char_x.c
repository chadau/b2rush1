/*
** replace_char_x.c for replace_char_x in /home/hamid/PSU_2016_navy
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Feb 11 16:12:24 2017 Hamidoullah NOUR OMAR
** Last update Thu Feb 16 18:58:47 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	*replace_char_x(char *str, int pos, char c)
{
  char	*cpy;
  int	i;
  int	p;

  i = 0;
  p = 0;
  cpy = malloc(sizeof(char) * (my_strlen(str) + 1));
  while (i < my_strlen(str))
    {
      if (i == pos)
	cpy[i] = c;
      else
	cpy[i] = str[i];
      i++;
    }
  cpy[i] = '\0';
  return (cpy);
}

