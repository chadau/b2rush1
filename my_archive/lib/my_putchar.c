/*
** my_putchar.c for  in /home/devesno/System_unix/PSU_2016_navy/lib
** 
** Made by lucas cheminade
** Login   <devesno@epitech.net>
** 
** Started on  Tue Jan 31 11:18:55 2017 lucas cheminade
** Last update Tue Jan 31 11:20:38 2017 lucas cheminade
*/

#include "lib.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
