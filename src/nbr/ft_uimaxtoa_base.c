/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uimaxtoa_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viduvern <viduvern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 14:39:04 by viduvern          #+#    #+#             */
/*   Updated: 2019/04/23 14:40:20 by viduvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char				*ft_reverse(char *str)
{
	int				i;
	int				len;

	i = 0;
	len = ft_strlen(str);
	if (str[i] == '-')
		i++;
	while (i < --len)
	{
		str[i] = str[i] ^ str[len];
		str[len] = str[i] ^ str[len];
		str[i] = str[i] ^ str[len];
		i++;
	}
	return (str);
}

char				*ft_uimaxtoa_base(uintmax_t num, uintmax_t base, int flag)
{
	char			*str;
	int				i;

	i = 0;
	str = ft_memalloc(21);
	while (num > (base - 1))
		if (num % base < 10)
		{
			str[i++] = num % base + '0';
			num /= base;
		}
		else
		{
			str[i++] =\
				(flag == 1 ? num % base + 'A' - 10 : num % base + 'a' - 10);
			num /= base;
		}
	if (num < 10)
		str[i] = num + '0';
	else
		str[i] = (flag == 1 ? num + 'A' - 10 : num + 'a' - 10);
	return (ft_reverse(str));
}
