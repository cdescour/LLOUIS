/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_obj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:37:56 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/03 19:32:44 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

930#include "../Includes/minirt.h"

bool ft_check_obj(char **tab)
{
    if (!tab)
        return (true);
    else if (ft_strcmp("C", tab[0]))
        return (check_cam(tab))
    else if (ft_strcmp("L", tab[0]))
        return (true);
    else if (ft_strcmp("A", tab[0]))
        return ();
    else if (ft_strcmp("sp", tab[0]))
        return (true);
    else if (ft_srcmp("pl", tab[0]))
        return (true);

}