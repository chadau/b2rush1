/*
** int_to_string.c for int_to_string in /home/hamid/b2rush1/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 15:42:23 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 17:00:19 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

int	check_if_nb_sup_10(int nb)
{
  if (nb >= 10)
    return (1);
  else if (nb < 10)
    return (0);
}

char	*int_to_string(int nb)
{
  int	ret;
  char	c;
  char	*new;
  char	*str;
  int	save_nb;

  ret = 10;
  save_nb = check_if_nb_sup_10(nb);
  new = malloc(sizeof(char) * 12 + 1);
  while (ret * 10 < nb)
    {
      save_nb++;
      ret = ret * 10;
    }
  while (save_nb >= 0)
    {
      c = (nb % 10) + '0';
      nb = nb / 10;
      str = char_to_str(c);
      new = my_strcat(new, str, 0, 0);
      ret = ret / 10;
      save_nb = save_nb - 1;
    }
  new = my_revstr(new);
  return (new);
}
