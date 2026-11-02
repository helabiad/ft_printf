/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:13:15 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/02 14:55:13 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(const unsigned long long nbr, const char *base)
{
	int	rec_return_value;
	int	wrt_return_value;

	rec_return_value = 0;
	if (nbr == 0)
		return (ft_putchar(base[0]));
	if (nbr >= 16)
		rec_return_value = ft_put_hex(nbr / 16, base);
	if (rec_return_value == -1)
		return (-1);
	wrt_return_value = ft_putchar(base[nbr % 16]);
	if (wrt_return_value == -1)
		return (-1);
	return (rec_return_value + wrt_return_value);
}
