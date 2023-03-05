/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elem_min_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:50:18 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/05 21:18:23 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

bool    ft_check_pl_content(char **tab)
{
    char    **info1;
    char    **info2;
    char    **info3;

    if (ft_dbltablen(tab) == 1)
    {
        info1 = ft_split(tab[1], ',');
        info2 = ft_split(tab[2], ',');
        info3 = ft_split(tab[3], ',');
    }
    if (ft_check_coord(info1) == 1)
        if (ft_check_coord(info2) == 1)
            if (ft_check_colors(info3) == 1)
               return (true);
    return (false);
}

bool    ft_check_sp_content(char **tab)
{
    char    **info1;
    char    *info2;
    char    **info3;

    if (ft_dbltablen(tab) == 4)
    {
        info1 = ft_split(tab[1], ',');
        info2 = ft_strcpy(tab[2]);
        info3 = ft_split(tab[3], ',');
    }
    if (ft_check_coord(info1) == 1)
        if (ft_check_float(info2) == 1)
            if (ft_check_colors(info3) == 1)
                return (true);
    return (false);
} 

bool    ft_check_cy_content(char **tab)
{
    char    **info1;
    char    **info2;
    char    *info3;
    char    *info4;
    char    **info5;

    if (ft_dbltablen(tab) == 6)
    {
        info1 = ft_split(tab[1], ',');
        info2 = ft_split(tab[2], ',');
        info3 = ft_strcpy(tab[3]);
        info4 = ft_strcpy(tab[4]);
        info5 = ft_split(tab[5], ',');
    }
    if (ft_check_coord(info1) == 1 && ft_check_coord(info2) == 1)
        if (ft_check_float(info3) == 1 && ft_check_float(info4) == 1)
            if (ft_check_coord(info5)== 1)
                return (true);
    return (false);
}