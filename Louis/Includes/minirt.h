/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:49:40 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/05 21:01:49 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
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
# define NULL __null

//E1->argcheck
# define E1001 "Not enough arguments\n"
# define E1002 "Too many arguments\n"
# define E1003 "File name not defined\n"
# define E1004 "File can not be found\n"

typedef struct s_arg
{
    char    *name_file;
    int     fd_file;

}       t_arg;

typedef struct s_obj
{
    t_cam   *cam;
    t_spot  *spot;
    t_amb   *amb;
    t_item  *item;
    
}   t_obj;

typedef struct s_cam
{
    t_pos   *pos;
    t_dir   *dir;
    int     fov;
}   t_cam;

typedef struct s_spot
{
    t_pos   *pos;
    int     intensity;
}   t_spot;

typedef struct s_amb
{
    int     intensity;
    t_color *color;
}   t_amb;

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

typedef struct s_item
{
    char    type;
    void    *ptr;
    struct s_item   *next;
}   t_item;

#endif
