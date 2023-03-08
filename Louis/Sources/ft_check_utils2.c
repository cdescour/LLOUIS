/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lreille <lreille@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:25:17 by lreille           #+#    #+#             */
/*   Updated: 2023/03/07 21:30:18 by lreille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

int	ft_convert_float(char *info)
{
	int	i;
	int	j;
	int	ret;
	int	dot_pos;
	char	*str;

	i = 0;
	j = 0;
	dot_pos = ft_dot_pos(info);
	str = malloc(sizeof(char *) * dot_pos + 4);
	while (info[i] && i <= dot_pos + 3)
	{
		if (info[i] == '.' && info[i + 1] != '\0')
			i++;
		str[j++] = info[i++];
	}
	while (i++ <= dot_pos + 3)
		str[j++] = '0';
	str[j] = '\0';
	ret = atoi(str);
	free (str);
	return (ret);
}

int	ft_is_symbol(char c)
{
	if (c == '-' || c == '.')
			return (1);
	return (0);
}

int	ft_contains_wrong_symbols(char *info)
{
	int	i;

	i = 0;
	while (info[i])
	{
		if (ft_is_symbol(info[i]) == 0 && ft_isdigit(info[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_dot_pos(char *info)
{
	int	i;

	i = 0;
	while (info[i])
	{
		if (info[i] == '.')
			return (i);
		i++;
	}
	return (0);
}

int	ft_is_nofloat(char *info)
{
	int	i;
	int	j;
	int	ret;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * ft_strlen(info) + 4);
	while (info[i])
		str[j++] = info[i++];
	i = 0;
	while (i++ < 3)
		str[j++] = '0';
	str[j] = '\0';
	ret = atoi(str);
	free (str);
	return (ret);
}
