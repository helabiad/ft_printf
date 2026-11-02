/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 10:58:34 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/02 18:34:38 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(const char format, va_list args)
{
	if (format == 'c')
		return(ft_putchar(va_arg(args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (ft_put_pointer(va_arg(args, void *)));
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_put_unsigned_nbr(va_arg(args, unsigned int)));
	if (format == 'x')
		return (ft_put_hex_lower(va_arg(args, unsigned int)));
	if (format == 'X')
		return (ft_put_hex_upper(va_arg(args, unsigned int)));
	if (format == '%')
		return (ft_putchar('%'));
	return (-1);
}
