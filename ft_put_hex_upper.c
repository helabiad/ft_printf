/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:34:35 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/02 13:45:52 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_upper(const unsigned int nbr)
{
	const char	*base;

	base = "0123456789ABCDEF";
	return (ft_put_hex((uintptr_t)nbr, base));
}
