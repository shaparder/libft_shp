/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imaxtoa_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viduvern <viduvern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:26:49 by osfally           #+#    #+#             */
/*   Updated: 2019/04/23 14:37:04 by viduvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char				*ft_rev(char *str)
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

char				*ft_imaxtoa_base(intmax_t num, uintmax_t base, int flag)
{
	char			*str;
	int				i;
	uintmax_t		n;

	i = 0;
	str = ft_memalloc(21);
	(num < 0 ? ((str[i++] = '-') && (num *= -1)) : 0);
	n = num;
	while (n > (base - 1))
		if (n % base < 10)
		{
			str[i++] = n % base + '0';
			n /= base;
		}
		else
		{
			str[i++] = (flag == 1 ? n % base + 'A' - 10 : n % base + 'a' - 10);
			n /= base;
		}
	if (n < 10)
		str[i] = n + '0';
	else
		str[i] = (flag == 1 ? n + 'A' - 10 : n + 'a' - 10);
	return (ft_rev(str));
}
