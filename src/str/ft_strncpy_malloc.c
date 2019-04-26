/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_malloc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viduvern <viduvern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:14:27 by osfally           #+#    #+#             */
/*   Updated: 2019/04/23 14:19:08 by viduvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strncpy_malloc(char *s1, size_t len)
{
	size_t	i;
	char	*s2;

	s2 = ft_strnew(len);
	i = 0;
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
