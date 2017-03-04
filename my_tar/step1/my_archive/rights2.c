/*
** rights2.c for rights2 in /home/hamid/b2rush1/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 17:44:08 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 17:55:53 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char    *rights2(struct stat sb)
{
  char  *rights;
  char  r0;
  char  r1;
  char  r2;
  char  r3;

  r0 = get_permission(sb);
  r1 = usr_right(sb);
  r2 = grp_right(sb);
  r3 = oth_right(sb);
  rights = rights_to_str(r0, r1, r2, r3);
  return (rights);
}
