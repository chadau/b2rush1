/*
** check_file_type.c for check_file_type in /home/hamid/b2rush1/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 14:17:42 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 14:20:33 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	file_type(struct stat sb)
{
  if (S_ISDIR(sb.st_mode))
    return ('d');
  else if (S_ISSOCK(sb.st_mode))
    return ('s');
  else
    return ('-');
}
