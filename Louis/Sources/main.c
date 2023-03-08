/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:56:14 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/08 12:20:31 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

int	main(int argc, char **argv)
{
	t_arg	*arg;
	t_item	*item;

	arg = malloc(sizeof(t_arg));
	item = malloc(sizeof(t_item));
	check_arg(arg, argc, argv);
	parse_arg(arg, item);

	return (0);
}
