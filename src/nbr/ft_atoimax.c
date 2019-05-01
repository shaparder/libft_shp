/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoimax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osfally <osfally@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:36:16 by osfally           #+#    #+#             */
/*   Updated: 2019/04/30 17:14:23 by osfally          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

intmax_t		ft_atoimax(char *str)
{
	short				sign;
	intmax_t			nb;

	nb = 0;
	sign = 1;
	while ((*str == ' ') || ((*str >= 9) && (*str <= 13)))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ((*str >= '0') && (*str <= '9') && (*str != '\0'))
	{
		nb = nb * 10 + *str - 48;
		str++;
	}
	return (sign * nb);
}
