/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elem_cap_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:01:28 by lreille           #+#    #+#             */
/*   Updated: 2023/03/09 23:26:47 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

int    ft_check_A_content(char **tab)
{
	char    *info1;
	char    **info2;
	int		stats;

	stats = true;
	if (ft_dbltablen(tab) != 3)
		return (false);
	info1 = tab[1];
	info2 = ft_split(tab[2], ',');
	if (ft_lum_ratio_check(info1) == false)
		stats = false;
	if (ft_check_colors(info2) == false)
		stats = false;
	if (stats == true)
		save_amb(info1, info2, scene);
	free(info1);
	free_tab(info2);
	return (stats);
}

int    ft_check_C_content(char **tab, t_scene scene)
{
	char    **info1;
	char    **info2;
	char    *info3;
	int		stats;

	stats = true;
	if (ft_dbltablen(tab) != 4)
		return (false);
	info1 = ft_split(tab[1], ',');
	info2 = ft_split(tab[2], ',');
	info3 = tab[3];
	if ((ft_coord_check(info1) == false)
		stats = false;
	if (ft_vector_check(info2) == false)
		stats = false;
	if (ft_check_fov(info3) == false))
		stats = false;
	if (scene->nb_cam != 0)
		stats = false;
	if (stats == true)
		save_cam(info1, info2, info3, scene);
	free_tab(info1);
	free_tab(info2);
	free(info3);
	return (stats);
}

int	ft_check_L_content(char **tab)
{
	char    **info1 = NULL;
	char    *info2 = NULL;
	char    **info3 = NULL;
	if (ft_dbltablen(tab) == 4 || ft_dbltablen(tab) == 3)
	{
		info1 = ft_split(tab[1], ',');
		info2 = tab[2];
		info3 = ft_split(tab[3], ',');
	}
	else
		return (0);
	printf("chars in test ->%d\n", ft_first_char_check(tab));
		printf("info1->coord check :%d\n", ft_coord_check(info1));
  	printf("info2->lum ratio check :%d\n", ft_lum_ratio_check(info2));
	printf("info3->check colors :%d\n", ft_check_colors(info3));
	if ((ft_coord_check(info1) == 1) && (ft_lum_ratio_check(info2) == 1)
		&& ft_check_colors(info3) == 1)
		return (1);
	return (0);
}