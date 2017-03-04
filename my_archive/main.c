/*
** main.c for  in /home/devesno/Projects/b2rush1/my_archive
** 
** Made by 
** Login   <lucas.cheminade@epitech.eu>
** 
** Started on  Sat Mar  4 11:27:45 2017 
** Last update Sat Mar  4 17:54:11 2017 
*/

#include "my_tar_header.h"

int	main(int argc, char **argv)
{
  struct stat	info;
  char		*name;

  name = argv[1];
  my_archive(argv[1]);
  stat(name, &info);
  printf("%d\n", info.st_uid);
  return (0);
}
