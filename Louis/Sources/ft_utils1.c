/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:15:05 by lreille           #+#    #+#             */
/*   Updated: 2023/03/03 19:30:38 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

size_t  ft_dbltablen(char **tab)
{
    size_t  i;

    i = 0;
    while (tab[i])
        i++;
    return (i);
}