/*
** putnbr.c for my_put_nbr in /home/devesno/test
** 
** Made by lucas cheminade
** Login   <devesno@epitech.net>
** 
** Started on  Thu Oct 13 18:34:42 2016 lucas cheminade
** Last update Tue Jan 31 23:33:58 2017 lucas cheminade
*/

#include "lib.h"

int	my_put_nbr(int nb)
{
  int	div;

  div = 1;
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  while (nb / div / 10 > 0)
    {
      div = div * 10;
    }
  while (div > 0)
    {
      my_putchar((nb / div) % 10 + 48);
      div = div / 10;
    }
  return (0);
}
