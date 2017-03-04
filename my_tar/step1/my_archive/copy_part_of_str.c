/*
** copy_part_of_str.c for copy_part_of_str in /home/hamid/Rush/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 10:22:18 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 10:28:26 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	*copy_part_of_str(char *str, int start, int end)
{
  int	i;
  char	*cpy;

  i = 0;
  cpy = malloc(sizeof(char) * (end - start) + 1);
  while (start <= end)
    {
      cpy[i] = str[start];
      i++;
      start++;
    }
  return (cpy);
}
