/*
** check_rights.c for check_rights in /home/hamid/b2rush1/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 13:36:22 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 17:49:15 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	usr_right(struct stat sb)
{
  int	right;

  right = 0;
  if (sb.st_mode & S_IRUSR)
    right = right + 4;
  if (sb.st_mode & S_IWUSR)
    right = right + 2;
  if (sb.st_mode & S_IXUSR)
    right = right + 1;
  return (check_rights(right));
}

char	grp_right(struct stat sb)
{
  int	right;

  right = 0;
  if (sb.st_mode & S_IRGRP)
    right = right + 4;
  if (sb.st_mode & S_IWGRP)
    right = right + 2;
  if (sb.st_mode & S_IXGRP)
    right = right + 1;
  return (check_rights(right));
}

char	oth_right(struct stat sb)
{
  int	right;

  right = 0;
  if (sb.st_mode & S_IROTH)
    right = right + 4;
  if (sb.st_mode & S_IWOTH)
    right = right + 2;
  if (sb.st_mode & S_IXOTH)
    right = right + 1;
  return (check_rights(right));
}

char	check_rights(int right)
{
  if (right == 0)
    return ('0');
  else if (right == 1)
    return ('1');
  else if (right == 2)
    return ('2');
  else if (right == 3)
    return ('3');
  else if (right == 4)
    return ('4');
  else if (right == 5)
    return ('5');
  else if (right == 6)
    return ('6');
  else if (right == 7)
    return ('7');
}

char	*assemble_rights(struct stat sb)
{
  char	*rights;
  char	type;
  char	r1;
  char	r2;
  char	r3;

  type = file_type(sb);
  r1 = usr_right(sb);
  r2 = grp_right(sb);
  r3 = oth_right(sb);
  rights = rights_to_str(type, r1, r2, r3);
  return (rights);
}
