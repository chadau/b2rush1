/*
** my_put_nbr_base.c for convert_base in /home/hamid/b2rush1/my_tar/step1/my_archive
** 
** Made by Hamidoullah NOUR OMAR
** Login   <hamid@epitech.net>
** 
** Started on  Sat Mar  4 18:58:52 2017 Hamidoullah NOUR OMAR
** Last update Sat Mar  4 19:07:48 2017 Hamidoullah NOUR OMAR
*/

char	*my_put_nbr_base(int nb, char *base)
{
  int	result;
  int	reste;
  char	*new;
  char	*str;
  int	i;

  i = 0;
  new = malloc(sizeof(char) * 12 + 1);
  result = 0;
  if (nb < 0)
    nb = nb * (-1);
  while (i < 5)
    {
      if (nb > my_strlen(base) - 1)
	{
	  result = nb % my_strlen(base);
	  nb = nb / my_strlen(base);
	  my_put_nbr_base(nb, base);
	  str = char_to_str(base[result]);
	  new = my_strcat(new, str, 0, 0);
	}
      else
	{
	  str = char_to_str(base[nb]);
	  new = my_strcat(new, str, 0, 0);
	}
      i++;
    }
  my_putstr(new);
}

int	main()
{
  my_put_nbr_base(1000, "01234567");
}
