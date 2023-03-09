/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elem_min_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:50:18 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/09 22:20:28 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

int    ft_check_pl_content(char **tab)
{
    if (ft_dbltablen(tab) == 4)
    { 
	char    **info1;
   	char    **info2;
    char    **info3;

        info1 = ft_split(tab[1], ',');
        info2 = ft_split(tab[2], ',');
        info3 = ft_split(tab[3], ',');
	printf("chars in test ->%d\n", ft_first_char_check(tab));
	printf("info1->coord check :%d\n", ft_coord_check(info1));
   	printf("info2->vector check :%d\n", ft_vector_check(info2));
 	printf("info3->check colors :%d\n", ft_check_colors(info3));
   	if ((ft_coord_check(info1) == 1) && (ft_vector_check(info2) == 1)
		&& (ft_check_colors(info3) == 1))
		return (1);

    }
    return (0);
}

int    ft_check_sp_content(char **tab)
{
    if (ft_dbltablen(tab) == 4)
    {
   	char    **info1;
   	char    *info2;
    char    **info3;

        info1 = ft_split(tab[1], ',');
        info2 = tab[2];
        info3 = ft_split(tab[3], ',');
	printf("chars in test ->%d\n", ft_first_char_check(tab));
	printf("info1->coord check :%d\n", ft_coord_check(info1));
	printf("info2->lum ratio check :%d\n", ft_lum_ratio_check(info2));
 	printf("info3->check colors :%d\n", ft_check_colors(info3));

    	if ((ft_coord_check(info1) == 1) && (ft_lum_ratio_check(info2) == 1)
		&& (ft_check_colors(info3) == 1))
		return (1);
    }
    return (0);
}

int    ft_check_cy_content(char **tab)
{
    if (ft_dbltablen(tab) == 6)
    {
    	char    **info1;
    	char    **info2;
    	char    *info3;
    	char    *info4;
    	char    **info5;

        info1 = ft_split(tab[1], ',');
        info2 = ft_split(tab[2], ',');
        info3 = tab[3];
        info4 = tab[4];
        info5 = ft_split(tab[5], ',');
		printf("chars in test ->%d\n", ft_first_char_check(tab));
		printf("info1->coord check :%d\n", ft_coord_check(info1));
		printf("info2->vector check :%d\n", ft_vector_check(info2));
		printf("info3->check float :%d\n", ft_check_float(info3));
		printf("info4->check float :%d\n", ft_check_float(info4));
		printf("info5->check colors :%d\n", ft_check_colors(info5));

		if ((ft_coord_check(info1) == 1 && ft_vector_check(info2) == 1)
				&& (ft_check_float(info3) == 1 && ft_check_float(info4) == 1)
					&& (ft_check_colors(info5)== 1))
							return (1);

    }
    return (0);
}
