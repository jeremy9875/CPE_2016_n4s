/*
** get_next_line.c for get_next_line in /home/jeremy.elkaim/CPE_2016_n4s/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Thu Jun  1 19:53:34 2017 jeremy elkaim
** Last update Sun Jun  4 13:01:35 2017 jeremy elkaim
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "my.h"

char		recup_c(int filed)
{
  static char	buffer[READ_SIZE];
  static char	*buff;
  static int	a;
  char		b;

  if (a == 0)
    {
      a = read(filed, buffer, READ_SIZE);
      buff = (char *)&buffer;
      if (a <= 0)
	return (0);
    }
  b = *buff;
  buff = buff + 1;
  a = a - 1;
  return (b);
}

char		*myrealloc(char *str, int size)
{
  int		x;
  char		*a;

  a = str;
  x = 0;
  str = malloc(size);
  if (str == NULL)
    return (NULL);
  while (a[x] != '\0')
    {
      str[x] = a[x];
      x = x + 1;
    }
  free(a);
  return (str);
}

char		*get_next_line(const int fd)
{
  char		*line;
  char		t;
  int		x;

  x = 0;
  line = malloc(READ_SIZE + 1);
  if (line == NULL)
    return (NULL);
  t = recup_c(fd);
  if (t == '\0')
    return (NULL);
  while (t != '\n' && t != '\0')
    {
      line[x] = t;
      x = x + 1;
      if (x % (READ_SIZE + 1) == 0)
	line = myrealloc(line, x + READ_SIZE + 1);
      if (line == NULL)
	return (NULL);
      t = recup_c(fd);
    }
  line[x] = '\0';
  return (line);
}
