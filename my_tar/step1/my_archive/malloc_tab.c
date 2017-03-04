/*
** malloc_tab.c for malloc_tab in /home/hamid/tmp/Bootstrap/Minishell_1
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Tue Jan 17 17:05:34 2017 Hamidoullah NOUR OMAR
** Last update Sat Feb 18 15:55:04 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	**malloc_tab(char **tab, int nb_arg, int l_lenght)
{
  int	i;
  int	y;
  int	x;

  i = 0;
  y = 0;
  x = 0;
  tab = malloc(sizeof(char *) * (nb_arg + 1));
  while (y < nb_arg)
    {
      tab[y] = malloc(sizeof(char) * (l_lenght + 1));
      tab[y][l_lenght + 1] = '\0';
      y++;
    }
  tab[y] = NULL;
  return (tab);
}
