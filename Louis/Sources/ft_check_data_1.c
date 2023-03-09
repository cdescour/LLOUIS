/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:27:07 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/06 18:37:07 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

int ft_check_fov(char *info)
{
    int fov;
    int i;

    i = 0;
    fov = ft_atoi(info);
    while (info[i])
    {
        if (ft_isdigit(info[i]) != 1)
            return (false);
        i++;
    }
    if (fov < 0 || fov > 180)
        return (false);
    return (true);
}

int	ft_check_float(char *info)
{

}

int	ft_check_coord(char **info)
{

}

int	ft_check_colors(char **info)
{
	int	r;
	int	g;
	int	b;

	r = ft_atoi(info[0]);
	g = ft_atoi(info[1]);
	b = ft_atoi(info[2]);
	if (ft_dbltablen(info) != 3)
		return (false);
	if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
		return (false);
	return (true);
}

int	ft_check_ratio(char **info)
{

}