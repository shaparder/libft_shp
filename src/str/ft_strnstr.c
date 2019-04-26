/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osfally <osfally@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:17:54 by osfally           #+#    #+#             */
/*   Updated: 2019/02/21 21:21:21 by osfally          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (sub[0] == '\0')
		return ((char *)str);
	while (str[x] && x < len)
	{
		if (str[x] == sub[y])
			y++;
		else
		{
			x -= y;
			y = 0;
		}
		if (sub[y] == '\0')
			return ((char *)(str + x - y + 1));
		x++;
	}
	return (NULL);
}
