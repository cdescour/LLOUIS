/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elem_cap_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:01:28 by lreille           #+#    #+#             */
/*   Updated: 2023/03/07 22:44:01 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

bool    ft_check_A_content(char **tab)
{
    char    *info1;
    char    **info2;

    if (ft_dbltablen(tab) == 3)
    {
        info1 = ft_strcpy(tab[1]);
        info2 = ft_split(tab[2], ',');
    }
    if (ft_lum_ratio_check(info1) == 1)
        if(ft_check_colors(info2) == 1)
           return (true);
    return (false)
}

bool    ft_check_C_content(char **tab)
{
    char    **info1;
    char    **info2;
    char    *info3;

    if (ft_dbltablen(tab) == 4)
    {
        info1 = ft_split(tab[1], ',');
        info2 = ft_split(tab[2], ',');
        info3 = ft_strcpy(tab[3]);
    }
    if (ft_coord_check(info1) == 1)
        if (ft_vector_check(info2) == 1)
            if (ft_check_fov(info3) == 1)
                return (true);
    return (false);
}

bool    ft_check_L_content(char **tab)
{
    char    **info1;
    char    *info2;
    char    **info3;

    if (ft_dbltablen(tab) == 4 || ft_dbltablen(tab) == 3)
    {
        info1 = ft_split(tab[1], ',');
        info2 = ft_strcpy(tab[2]);
        info3 = ft_split(tab[3], ',');
    }
    if (ft_coord_check(info1) == 1)
        if (ft_lum_ratio_check(info2) == 1)
            if (ft_check_colors(info3) == 1)
                return (true);
    return (false);
}

