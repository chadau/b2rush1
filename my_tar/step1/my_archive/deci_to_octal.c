/*
** deci_to_octal.c for deci_to_octal in /home/hamid/b2rush1/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 19:11:33 2017 Hamidoullah NOUR OMAR
** Last update Sun Mar  5 15:30:07 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	*deci_to_octal(int nb)
{
  char	*new;
  char	c;
  char	*str;
  int	save_nb;

  new = malloc(sizeof(char) * 12 + 1);
  while (nb != 0)
    {
      save_nb = nb % 8;
      nb = nb / 8;
      c = save_nb + '0';
      str = char_to_str(c);
      new = my_strcat(new, str, 0, 0);
    }
  new = my_revstr(new);
  return (new);
}

char	*get_id(int nb)
{
  char	*octal;
  char	*nb_zero;
  int	i;

  i = 0;
  octal = deci_to_octal(nb);
  nb_zero = "0000000";
  octal = my_revstr(octal);
  while (octal[i] != '\0')
    {
      nb_zero = replace_char_x(nb_zero, i, octal[i]);
      i++;
    }
  nb_zero = my_revstr(nb_zero);
}

int	main(int ac, char **av)
{
  printf("%s", get_id(atoi(av[1])));
}
