/*
** my_strdup.c for my_strdup in /home/hamid/CPool_Day08/task01
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Thu Oct 13 14:12:19 2016 Hamidoullah NOUR OMAR
** Last update Fri Mar  3 19:55:15 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	*my_strdup(char *src)
{
  int	i;
  int	p;
  char	*cpy;

  i = 0;
  p = 0;
  cpy = malloc(sizeof(char) * (my_strlen(src) + 1));
  while (i < my_strlen(src))
    {
      cpy[i] = src[i];
      i = i + 1;
    }
  cpy[i] = '\0';
  return (cpy);
}
