/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:09:51 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/03 00:20:26 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_next(const char *format, va_list args, int *i)
{
	if (format[*i] == '%')
	{
		(*i)++;
		return (ft_handle_format(format[(*i)++], args));
	}
	return (ft_putchar(format[(*i)++]));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;
	int		total_len;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	i = 0;
	total_len = 0;
	while (format[i] != '\0')
	{
		len = ft_print_next(format, args, &i);
		if (len == -1)
		{
			va_end(args);
			return (-1);
		}
		total_len = total_len + len;
	}
	va_end(args);
	return (total_len);
}
