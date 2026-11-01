/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:49:23 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/01 17:34:24 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	i;

	if (str == NULL)
		i = (int)write(1, "(null)", 6);
	else
	{
		i = (int)ft_strlen(str);
		i = (int)write(1, str, i);
	}
	return (i);
}
