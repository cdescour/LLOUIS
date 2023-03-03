/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:10:16 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/03 19:34:09 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minirt.h"

char    *get_line(char *str, t_arg *arg)
{
        int     i;
        
        i = 0;
        str = get_next_line(arg->fd_file);
        if (!str)
            return (NULL);
        while (str[i])
        {
            if (str[i] == '\n')
                str[i] = '\0';
            i++;
        }
        return (str);
}

void parse_arg(t_arg *arg, t_obj *obj)
{
    char    *str;
    char    **splited
    int     i;

    i = 0;
    str = get_line(str, arg);
    while (str)
    {
        i++;
        splited = ft_split(str, ' ');
        if (ft_check_obj(splited) == false)
            ft_error_line(i);
        ft_save_obj(splited);
        free (str);
        str = get_line(arg->fd_file);
    }
    

}