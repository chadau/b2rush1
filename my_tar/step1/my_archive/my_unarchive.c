/*
** my_unarchive.c for my_unarchive in /home/hamid/Rush/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 10:33:44 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 13:08:30 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

void	my_unarchive(char *str)
{
  struct stat	sb;
  int	fd;
  int	size;
  char	*buffer;
  char	*file;
  int	start;

  start = 0;
  stat(str, &sb);
  buffer = malloc(sizeof(char) * sb.st_size + 1);
  fd = open(str, O_RDONLY);
  size = read(fd, buffer, sb.st_size);
  while (start <= sb.st_size)
    {
      if (buffer[start] == 'N')
	check_if_file(buffer, start);
      start++;
    }
}

t_elem	check_if_file(char *str, int start)
{
  t_elem	elem;
  char	*check;
  int	end;
  char	*test;////////////

  elem.start = start;
  check = copy_part_of_str(str, start, start + my_strlen("NEXT FILE:") - 1);
  if (compare_str(check, "NEXT FILE:") == 0)
    {
      start = start + my_strlen(check) + 1;
      end = start;
      while (str[end] != '\n')
	end++;
      elem.name_of_file = copy_part_of_str(str, start, end);
      elem.start = end + 2;
      while (str[end] != '\0')
	{
	  if (str[end] == 'N')
	    
	}
    }
}

int	main(int ac, char **av)
{
  my_unarchive(av[1]);
}
