/*
** my.h for my in /home/jeremy.elkaim/CPE_2016_n4s/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue May  2 13:57:32 2017 jeremy elkaim
** Last update Sun Jun  4 12:20:13 2017 jeremy elkaim
*/

#ifndef MY_H_
# define MY_H_

# define TRACK	"Track Cleared"
# define POINT	':'

char	**my_show_word_tab(char *str);
char	*check_str(char *str);
int	read_inst(char *str);
int	get_info_lidar();
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_strcmp(char *str, char *cmp);
int	raceend(char *str);
int	car_forward(float angle);
int	turn(char **str, float angle);
int	turnlorr(float angle, char *str);
char	*my_strcpy(char *dest, char *src);
char	*get_next_line(const int fd);
char	*my_realloc(char *str, int size);

#endif /* !MY_H_ */
