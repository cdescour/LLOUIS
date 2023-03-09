/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cam.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:50:23 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/09 22:25:00 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

void save_cam(char **info1, char **info2,char *info3, t_scene scene)
{
	scene->cam = malloc(sizeof(t_cam));
	scene->cam->pos = save_pos(**info1);
	scene->cam->dir = save_dir(**info2);
	scene->cam->fov = ft_atoi(info3);
}

t_pos save_pos(char **info1)
{
	t_pos	*pos;
	char	**temp1;
	char	**temp2;
	char	**temp3;

	temp1 = ft_split(info1[0], '.');
	temp2 = ft_split(info1[1], '.');
	temp3 = ft_split(info1[2], '.');
	pos = malloc(sizeof(t_pos));
	pos->x = ft_atoi(temp1[0]) * 1000 + ft_atoi_size(temp1[1], 3);
	pos->y = ft_atoi(temp2[0] * 1000) + ft_atoi_size(temp2[1], 3);
	pos->z = ft_atoi(temp3[0] * 1000) + ft_atoi_size(temp2[1], 3);
	free_tab (temp1);
	free_tab (temp2);
	free_tab (temp3);
}

t_pos dir(char **info2)
{
	t_pos	*pos;
	char	**temp1;
	char	**temp2;
	char	**temp3;

	temp1 = ft_split(info2[0], '.');
	temp2 = ft_split(info2[1], '.');
	temp3 = ft_split(info2[2], '.');
	pos = malloc(sizeof(t_pos));
	pos->x = ft_atoi(temp1[0]) * 1000 + ft_atoi_size(temp1[1], 3);
	pos->y = ft_atoi(temp2[0] * 1000) + ft_atoi_size(temp2[1], 3);
	pos->z = ft_atoi(temp3[0] * 1000) + ft_atoi_size(temp2[1], 3);
	free_tab (temp1);
	free_tab (temp2);
	free_tab (temp3);
}