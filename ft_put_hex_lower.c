/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:20:50 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/02 14:09:27 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_lower(unsigned int nbr)
{
	const char	*hex_base;

	hex_base = "0123456789abcdef";
	return (ft_put_hex((uintptr_t)nbr, hex_base));
}
