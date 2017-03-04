/*
** compare_str.c for compare_str in /home/hamid/Rush/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 11:03:36 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 11:07:54 2017 Hamidoullah NOUR OMAR
*/

int	compare_str(char *str, char *compare)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == compare[i])
	i++;
      else if (str[i] != compare[i])
	return (-1);
    }
  return (0);
}
