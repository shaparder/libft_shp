/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imaxtoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viduvern <viduvern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:33:55 by osfally           #+#    #+#             */
/*   Updated: 2019/04/23 14:37:23 by viduvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	nlen(intmax_t n)
{
	int len;

	len = (n <= 0 ? 1 : 0);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_imaxtoa(intmax_t n)
{
	uintmax_t		nbr;
	char			*str;
	int				negative;
	int				len;

	negative = (n < 0 ? 1 : 0);
	len = nlen(n);
	MACH(str = (char *)malloc(sizeof(char) * (len + 1)), NULL);
	nbr = (n < 0 ? -n : n);
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
