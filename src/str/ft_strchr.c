/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osfally <osfally@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:53:29 by osfally           #+#    #+#             */
/*   Updated: 2019/04/07 22:53:29 by osfally          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** The functions strchr() return a pointer to the located character
** or NULL if the character does not appear in the string.
*/

char	*ft_strchr(const char *str, int ch)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)ch)
			return ((char *)(str + i));
		i++;
	}
	if ((char)ch == '\0')
		return ((char *)(str + i));
	else
		return (NULL);
}
