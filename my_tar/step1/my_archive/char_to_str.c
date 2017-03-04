/*
** char_to_str.c for char_to_str in /home/hamid/PSU_2016_navy
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sun Feb 12 15:04:16 2017 Hamidoullah NOUR OMAR
** Last update Sun Feb 12 15:39:14 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

char	*char_to_str(char c)
{
  char	*str;

  str = malloc(sizeof(char) * 1 + 1);
  str[0] = c;
  str[1] = '\0';
  return (str);
}
