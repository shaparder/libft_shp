/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoimax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viduvern <viduvern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:36:16 by osfally           #+#    #+#             */
/*   Updated: 2019/04/23 14:38:34 by viduvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_atoimax(char *str)
{
	int					sign;
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
