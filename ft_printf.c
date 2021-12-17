/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:29:20 by azaid             #+#    #+#             */
/*   Updated: 2021/12/17 15:19:16 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

void	ft_parse_format(int *i, char c, va_list ap)
{
	if (c == 'c')
		ft_putchar(va_args(ap, int));
	if (c == 's')
		ft_puts(va_args(ap, char *));
	if (c == 'i' || c == 'd')
		ft_putnbr(va_args(ap, int));
	if (c == 'u')
		ft_putnbr(va_args(ap, unsigned int));
	if (c == 'x')
		ft_puthex(va_args(ap, int));
	if (c == '%')
		ft_putchar('%');
	i++;
}

int	ft_printf(char *format, ...)
{
	va_list		ap;
	int			i;

	i = 0;
	va_start(ap, format);
	while (format[i++])
	{
		if (format[i] == '%')
			ft_parse_format(&i, format[i + 1], ap);
		ft_putchar(format[i]);
	}
	va_end(ap);
	return (i);
}
