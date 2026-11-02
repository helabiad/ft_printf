/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 14:49:37 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/02 15:09:44 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbr(const unsigned int nbr)
{
	int	write_value;
	int	rec_value;

	if (nbr == 0)
		return (ft_putchar('0'));
	rec_value = 0;
	if (nbr >= 10)
		rec_value = ft_put_unsigned_nbr(nbr / 10);
	if (rec_value < 0)
		return (-1);
	write_value = ft_putchar(nbr % 10 + '0');
	if (write_value == -1)
		return (-1);
	return (rec_value + write_value);
}
