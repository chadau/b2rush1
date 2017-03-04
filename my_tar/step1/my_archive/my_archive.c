/*
** my_archive.c for my_archive in /home/hamid/Rush/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Fri Mar  3 19:33:01 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 17:02:03 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

void	my_archive(char **str, int ac)
{
  struct stat	sb;
  int	fd;
  int	i;
  char	*buffer;
  int	size;
  char	*save;
  int	final_size;
  char	*name;

  i = 0;
  final_size = 0;
  save = malloc(sizeof(char) * 1);
  while (i++, i < ac)
    {
      stat(str[i], &sb);
      buffer = malloc(sizeof(char) * sb.st_size + 1);
      fd = open(str[i], O_RDONLY);
      size = read(fd, buffer, sb.st_size);
      name = name_size_right(str[i]);
      buffer = my_strcat(name, buffer, 0, 0);
      save = my_strcat(save, buffer, 0, 0);
      final_size = final_size + sb.st_size + my_strlen(name);
    }
  archive_file(save, final_size);
}

char	*name_size_right(char *str)
{
  char	*name;
  char	*rights;
  char	*size;
  struct stat	sb;
  
  stat(str, &sb);
  name = my_strcat("\nNAME OF FILE: ", str, 0, 0);
  rights = assemble_rights(sb);
  name = my_strcat(name, "\nRIGHTS: ", 0, 0);
  name = my_strcat(name, rights, 0, 0);
  name = my_strcat(name, "\nSIZE: ", 0, 0);
  size = int_to_string(sb.st_size);
  name = my_strcat(name, size, 0, 0);
  name = my_strcat(name, "\n\n", 0, 0);
  return (name);
}

void	archive_file(char *str, int size)
{
  int	fd;

  fd = open("./toto", O_RDWR | O_CREAT, 0777);
  write(fd, str, size);
}

int	check_if_file_exist(char *str)
{
  if (open(str, O_RDONLY) == -1)
    return (-1);
  else
    return (0);
}

int	main(int ac, char **av)
{
  int	i;

  i = 0;
  while (i < ac)
    {
      if (check_if_file_exist(av[i]))
	return (84);
      i++;
    }
  my_archive(av, ac);
  return (0);
}
