/*
** my_archive.c for  in /home/devesno/Projects/b2rush1/my_archive
** 
** Made by 
** Login   <lucas.cheminade@epitech.eu>
** 
** Started on  Sat Mar  4 17:22:19 2017 
** Last update Sun Mar  5 16:37:40 2017 
*/

#include "my_tar_header.h"
#include "my.h"

int			my_archive(char *pathname)
{
  t_my_posix_header	tar;
  struct stat		file;
  char			*save;

  strcpy(tar.name, pathname);
  if (stat(pathname, &file) == -1)
    return (ERROR_RETURN);
  sprintf(save, "000%s", rights2(file));
  strcpy(tar.mode, save);
  save = get_size(file.st_size);
  strcpy(tar.size, save);
  free(save);
  save = get_size(file.st_mtime);
  strcpy(tar.mtime, save);
  free(save);
  printf("%s\n", tar.size);
  return (0);
}
