/*
** my_strlen.c for my_strlen in /home/hamid/Rush/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 09:58:03 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 09:58:32 2017 Hamidoullah NOUR OMAR
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
