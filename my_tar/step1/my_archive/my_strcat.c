/*
** my_strcat.c for my_strcat in /home/hamid/tmp/Bootstrap/GNL
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Wed Jan 11 16:42:19 2017 Hamidoullah NOUR OMAR
** Last update Sun Jan 22 21:26:31 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	*my_strcat(char *source, char *dest, int i, int j)
{
  char	*result;

  while (source[i] != '\0')
    i++;
  while (dest[j] != '\0')
    j++;
  result = malloc(sizeof(char) * (i + j) + 1);
  i = 0;
  j = 0;
  while (source[i] != '\0')
    {
      result[i] = source[i];
      i++;
    }
  while (dest[j] != '\0')
    {
      result[i] = dest[j];
      i++;
      j++;
    }
  result[i] = '\0';
  return (result);
}
