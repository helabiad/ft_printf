/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <helabiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 10:50:48 by helabiad          #+#    #+#             */
/*   Updated: 2026/11/02 23:04:29 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_handle_format(const char format, va_list args);
int		ft_putchar(const int c);
int		ft_putstr(const char *str);
int		ft_putnbr(const int nbr);
int		ft_put_unsigned_nbr(const unsigned int nbr);
int		ft_put_hex(const unsigned long long nbr, const char *base);
int		ft_put_hex_lower(const unsigned int nbr);
int		ft_put_hex_upper(const unsigned int nbr);
int		ft_put_pointer(const void *ptr);
size_t	ft_strlen(const char *s);

#endif
