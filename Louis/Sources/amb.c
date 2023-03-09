/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:50:23 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/09 23:54:57 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

void save_cam(char *info1, char **info2, t_scene *scene)
{
	scene->amb = malloc(sizeof(t_cam));
	scene->cam->intensity = ft_atoi(*info1);
	scene->cam->color = save_dir(**info2);
}

t_color save_color(char **colors, t_scnee *scene)
{
	t_color	*color;

	color = malloc(sizeof(t_color));
	color->r = (unsigned char)ft_atoi(colors[0]);
	color->g = (unsigned char)ft_atoi(colors[1]);
	color->b = (unsigned char)ft_atoi(colors[2]);
}