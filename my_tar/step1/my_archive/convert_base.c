/*
** convert_base.c for convert_base in /home/hamid/b2rush1/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sun Mar  5 15:30:44 2017 Hamidoullah NOUR OMAR
** Last update Sun Mar  5 15:37:53 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char    *convert_base(int nb, int base)
{
  char  *new;
  char  c;
  char  *str;
  int   save_nb;

  new = malloc(sizeof(char) * 12 + 1);
  while (nb != 0)
    {
      save_nb = nb % base;
      nb = nb / base;
      c = save_nb + '0';
      str = char_to_str(c);
      new = my_strcat(new, str, 0, 0);
    }
  new = my_revstr(new);
  return (new);
}
