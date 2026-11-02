/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:59:48 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/02 14:56:17 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(const void *ptr)
{
	int			prefix_len;
	int			address_len;
	unsigned long long	address;
	const char	*base_hex;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	base_hex = "0123456789abcdef";
	address = (unsigned long long)ptr;
	prefix_len = ft_putstr("0x");
	if (prefix_len == -1)
		return (-1);
	address_len = ft_put_hex(address, base_hex);
	if (address_len == -1)
		return (-1);
	return (prefix_len + address_len);
}
