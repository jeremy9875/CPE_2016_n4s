/*
** lidar.c for lidar in /home/jeremy.elkaim/CPE_2016_n4s/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon May 29 09:52:50 2017 jeremy elkaim
** Last update Sun Jun  4 13:18:51 2017 jeremy elkaim
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int	get_info_lidar()
{
  char	*buffer;
  char	**tab;
  float	speed;

  while (1)
    {
      my_putstr("GET_INFO_LIDAR\n");
      buffer = get_next_line(0);
      raceend(buffer);
      buffer = check_str(buffer);
      tab = my_show_word_tab(buffer);
      speed = atof(tab[15]);
      if (car_forward(speed) == 1)
	return (1);
      if (turn(tab, speed) == 1)
        return (1);
    }
  return (0);
}

int	raceend(char *str)
{
  int   i;
  int   index;
  char  *new;

  index = 0;
  i = my_strlen(str) - 1;
  if ((new = malloc(sizeof(char *) * my_strlen(str))) == NULL)
    return (84);
  while (str[i] != POINT && str[i] != '\0')
    i--;
  i--;
  while (str[i] != POINT && str[i] != '\0')
    i--;
  i++;
  while (str[i] != POINT && str[i] != '\0')
    new[index++] = str[i++];
  new[index] = '\0';
  if (my_strcmp(TRACK, new) == 0)
    {
      free(new);
      read_inst("STOP_SIMULATION\n");
      return (1);
    }
  free(new);
  return (0);
}

int	turnlorr(float angle, char *str)
{
  my_putstr("WHEELS_DIR:");
  if (angle < 0.0)
    my_putchar('-');
  my_putstr(str);
  str = get_next_line(0);
  if (raceend(str) == 1)
    return (1);
  return (0);
}

char	*check_str(char *str)
{
  int	i;
  int	index;
  char	*tmp;

  i = 0;
  index = 0;
  if ((tmp = malloc(sizeof(char *) * 250)) == NULL)
    return (NULL);
  while (i != 3)
    if (str[index++] == POINT)
      i++;
  i = 0;
  while (str[index] != '\0')
    {
      if ((str[index] >= '0' && str[index] <= '9')
	  || str[index] == '.' || str[index] == POINT)
        {
          tmp[i] = str[index];
          i++;
        }
      index++;
    }
  tmp[i - 1] = '\0';
  return (tmp);
}
