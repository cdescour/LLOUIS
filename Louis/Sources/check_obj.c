/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_obj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:37:56 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/08 12:47:53 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

int ft_check_obj(char **tab)
{
    if (!tab[0])
        return (true);
    else if (ft_strcmp("C", tab[0]))
        return (true);//check_cam(tab));
    else if (ft_strcmp("L", tab[0]))
        return (true);
    else if (ft_strcmp("A", tab[0]))
        return (true);
    else if (ft_strcmp("sp", tab[0]))
        return (true);
    else if (ft_strcmp("pl", tab[0]))
        return (true);
    return (false);
}
