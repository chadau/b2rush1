/*
** my_putstr.c for  in /home/devesno/System_unix/PSU_2016_navy/lib
** 
** Made by lucas cheminade
** Login   <devesno@epitech.net>
** 
** Started on  Tue Jan 31 11:20:07 2017 lucas cheminade
** Last update Tue Jan 31 11:24:16 2017 lucas cheminade
*/

#include "lib.h"

void	my_putstr(char *str)
{
  int	counter;

  counter = 0;
  while (str[counter])
    {
      my_putchar(str[counter]);
      counter = counter + 1;
    }
}
