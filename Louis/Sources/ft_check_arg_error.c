/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:28:28 by lreille           #+#    #+#             */
/*   Updated: 2023/03/07 22:02:22 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

int	ft_is_good_float(char *info)
{
	if (ft_neg_in_check(info) == 1)
		return (E1005);
	else if (ft_count_dot(info) > 1)
		return (E1006);
	else if (ft_contains_wrong_symbols(info) == 1)
		return (E1007);
	else if (ft_good_after_dot(info) != 1)
		return (E1008);
	else
		return (ft_convert_float(info));
}

int	ft_is_good_nofloat(char *info)
{
	if (ft_neg_in_check(info) == 1)
		return (E1005);
	else if (ft_contains_wrong_symbols(info) == 1)
		return (E1007);
	else
		return (ft_is_nofloat(info));
}

int	ft_is_input(char *info)
{
	if (ft_count_dot(info) > 0)
		return (ft_is_good_float(info));
	else
		return (ft_is_good_nofloat(info));
}
