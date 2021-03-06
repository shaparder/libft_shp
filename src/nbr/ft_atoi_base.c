/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viduvern <viduvern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:33:37 by exam              #+#    #+#             */
/*   Updated: 2019/04/23 14:40:08 by viduvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	set_values(int *sign, int *base_count, int *nbr, int *i)
{
	*sign = 1;
	*base_count = 1;
	*nbr = 0;
	*i = 0;
}

int		parse(char c)
{
	if (c >= '0' && c <= '9')
		return (c - 48);
	if (c >= 'a' && c <= 'z')
		return (c - 87);
	if (c == 'A' || c == 'Z')
		return (c - 55);
	else
		return (-1);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int sign;
	int base_count;
	int nbr;
	int i;

	set_values(&sign, &base_count, &nbr, &i);
	while ((*str == 32) || ((*str >= 9) && (*str <= 13)))
		str++;
	sign = (*str == '-') ? -1 : 1;
	str = (*str == '+' || *str == '-') ? str++ : str;
	while (parse(*str) < str_base && parse(*str) >= 0)
	{
		i++;
		str++;
	}
	str--;
	while (i != 0)
	{
		nbr = nbr + (base_count * parse(*str));
		base_count = base_count * str_base;
		str--;
		i--;
	}
	return (sign * nbr);
}
