/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:56:14 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/09 23:55:23 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

int	main(int argc, char **argv)
{
	t_arg	*arg;
	t_obj	*obj;

	check_arg(&arg, argc, argv);
	parse_file(&arg, &obj);
	return (0);
}
