/*
** my_strcmp.c for  in /home/devesno/System_unix/PSU_2016_minishell1
** 
** Made by lucas cheminade
** Login   <devesno@epitech.net>
** 
** Started on  Sun Jan 22 20:23:45 2017 lucas cheminade
** Last update Sat Feb  4 16:18:07 2017 lucas cheminade
*/

#include "lib.h"

int	my_strcmp(char *str1, char *str2)
{
  int	counter;

  if (str1 == NULL || str2 == NULL)
    return (84);
  counter = 0;
  if (my_strlen(str1) != my_strlen(str2))
    return (1);
  while (str1[counter])
    {
      if (str1[counter] != str2[counter])
	return (1);
      counter = counter + 1;
    }
  return (0);
}
