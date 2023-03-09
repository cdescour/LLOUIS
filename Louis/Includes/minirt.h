/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:49:40 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/09 23:53:07 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define MINIRT_H

# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <limits.h>
# include <mlx.h>

# include "../Libft/libft.h"


# define true 1
# define false 0

//setings
# define IMG_X 1920
# define IMG_Y 1080

//E1->argcheck an objects
# define E1001 "Error\nNot enough arguments\n"
# define E1002 "Error\nToo many arguments\n"
# define E1003 "Error\nFile name not defined\n"
# define E1004 "Error\nFile can not be found\n"
# define E1005 "Error\nWrong place for negative sign\n"
# define E1006 "Error\nHas more than one dot\n"
# define E1007 "Error\nContains invalid symbols\n"
# define E1008 "Error\nCan't have nothing after dot :(\n"
# define E1009 "Error\nWrong orientation vector range on x\n"
# define E1010 "Error\nWrong orientation vector range on y\n"
# define E1011 "Error\nWrong orientation vector ranke on z\n"
# define E1012 "Error\nLuminosity ratio out of range\n"
# define E1013 "Error\nFOV out of range\n"
# define E1014 "Error\nCoordinates of 'x' out of the zone!\n"
# define E1015 "Error\nCoordinates of 'y' out of the zone!\n"
# define E1016 "Error\nCoordinates of 'z' out of the zone!\n"
# define E1017 "Error\nToo many elements!\n"
# define E1018 "Error\nCan't have them all at 0...#pragma endregion"
# define E1019 "Error\nInvalid colors input\n"
# define E1020 "Error\nWrong amount of elements\n"

typedef struct s_pos
{
	int	x;
	int	y;
	int	z;
}	t_pos;

typedef struct s_dir
{
	int x;
	int y;
	int z;
}	t_dir;

typedef struct s_color
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}	t_color;

typedef struct s_cam
{
    t_pos   *pos;
    t_dir   *dir;
    int     fov;
}   t_cam;

typedef struct s_amb
{
    int     intensity;
    t_color *color;
}   t_amb;

typedef struct s_spot
{
    t_pos   *pos;
    int     intensity;
}	t_spot;

typedef struct s_sphere
{
    t_pos   *pos;
    int     d;
    t_color *color;
}   t_sphere;

typedef struct s_plan
{
    t_pos   *pos;
    t_dir   *dir;
    t_color *color;
} t_plan;

typedef struct s_cyl
{
    t_pos   *pos;
    t_dir   *dir;
    int     d;
    int     height;
    t_color *color;
}   t_cyl;

typedef struct s_arg
{
    char    *name_file;
    int     fd_file;

}       t_arg;

typedef struct s_scene
{
	int			nb_equation;
	int			nb_cam;
	int			nb_amb;
	int			nb_spot;
	int			nb_sphere;
	int			nb_plan;
	int			nb_cyl;
	t_cam		*cam;
	t_amb		*amb;
	t_spot		*spot;
	t_sphere	*sphere;
	t_plan		*plan;
	t_cyl		*cyl;
}   t_scene;

//main.c
int	main(int argc, char **argv);
//check_arg.c
void check_arg(t_arg *arg, int argc, char **argv);
//parse_arg.c
void parse_arg(t_arg *arg, t_item *item);
//get_next_line.c
char	*get_next_line(int fd);
//check_obj.c
int ft_check_obj(char **tab);
//error.c
void ft_error(char *str);
#endif
Footer