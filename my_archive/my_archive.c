/*
** my_archive.c for  in /home/devesno/Projects/b2rush1/my_archive
** 
** Made by 
** Login   <lucas.cheminade@epitech.eu>
** 
** Started on  Sat Mar  4 17:22:19 2017 
** Last update Sat Mar  4 18:14:26 2017 
*/

#include "my_tar_header.h"

int			my_archive(char *pathname)
{
  t_my_posix_header	tar;
  struct stat		file;

  strcpy(tar.name, pathname);
  if (stat(pathname, &file) == -1)
    return (ERROR_RETURN);
  //tar.mode = file.st_mode;
  printf("%d\n", file.st_mode);
  return (0);
}
