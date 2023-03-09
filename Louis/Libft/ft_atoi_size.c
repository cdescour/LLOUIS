/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:58:57 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/09 22:20:06 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_size(const char *str, int len)
{
	size_t	i;
	size_t	signe;
	size_t	nb;
	size_t	count;

	i = 0;
	signe = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	count = 0;
	while (str[i] >= '0' && str[i] <= '9' && count < len)
		nb = nb * 10 + str[i++] - '0' + 0 * count++;
	return (signe * nb);
}
