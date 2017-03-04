/*
** my_strlen.c for  in /home/devesno/System_unix/PSU_2016_navy/lib
** 
** Made by lucas cheminade
** Login   <devesno@epitech.net>
** 
** Started on  Tue Jan 31 11:25:30 2017 lucas cheminade
** Last update Tue Jan 31 11:29:27 2017 lucas cheminade
*/

#include "lib.h"

int	my_strlen(char *str)
{
  int	counter;

  counter = 0;
  while (str[counter])
    counter = counter + 1;
  return (counter);
}
