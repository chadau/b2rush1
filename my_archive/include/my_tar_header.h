/*
** my_tar_header.h for  in /home/devesno/Projects/b2rush1/my_archive/include
** 
** Made by 
** Login   <lucas.cheminade@epitech.eu>
** 
** Started on  Sat Mar  4 17:14:20 2017 
** Last update Sat Mar  4 18:09:39 2017 
*/

#ifndef MY_TAR_HEADER_H_
# define MY_TAR_HEADER_H_

# include <sys/types.h>
# include <unistd.h>
# include <sys/stat.h>
# include <string.h>
# include <stdio.h>
# define ERROR_RETURN (84)
# define SUCCESS (0)
typedef struct	s_my_posix_header
{
  char		name[100];
  char		mode[8];
  char		uid[8];
  char		gid[8];
  char		size[12];
  char		mtime[12];
  char		chksum[8];
  char		typeflag;
  char		linkname[100];
  char		magic[6];
  char		version[2];
  char		uname[32];
  char		gname[32];
  char		devmajor[8];
  char		devminor[8];
  char		prefix[155];
}		t_my_posix_header;
int		my_archive(char *);

#endif /* MY_TAR_HEADER_H_ */
