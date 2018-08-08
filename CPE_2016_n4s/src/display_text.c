/*
** display_text.c for display_text.c in /home/jeremy.elkaim/CPE_2016_n4s/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue May  2 14:05:30 2017 jeremy elkaim
** Last update Sun Jun  4 12:51:55 2017 jeremy elkaim
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void	my_putchar(char c)
{
  write(1 ,&c ,1);
}

void	my_putstr(char *str)
{
  while (*str)
    {
      my_putchar(*str);
      str++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}

int	my_strcmp(char *str, char *cmp)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && cmp[i] != '\0')
    {
      if (str[i] != cmp[i])
	return (1);
      i++;
    }
  return (0);
}

char	**my_show_word_tab(char *str)
{
  char  **tab;
  int   i;
  int   j;
  int   k;

  if ((tab = malloc(sizeof(char **) * my_strlen(str))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      k = 0;
      if ((tab[j] = malloc(sizeof(char *) * my_strlen(str))) == NULL)
        return (NULL);
      while (str[i] == POINT && str[i++] != '\0');
      while (str[i] != POINT && str[i] != '\0')
        tab[j][k++] = str[i++];
      tab[j++][k] = '\0';
      while (str[i] == POINT && str[i++] != '\0');
    }
  tab[j] = NULL;
  return (tab);
}
