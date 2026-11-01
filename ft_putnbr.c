/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 14:10:52 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/01 21:01:30 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_rec_putnbr(const long nb)
{
	int	rec_value;
	int	total;

	total = 0;
	if (nb >= 10)
	{
		rec_value = ft_rec_putnbr(nb / 10);
		if (rec_value == -1)
			return (-1);
		total = rec_value;
	}
	rec_value = ft_putchar(nb % 10 + '0');
	if (rec_value == -1)
		return (-1);
	return (total + rec_value);
}

int	ft_putnbr(const int nbr)
{
	int		rec_value;
	int		total;
	long	nb;

	nb = (long)nbr;
	if (nb == 0)
		return (ft_putchar('0'));
	total = 0;
	if (nb < 0)
	{
		nb = -nb;
		if (ft_putchar('-') == -1)
			return (-1);
		total = 1;
	}
	rec_value = ft_rec_putnbr(nb);
	if (rec_value < 0)
		return (-1);
	return (total + rec_value);
}
