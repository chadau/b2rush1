/*
** rights_to_str.c for rights_to_str in /home/hamid/b2rush1/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 14:23:24 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 14:28:56 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	*rights_to_str(char type, char r1, char r2, char r3)
{
  char	*str;

  str = malloc(sizeof(char) * 4 + 1);
  str[0] = type;
  str[1] = r1;
  str[2] = r2;
  str[3] = r3;
  return (str);
}
