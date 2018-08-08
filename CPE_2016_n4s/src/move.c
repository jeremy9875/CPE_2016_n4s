/*
** move.c for move in /home/jeremy.elkaim/CPE_2016_n4s/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon May 29 10:26:12 2017 jeremy elkaim
** Last update Sun Jun  4 12:24:31 2017 jeremy elkaim
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int		read_inst(char *str)
{
  my_putstr(str);
  str = get_next_line(0);
  if (raceend(str) == 1)
    return (1);
  return (0);
}

int		car_forward(float angle)
{
  int		i;

  if (angle >= 2000)
    i = read_inst("car_forward:1.0\n");
  else if (angle >= 1500)
    i = read_inst("car_forward:0.8\n");
  else if (angle >= 1000)
    i = read_inst("car_forward:0.7\n");
  else if (angle >= 2000)
    i = read_inst("car_forward:0.6\n");
  else if (angle >= 2000)
    i = read_inst("car_forward:0.4\n");
  else
    i = read_inst("car_forward:0.2\n");
  return (i);
}

int		turn(char **str, float angle)
{
  float		right;
  float		left;
  int		i;

  left = atof(str[1]);
  right = atof(str[31]);
  if (angle >= 1500)
    i = turnlorr(left - right, "0.005\n");
  else if (angle >= 1000)
    i = turnlorr(left - right, "0.05\n");
  else if (angle >= 600)
    i = turnlorr(left - right, "0.1\n");
  else if (angle >= 400)
    i = turnlorr(left - right, "0.2\n");
  else if (angle >= 200)
    i = turnlorr(left - right, "0.3\n");
  else
    i = turnlorr(left - right, "0.5\n");
  return (i);
}
