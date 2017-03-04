/*
** my_get_nbr.c for  in /home/devesno/System_unix/PSU_2016_navy_bootstrap/exercise2
** 
** Made by lucas cheminade
** Login   <devesno@epitech.net>
** 
** Started on  Mon Jan 30 14:17:43 2017 lucas cheminade
** Last update Thu Feb  2 17:44:38 2017 lucas cheminade
*/

#include "lib.h"

int	my_get_nbr(char *str)
{
  int	result;
  int	count;
  int	mult;

  result = 0;
  count = 0;
  mult = 1;
  if (str[0] == '-')
    return (if_neg(str));
  while (str[count] != '\0')
    count = count + 1;
  count = count - 1;
  while (count >= 0)
    {
      result = result + (str[count] - 48) * mult;
      count = count - 1;
      mult = mult * 10;
    }
  return (result);
}

int	if_neg(char *str)
{
  int	counter;

  counter = 0;
  while (str[counter])
    {
      str[counter] = str[counter + 1];
      counter = counter + 1;
    }
  return (my_get_nbr(str) * -1);
}
