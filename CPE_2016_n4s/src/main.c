/*
** main.c for main in /home/jeremy.elkaim/CPE_2016_n4s/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue May  2 14:04:56 2017 jeremy elkaim
** Last update Sun Jun  4 10:58:37 2017 jeremy elkaim
*/

#include <unistd.h>
#include <stdio.h>
#include "my.h"

int	main()
{
  my_putstr("START_SIMULATION\n");
  get_next_line(0);
  get_info_lidar();
  return (0);
}
