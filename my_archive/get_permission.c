/*
** get_permission.c for get_permission in /home/hamid/b2rush1/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 17:46:48 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 17:49:03 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char    get_permission(struct stat sb)
{
  int   right;

  right = 0;
  if (sb.st_mode & S_ISUID)
    right = right + 4;
  if (sb.st_mode & S_ISGID)
    right = right + 2;
  if (sb.st_mode & S_ISVTX)
    right = right + 1;
  return (check_rights(right));
}
