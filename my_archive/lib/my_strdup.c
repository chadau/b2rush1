/*
** my_strdup.c for Day8 in /home/devesno/Piscine2016/tests
** 
** Made by lucas cheminade
** Login   <devesno@epitech.net>
** 
** Started on  Wed Oct 12 10:23:13 2016 lucas cheminade
** Last update Wed Feb 15 18:32:10 2017 lucas cheminade
*/
#include "lib.h"

char	*my_strdup(char *src)
{
  char	*str;
  int	counter;
  int	size_src;

  size_src = my_strlen(src);
  if ((str = malloc(sizeof(char) * size_src)) == NULL)
    return (NULL);
  counter = 0;
  while (counter < size_src)
    {
      str[counter] = src[counter];
      counter = counter + 1;
    }
  str[counter] = '\0';
  return (str);
}
