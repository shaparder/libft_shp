/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_shp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viduvern <viduvern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:59:19 by osfally           #+#    #+#             */
/*   Updated: 2019/04/23 14:19:24 by viduvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** The functions strchr() return the located character
** or '\0' if the character does not appear in the string.
*/

char	ft_strchr_shp(const char *str, int ch)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)ch)
			return (str[i]);
		i++;
	}
	if ((char)ch == '\0')
		return (str[i]);
	else
		return ('\0');
}
