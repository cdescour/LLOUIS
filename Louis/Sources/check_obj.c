/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_obj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:37:56 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/09 23:54:59 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

int	ft_check_obj(char **tab)
{
	if (!tab)
		return (true);
	else if (!ft_strcmp("C", tab[0]))
		return (ft_check_C_content(tab));
	else if (!ft_strcmp("L", tab[0]))
		return (ft_check_L_content(tab));
	else if (!ft_strcmp("A", tab[0]))
		return (ft_check_A_content(tab));
	else if (!ft_strcmp("sp", tab[0]))
		return (ft_check_sp_content(tab));
	else if (!ft_strcmp("pl", tab[0]))
		return (ft_check_pl_content(tab));
	else if (!ft_strcmp("cy", tab[0]))
		return (ft_check_cy_content(tab));
	return (false);
}