/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg_error2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:31:07 by lreille           #+#    #+#             */
/*   Updated: 2023/03/07 22:46:51 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

int	ft_vector_check(char **info)
{
	int	v1;
	int	v2;
	int	v3;

	v1 = ft_is_input(info[0]);
	v2 = ft_is_input(info[1]);
	v3 = ft_is_input(info[2]);
	if (v1 < -1000 || v1 > 1000)
		return (E1009);
	else if (v2 < -1000 || v2 > 1000)
		return (E1010);
	else if (v3 < -1000 || v3 > 1000)
		return (E1011);
	else
		return (1);
}

int	ft_lum_ratio_check(char *info)
{
	int	ratio;

	ratio = ft_is_input(info);
	if (ratio < 0 || ratio > 1000)
		return (E1012);
	else
		return (1);
}

void	ft_check_ratio(char **info)
{
	int	i;

	i = 0;
	while (info[i])
	{
		info[i] = ft_lum_ratio_check(info[i]);
		i++;
	}
}

int	ft_check_fov(char *info)
{
	int	fov;

	fov = ft_is_input(info);
	if (fov < 0 || fov > 180000)
		return (E1013);
	return (1);
}

int	ft_coord_check(char **info)
{
	int	x;
	int	y;
	int	z;

	x = ft_is_input(info[0]);
	y = ft_is_input(info[1]);
	z = ft_is_input(info[2]);

	if (x == INT_MIN || x == INT_MAX)
		return (E1014);
	if (y == INT_MIN || y == INT_MAX)
		return (E1015);
	if (z == INT_MIN || z == INT_MAX)
		return (E1016);
	return 0;
}
