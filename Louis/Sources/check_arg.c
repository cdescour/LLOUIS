/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:42:21 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/09 23:54:58 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

void	check_arg(t_arg *arg, int argc, char **argv)
{
	if (argc > 2)
		ft_error(E1001);
	else if (argc < 2)
		ft_error(E1002);
	if (argv[1] == 0)
		ft_error(E1003);
	arg->name_file = argv[1];
	arg->fd_file = open(arg->name_file, O_RDONLY);
	if (arg->fd_file < 3)
		ft_error(E1004);
}