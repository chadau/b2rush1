/*
** my_putchar.c for my_putchar in /home/hamid/tmp/Bootstrap/Minishell_1
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Tue Jan 17 19:32:51 2017 Hamidoullah NOUR OMAR
** Last update Sun Jan 22 21:28:02 2017 Hamidoullah NOUR OMAR
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
