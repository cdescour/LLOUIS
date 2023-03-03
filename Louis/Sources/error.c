/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:43:45 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/03 19:34:12 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/minirt.h"

void ft_error(char *str)
{
    ft_putstr_fd(str, 2);
}