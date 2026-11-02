/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:20:50 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/02 14:58:00 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_lower(const unsigned int nbr)
{
	const char	*hex_base;

	hex_base = "0123456789abcdef";
	return (ft_put_hex((unsigned long long)nbr, hex_base));
}
